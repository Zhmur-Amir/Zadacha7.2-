#include"func.h"
int func(const char* filename, char* slovo)
{
FILE *input;
int b=0;
char str[256],word[256], *sbegin, *send;
int min=INT_MAX;
input=fopen(filename, "r");
if (input)
    {
    while(fgets(str,256,input))
    {
        for(sbegin=strchr(str, '"'), send=(sbegin?strchr(sbegin+1,'"'):NULL);
        sbegin&&send;
        sbegin=strchr(send+1,'"'),send=(sbegin?strchr(sbegin+1,'"'):NULL))
        {
            strncpy(word,sbegin+1,send-sbegin-1);
             word[send-sbegin-1]='\0';
             if(strlen(word)<=min && *word>='A' && *word<='Z')
            {
              b=1;
              min=strlen(word);
              slovo[0]='\0';
              strcpy(slovo,word);
            }

        }


    }
}
else
    {
        printf("Error! Cannot open file...");
    }
fclose(input);
return b;
}

