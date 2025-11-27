// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int n,bp;
    // Write C code here
    printf("Enter the number and bitposition \n");
    scanf("%d %d",&n,&bp);
    printf("Enter the number before operation is n=%d \n",n);
   // n=n|(1<<bp);//set
   //n=n&~(1<<bp);//clear
    n=n^(1<<bp);//toggle
    printf("number after operation is n=%d \n",n);

    return 0;
}
