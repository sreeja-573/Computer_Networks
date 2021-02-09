#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define bucketSize 512

void bktInput(int pktSize,int outRate){
    if(pktSize > bucketSize){
        printf("Bucket overflow\n");
    }
    else {
        while(pktSize > outRate){
            printf("%d bytes outputed\n",outRate);
            pktSize -= outRate;
        }
    
        if(pktSize > 0){
            printf("Last %d bytes sent\n" ,pktSize);
        }
        printf("Bucket output successful\n");
    }
}

int main(){
    int outRate, pktSize;
    srand(time(0));
    printf("Enter output rate : ");
    scanf("%d",&outRate);
    for(int i=1;i<=5;i++){
        pktSize = rand() % 600;
        printf("Packet no %d",i);
        printf("\t Packet size = %d\n",pktSize);
        bktInput(pktSize,outRate);
    }
}


/*
OUTPUT:

Enter output rate : 50
Packet no 1      Packet size = 487
50 bytes outputed
50 bytes outputed
50 bytes outputed
50 bytes outputed
50 bytes outputed
50 bytes outputed
50 bytes outputed
50 bytes outputed
50 bytes outputed
Last 37 bytes sent
Bucket output successful
Packet no 2      Packet size = 508
50 bytes outputed
50 bytes outputed
50 bytes outputed
50 bytes outputed
50 bytes outputed
50 bytes outputed
50 bytes outputed
50 bytes outputed
50 bytes outputed
50 bytes outputed
Last 8 bytes sent
Bucket output successful
Packet no 3      Packet size = 15
Last 15 bytes sent
Bucket output successful
Packet no 4      Packet size = 111
50 bytes outputed
50 bytes outputed
Last 11 bytes sent
Bucket output successful
Packet no 5      Packet size = 498
50 bytes outputed
50 bytes outputed
50 bytes outputed
50 bytes outputed
50 bytes outputed
50 bytes outputed
50 bytes outputed
50 bytes outputed
50 bytes outputed
Last 48 bytes sent
Bucket output successful

*/