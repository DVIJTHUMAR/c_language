#include <stdio.h>

main(){
	
	int phy , chem, bio, math, com;
	float per;
	
	printf(" Enter five subject marks...\n\n");
	
	printf(" Physics :-  \n Chemistry :-  \n Biology :-  \n Mathematics :-  \n Computer :- \n\n");
	scanf("%d %d %d %d %d",&phy , &chem, &bio, &math, &com);
	
	per= (phy + chem + bio + math + com) / 5.0;
	
	printf("Persantage = %.2f \n",per);
	
	if(per >= 90)
    {
        printf("Grade A");
    }
    	else if(per >= 80)
    	{
        	printf("Grade B");
    	}
    		else if(per >= 70)
    		{
        		printf("Grade C");
    		}
    			else if(per >= 60)
    			{
        			printf("Grade D");
    			}
    				else if(per >= 50)
    				{
        				printf("Grade E");
    				}
    					else if(per >= 40){
    						
	   							printf("Grade F");
    						
							}else{
								
        						printf("Fail");
        						
    						}

	
}