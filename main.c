#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char s[300], name[100], eyeCl[50];
int yo[100];


void lowercase(char *s)
{
    for (int i = 0; s[i]!='\0'; i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }
    }
}

bool pa(char *s)
{
    return stricmp(s,"bye")==0;
};
int main()
{
    FILE *fp;
    fp = fopen("CMakeFiles/asd.txt", "r");

    fscanf(fp,"%[^\n]",s);
    printf("%s",s);

    printf("\n\nHi, I'm you PC. Let's talk!\nRemember that you can always end this chat by saying Bye.");
    printf("So I will start with some questions. Are you ok with that? \nYes||No\n");
    gets(s);
    lowercase(s);
    if(stricmp(s,"yes")!=0)return 0;
    printf("Good, here we go :)\n");
    while(!pa(s) && fgets(s,255,fp)!=NULL )
    {
        //pa(s);

        printf("%s", s);

    }
    printf("Have a good day!");
    fclose(fp);
    return 0;
}