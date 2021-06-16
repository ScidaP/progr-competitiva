#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char string[26];
    int cantPalabras, i;
    scanf("%s",string);
    scanf("%d",&cantPalabras);
    for(i=0;i<cantPalabras;i++)
    {
        char palabra[12];
        int j,k,l,cont=0;
        scanf("%s",palabra);
        l=strlen(palabra);
        for(j=0;palabra[j]!='\0';j++)
        {
            for(k=0;string[k]!='\0';k++)
            {
                if(palabra[j]==string[k])
                {
                    cont++;
                    break;
                }
            }
        }
        if(cont==l)
        printf("Yes\n");
        else
        printf("No\n");
    }
    getchar();
    getchar();
    getchar();
    return 0;
}