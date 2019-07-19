#include<stdio.h>
#include<string.h>

int main()
{
   register int t;
    char str[50];
    printf("Enter the string.\n");
    gets(str);
    puts("\n");
    puts(str);
    char *p;
    p=&str;
    for(t=strlen(p) - 1;t>-1;t--)
        printf("%c",p[t]);
}
