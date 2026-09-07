#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define MAXLEN 4096

void stripNl(char *s) {
    size_t len = strlen(s);
    while (len > 0 && (s[len - 1] == '\n' || s[len - 1] == '\r')) {
        s[len - 1] = '\0';
        len--;
    }
}

void toLowerStr(char *dest, const char *src) {
    for (size_t i = 0; src[i] != '\0'; i++) {
        dest[i] = tolower((unsigned char)src[i]);
    }
    dest[strlen(src)] = '\0';
}

void replaceInTags(char *w, size_t max_len, const char *s, const char *t) {
    size_t s_len = strlen(s);
    size_t t_len = strlen(t);
    if (s_len == 0)
        return;

    char lower_s[MAXLEN];
    char lower_t[MAXLEN];
    char lower_w[MAXLEN];

    toLowerStr(lower_s, s);
    toLowerStr(lower_t, t);
    toLowerStr(lower_w, w);

    char *start_tag = w;
    while ((start_tag = strchr(start_tag, '<')) != NULL) {
        char *end_tag = strchr(start_tag, '>');
        if (!end_tag)
            break;

        char *pos = start_tag + 1;

        while (pos < end_tag) {
            size_t offset = pos - w;
            size_t tag_remaining = end_tag - pos;
            char *found_lower = strstr(lower_w + offset, lower_s);
            if (!found_lower ||
                (size_t)(found_lower - (lower_w + offset)) + s_len > tag_remaining) {
                break;
            }
            pos = w + (found_lower - lower_w);
            size_t cur_len = strlen(w);
            if (t_len > s_len && cur_len + (t_len - s_len) + 1 > max_len) {
                return;
            }
            memmove(pos + t_len, pos + s_len, strlen(pos + s_len) + 1);
            memcpy(pos, t, t_len);

            size_t low_offset = pos - w;
            memmove(lower_w + low_offset + t_len, lower_w + low_offset + s_len,
                    strlen(lower_w + low_offset + s_len) + 1);
            memcpy(lower_w + low_offset, lower_t, t_len);

            end_tag += (t_len - s_len);

            pos += t_len;
        }
        start_tag = end_tag + 1;
    }
}

int main(void) {
    char s[MAXLEN];
    char t[MAXLEN];
    char w[MAXLEN];

    while (fgets(s, sizeof(s), stdin)) {
        if (!fgets(t, sizeof(t), stdin))
            break;
        if (!fgets(w, sizeof(w), stdin))
            break;

        stripNl(s);
        stripNl(t);
        stripNl(w);

        replaceInTags(w, MAXLEN, s, t);
        printf("%s\n", w);
    }

    return 0;
}
