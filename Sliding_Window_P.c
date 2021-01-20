#include <stdio.h>

int main(){
    int w, n;
    printf("Enter Window size:");
    scanf("%d", &w);
    printf("\nEnter number of frames to transmit:");
    scanf("%d", &n);
    printf("\nEnter %d frames:\n", n);
    int F[n];
    for(int i = 1;i <= n;i++){
        scanf("%d", &F[i]);
    }
    printf("After sending %d frames at each stage sender waits for acknowledgement sent by the receiver\n", w);
    for(int i = 1;i <= n;i++){
        if(i % w == 0){
            printf("%d\n", F[i]);
            printf("Acknowledgement of above frames sent is received by sender\n");
        }else
        {
            printf("%d ", F[i]);
        }
    }
    if(n % w != 0){
        printf("\nAcknowledgement of above frames sent is received by sender\n");
    }
    return 0;
}