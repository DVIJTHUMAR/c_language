#include<stdio.h>
#include<string.h>

struct form
{
	char name[50],gmail[50],gender[10],village[10],dist[10],state[10];
	int mobail_no;
	
}f[100];

main()
{	
	int i, n;
	
	printf("Enter no of Data :- ");
	scanf("%d",&n);
	
	printf("\n");
	
	for(i=0; i<n; i++)
	{
		printf("Name :- ");
		scanf("%s",&f[i].name);
		printf("Gmail :- ");
		scanf("%s",&f[i].gmail);
		printf("Gender :- ");
		scanf("%s",&f[i].gender);
		printf("Village :- ");
		scanf("%s",&f[i].village);
		printf("Dist :- ");
		scanf("%s",&f[i].dist);
		printf("State :- ");
		scanf("%s",&f[i].state);
		printf("Mobail_no :- ");
		scanf("%s",&f[i].mobail_no);

		printf("\n");
	}
	printf("\n");
		
	for(i=0; i<n; i++)
	{
		printf("\nUser Name :- %s\n",f[i].name);
		printf("Gmail :- %s\n",f[i].gmail);
		printf("Gender :- %s\n",f[i].gender);
		printf("Village :- %s\n",f[i].village);
		printf("Dist :- %s\n",f[i].dist);
		printf("State :- %s\n",f[i].state);
		printf("Mobail_no :- %d\n\n",f[i].mobail_no);
	}
	
	
}