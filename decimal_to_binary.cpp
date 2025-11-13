// Function : convert decimal to binary 

#include<stdio.h>

long to_Bin(int);

int main()
{
    long binary_no;
    int decimal_no;
	printf("\n convert decimal to binary using function :\n");
	  
    printf(" \n Input any decimal number : ");
    scanf("%d",&decimal_no);
    binary_no = to_Bin(decimal_no);
    printf("\n The Binary value is : %ld\n\n",binary_no);

    return 0;
}
long to_Bin(int decimal_no)
{
    long binary_no=0,remainder,f=1;
    while(decimal_no != 0)
    {
         remainder = decimal_no % 2;
         binary_no = binary_no + remainder * f;
         f = f * 10;
         decimal_no = decimal_no / 2;
    }
    return binary_no;
}

