#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char nome [60];
	float nota;
	int frequencia;
} Aluno;

		int verificaaprovacao(float nota, int frequencia, int total)
			{
				if (nota >=7 && frequencia >= (total*0.75))
				{
					return 1;
				}
				else 
					{
						return 0;
					}
			}
int main ()
{
	int totalaulas = 40;
	Aluno estudante;
	printf ("Digite o nome completo\t");
	fgets (estudante.nome, 60, stdin);
	estudante.nome[strcspn(estudante.nome, "\n")] ='\0';
	printf ("Digite a quantidade de aulas que voce foi\t");
	scanf ("%d", &estudante.frequencia);
	printf ("Digite sua nota\t");
	scanf ("%f", &estudante.nota);
	if (verificaaprovacao(estudante.nota, estudante.frequencia, totalaulas))
	{
		printf("Aluno: %-20s | Status: Aprovado", estudante.nome);
	}else 
	{
		printf("Aluno: %-20s | Status: Reprovado", estudante.nome);
	}

	return 0;
}
