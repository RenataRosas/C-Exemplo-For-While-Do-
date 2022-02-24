#include <stdio.h>

int main() {
	
	char nomealuno;
	int ntotalalunos;
    int qtde_notas = 0, opcao;
    float nota, media, soma_notas = 0.0;

printf("Digite o numero total de alunos dentro da classe: ");
scanf("%d", ntotalalunos);

for(i=0; i<100; i++){
    do {
    	printf("digite o nome do aluno: ", nomealuno)
    	scanf("%s", &nomealuno)
        printf("\nDigite a nota do aluno %d: ", qtde_notas + 1); 
        scanf("%f", &nota); 
        qtde_notas += 1;
        soma_notas += nota;
        printf("\nDigite 1 para informar outra nota ou 2 para encerrar: "); 
        scanf("%d", &opcao);
    } 
		while (opcao != 2); 
    
	printf("\n\nQuantidade de alunos = %d", qtde_notas); 
    media = soma_notas / (float) qtde_notas;
    printf("\nMédia das notas = %.2f", media); 
}
    return 0;
}

/*
Atalhos matemáticos: += , -= , *= , /= e %=
+=
Em vez de escrever:
x = x + 2;
Podemos escrever:
x += 2;
-=
Em vez de escrever:
x = x - 1;
Podemos escrever:
x -= 1;
*=
Em vez de escrever:
x = x * 2;
Podemos escrever:
x *= 2;
/=
Em vez de escrever:
x = x / 2;
Podemos escrever:
x /= 2;
%=
Em vez de escrever:
x = x % 2;
Podemos escrever:
x %= 2;
*/
