/*Guilheme Oliveira - 0050016114*/

#include <stdio.h>
int main()
{
	int obj[3000];
	int i;
	int menor=0;
	int q;
	
	for(i=0;i<3000;i++)
	{
		printf("\nDiga o peso em gramas do objeto %d\n", i+1);
		scanf("%d", &obj[i]);
	}
	 menor=obj[0];
	 
	for(i=0;i<3000;i++)
	{
	if(obj[i]<menor)
	{
		menor=obj[i];}
		
		if(obj[i]==menor){
			q+=1;
		}
		
	}	
printf("O menor peso eh %d, %d objetos com esse peso", menor, q);

}

