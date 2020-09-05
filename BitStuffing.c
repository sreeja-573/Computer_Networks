//BitStuffing
#include <stdio.h>
#include <string.h>

int main(){
    char bit[100];
    char flag[] = {'0','1','1','1','1','1','1','0','\0'};
    int count = 0;
    printf("Enter Bits : ");
    scanf("%s",bit);
    printf("After Bit Stuffing\n");
    printf("%s",flag);
    for(int i = 0;i < strlen(bit);i++){
        if(bit[i] == '1'){
            count++;
        }else{
            count=0;
        }
        printf("%c",bit[i]);
        if(count == 5){
            printf("0");
            count = 0;
        }
    }
    printf("%s",flag);
    return 0;
}
