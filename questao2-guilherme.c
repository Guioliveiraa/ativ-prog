/*Guilheme Oliveira - 0050016114*/

#include <stdio.h>
#include <string.h>
int main()
{
	int i, cont=0;
	char palavra[30], letra;
	printf("Entre com uma palavra:");
	gets(palavra);
	printf("Digite uma letra:\n");
	scanf("%c", &letra);
	for(i=0;palavra[i];i++)
	{
		if(palavra[i]==letra)
		{
			cont++;
		}
	}

printf("\nA letra '%c' aparece %d vez(s) na palavra '%s\n", letra, cont, palavra);
}

