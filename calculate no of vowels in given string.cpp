//calculate no of vowels in given string

#include <stdio.h> 
#include<stdlib.h>

char string[]="hello! How are you ?";

void ToLowercase(char *data)
{
	while(*data!='\0')
	{
		if(*data>='A' && *data<='Z')
		{
			*data+=32;
		}
		data++;
	}
	
}

int TotalVowels(char *data)
{
	int count=0;
	while(*data!='\0')
	{
		if(*data=='a'|| *data=='e' || *data=='i' || *data=='0' || *data=='u' )
		{
			count++;
		}
		data++;
	}
	return count;
}
int main()
{
  
     
  printf("Given string is = %s\n", string);
  ToLowercase(string);  
  printf("lower case string is = %s\n", string);
  
  printf("Total vowels is = %d \n", TotalVowels(string));
  return 0;
}

