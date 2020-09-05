#include <stdio.h>
#include <string.h>

int main(){
    char a[30], fs[50] = " ", t[2], sd, ed, x[2], y[2];
        printf("Enter characters to be stuffed:");
        scanf("%s", a);
        printf("\nEnter a character that represents starting delimiter:");
        scanf(" %c", &sd);
        printf("\nEnter a character that represents ending delimiter:");
        scanf(" %c", &ed);
        x[0] = sd;
        x[1] = '\0';
        y[0] = ed;
        y[1] = '\0';
        strcat(fs, x);
        for(int i = 0; i < strlen(a); i++)
        {   
            t[0] = a[i] ;
            t[1] = '\0';
            if (t[0] == sd)
                strcat(fs, x);
            else if(t[0] == ed)
                strcat(fs, y);
            strcat(fs, t);
        }
        strcat(fs, y);
        printf("\n After stuffing:%s\n", fs);
        
    }