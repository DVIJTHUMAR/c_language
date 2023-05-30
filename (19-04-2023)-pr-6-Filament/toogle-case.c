#include <stdio.h>
#include <string.h>
 
int main()
{
    char d[100];  
    int i;
 
    printf("Enter  the string : ");
    gets(d);
    
    for(i=0; d[i]; i++)  
    {
        if(d[i] >= 65 && d[i] <= 90)
		{
			d[i]+=32;
		}else if(d[i] >= 97 && d[i] <= 122)
		{
			d[i]-=32;
		}
	}
 	
    printf("string in togglecase = %s\n",d);
}