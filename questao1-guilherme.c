/*Guilheme Oliveira - 0050016114*/

#include <stdio.h>
int main()
{
	int mat[4][4];
	int i, j;
	int soma=0;
	int soma2=0;
	int soma3=0;
	int soma4=0;
	
	printf("\nMatriz");
    for(i=0; i<4; i++)
    {
        for(j=0;j<4;j++)
        {
            printf("\nEntre com o elemento [%d, %d]:", i+1,j+1);
            scanf("%d", &mat[i][j]);
		}
	}
	soma=mat[3][1]+mat[1][2];
	soma2=mat[3][2]+mat[2][2];
	soma3=mat[3][3]+mat[3][2];
	soma4=mat[3][4]+mat[4][2];
	
	printf("o somatorio eh: |%d, %d, %d, %d|", soma, soma2, soma3, soma4);
	
	
}
