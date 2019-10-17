#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

char s[300], name[100], eyeCl[50], sport[50];
int yo;

void lowercase(char *s)
{
    for (int i = 0; s[i]!='\0'; i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }
    }
}

int main()
{
    printf("\n\nHi, I'm you PC. Let's talk!\nRemember that you can always end this chat by saying Bye.");
    printf("So I will start with some questions. Are you ok with that? \nYes||No\n");
    gets(s);
    lowercase(s);
    if(stricmp(s,"yes")!=0)
    {
        printf("Have a good day then!\n");
        return 0;
    }
    printf("Good, here we go :)\n");
    printf("What is your name?\n");
    gets(name);
    lowercase(name);
    name[0]-=32;
    printf("Nice to meet you %s. That's a beautiful name!\n", name);
    printf("What colour are your eyes?\n");
    gets(eyeCl);
    lowercase(eyeCl);
    printf("What sport do you like?\n");
    gets(sport);
    lowercase(sport);
    if(strstr(sport,"not") || strstr(sport, "dont"))
    {
        printf("Oh, ok. I used to watch basketball.\n");
    }
    else
    {
        printf("%s is indeed a beautiful sport.\n",sport);
    }
    printf("Now that I know more about you, you can ask me everything.\n");
    printf("Such as:\n1.How's the weather?\n2.Do you like my eyes colour?\n3.How old are you?\n");
    printf("You can type bye to end this conversation\n");
    gets(s);
    while(strstr(s,"bye"))
    {
        if(strstr(s,"weather"))
        {
            printf("I'll just open a website for you.\n");
            system("START https://www.accuweather.com/ro/ro/cluj-napoca/287713/weather-forecast/287713");
        }
        else if(strstr(s,"colour"))
            printf("Of course, %s is a really beautiful colour\n",eyeCl);
        else if(strstr(s,"old"))
            printf("I turn 1 this year.\n");
        else if(strstr(s,"bye"))
            break;
        else
            printf("I didn't really understand you, can you repeat the question?\n");
        gets(s);
    }
    printf("Have a good day!\n");
    return 0;
}