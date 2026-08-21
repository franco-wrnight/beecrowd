#include <stdio.h>
#include <string.h>
#define MAXLEN 55

int findLongestCommonSubstring(char *s, char *t)
{
	int max_len = 0;
	for (int i = 0; s[i] != '\0'; i++)
	{
		for (int j = 0; t[j] != '\0'; j++)
		{
			int k = 0;
			while (s[i + k] != '\0' && t[j + k] != '\0' && s[i + k] == t[j + k])
			{
				k++;
			}
			if (k > max_len)
				max_len = k;
		}
	}
	return max_len;
}

int main(void)
{

	char s[MAXLEN];
	char t[MAXLEN];

	while (fgets(s, sizeof(s), stdin) != NULL && fgets(t, sizeof(t), stdin) != NULL)
	{
		s[strcspn(s, "\n")] = '\0';
		t[strcspn(t, "\n")] = '\0';

		printf("%d\n", findLongestCommonSubstring(s, t));
	}
	return 0;
}
