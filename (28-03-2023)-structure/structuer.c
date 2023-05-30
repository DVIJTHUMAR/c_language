#include<stdio.h>
#include<string.h>

struct form
{
	char name[50],gmail[50],gender[10],village[10],dist[10],state[10];
	int mobail_no;
	
}f[100];

main()
{
	
	strcpy(f[0].name,"Dvij");
	strcpy(f[0].gmail,"dvijpatel222@gmail.com");
	strcpy(f[0].gender,"Male");
	strcpy(f[0].village,"Kalsari");
	strcpy(f[0].dist,"Junagadh");
	strcpy(f[0].state,"Gujarat");
	f[0].mobail_no= 873581530;
	
	printf("User Name :- %s\n",f[0].name);
	printf("Gmail :- %s\n",f[0].gmail);
	printf("Gender :- %s\n",f[0].gender);
	printf("Village :- %s\n",f[0].village);
	printf("Dist :- %s\n",f[0].dist);
	printf("State :- %s\n",f[0].state);
	printf("Mobail_no :- %d\n",f[0].mobail_no);

}