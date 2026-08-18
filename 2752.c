#include <stdio.h>
#include <string.h>

int main()
{
    char var[50];
    strcpy(var, "AMO FAZER EXERCICIO NO URI");
    printf("<%s>\n", var);
    printf("<%30s>\n", var);
    printf("<%.20s>\n", var);
    printf("<%-20s>\n", var);
    printf("<%-30s>\n", var);
    printf("<%.30s>\n", var);
    printf("<%30.20s>\n", var);
    printf("<%-30.20s>\n", var);
    return 0;
}
