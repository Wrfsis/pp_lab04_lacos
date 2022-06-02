#include <stdio.h>
#include <stdlib.h>
#include <time.h>



/*
20. Faça um programa que calcule a soma de todos os números primos abaixo de dois milhões.
*/
/*
int main()
{
    int i1, i2, n2 = 0;
    float soma = 2;

    for (i1 = 3; i1 <= 2000000; i1 += 2) {
        n2 = 2;
        for (i2 = 3; i2 <= (int)sqrt(i1); i2 += 2) {
            if (i1 % i2 == 0) {
                n2 += 2;
                break;
            }
        }

        if (n2 == 2) {
            soma += i1;
        }
    }

    printf("A soma e igual a: %.0f\n\n", soma);

    return 0;
}

*/






/*
19. Escreva um programa que receba como entrada o valor do saque realizado pelo cliente de
um banco e retorne quantas notas de cada valor serão necessárias para atender ao saque com
a menor quantidade de notas possível. Serão utilizadas notas de 100, 50, 20, 10, 5, 2 e 1 real.
*/

/*
int main(){

    int n100, n50, n20, n10, n5, n2, n1, valor;
    int r100, r50, r20, r10, r5, r2, r1;

    printf("Digite o valor a ser sacado: R$");
    scanf("%d", &valor);

    printf("O valor a ser sacado equivale a:\n");
    printf("->%d notas de R$100\n", valor/100);
    printf("->%d notas de R$50\n", valor%100/50);
    printf("->%d notas de R$20\n", valor%100%50/20);
    printf("->%d notas de R$10\n", valor%100%50%20/10);
    printf("->%d notas de R$5\n", valor%100%50%20%10/5);
    printf("->%d notas de R$2\n", valor%100%50%20%10%5/2);
    printf("->%d notas de R$1\n\n", valor%100%50%20%10%5%2/1);

return 0;

}
*/


/*
18. Um funcionário recebe aumento anual. Em 1995 foi contratado por 2000 reais. Em 1996
recebeu aumento de 1.5%. A partir de 1997, os aumentos sempre correspondem ao dobro do
ano anterior. Faça programa que determine o salário atual do funcionário.
*/
/*

int main(){
	float sal_ini, reaj;
	int i, ano1, ano2;

	printf("Digite o ano de contratacao: ");
	scanf("%d", &ano1);
	printf("Digite o ano atual: ");
	scanf("%d", &ano2);
	printf("Digite o Salario inicial: ");
	scanf("%f", &sal_ini);
	printf("Digite o percentual de reajuste: ");
	scanf("%f", &reaj);

	for (i = ano1 + 1; i <= ano2; i++){
		sal_ini = (sal_ini*(1.0+(reaj/100)));
		printf("Ano %i - Salario R$%.2f - Reajuste de %.1f%%.\n", i, sal_ini, (reaj));
		reaj = 2 * reaj;
	}

	printf("Salario atual: %.2f", sal_ini);

	return 0;
}
*/


/*
17. Chico tem 1.50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1.10 metros e cresce
3 centímetros por ano. Escreva um programa que calcule e imprima quantos anos serão
necessários para que Zé seja maior que Chico.
*/

/*
int main() {
    float ac, az, cc, cz;
    int ano = 0;

    printf("Qual a altura de Chico (em metros): ");
    scanf("%f", &ac);
    printf("Quanto ele cresce por ano (em centimetros): ");
    scanf("%f", &cc);
    printf("Qual a altura de Ze (em metros): ");
    scanf("%f", &az);
    printf("Quanto ele cresce por ano (em centimetros): ");
    scanf("%f", &cz);

    while(ac >= az){
        ac += (cc/100);
        az += (cz/100);
        ano++;
        printf("Chico: %.2f\tZe: %.2f\tAno: %d\n\n", ac, az, ano);
    }
    printf("Em %d anos Ze sera maior que Chico\n\n", ano);

    return 0;
}
*/


/*
16. Faça um programa que apresente um menu de opções para o cálculo das seguintes
operações entre dois números:
 Adição (opção 1)
 Subtração (opção 2)
 Multiplicação (opção 3)
 Divisão (opção 4).
 Saída (opção 5)
O programa deve possibilitar ao usuário a escolha da operação desejada, a exibição do resultado
e a volta ao menu de opções. O programa só termina quando for escolhida a opção de saída
(opção 5)
*/

/*
int main(){

    int opcao, n1, n2;

    do{
        printf("____CALCULADORA____\n");
        printf("Para Adicao: (opcao 1)\n");
        printf("Para Subtracao: (opcao 2)\n");
        printf("Para Multiplicacao: (opcao 3)\n");
        printf("Para Divisao: (opcao 4)\n");
        printf("Sair: (opcao 5)\n\n");
        printf("Digite uma opcao: ");
        scanf("%d", &opcao);

        if(opcao > 0 && opcao < 5){
            printf("\nDigite o primeiro valor: ");
            scanf("%d", &n1);
            printf("Digite o segundo valor: ");
            scanf("%d", &n2);
        }

        switch(opcao) {

        case 1:
            printf("Soma: %d\n\n", n1 + n2);
            break;
        case 2:
            printf("Subtracao: %d\n\n", n1 - n2);
            break;
        case 3:
            printf("Multiplicacao: %d\n\n", n1 * n2);
            break;
        case 4:
            while(n2 == 0) {
                printf("\nSegundo numero igual a 0!\nDigite outro valor: ");
                scanf("%d", &n2);
            }
            printf("Divisao: %d\n\n", n1 / n2);
            break;
        case 5:
            printf("\n\n");
            break;
        default:
            printf("\nOpcao invalida.\nDigite outra opcao: \n\n");
        }
    } while(opcao != 5);



return 0;

}
*/


/*
15. Faça um programa que leia um conjunto não determinado de valores, um de cada vez, e escreva para cada um dos valores lidos, o quadrado, o cubo e a raiz quadrada. Finalize a entrada
de dados com um valor negativo ou zero.
*/

/*
int main(){
    int n;
    float quadrado, cubo, raiz;
    printf("\n--Digite valor negativo ou zero para sair--\n");
    n = 1;
    while (n > 0){
            printf("\n Digite um numero: ");
            scanf("%i", &n);
            if (n > 0){
            quadrado = pow(n,2);
            cubo = pow(n,3);
            raiz = sqrt(n);

            printf("\n QUADRADO: %f ", quadrado);
            printf("\n CUBO: %f ", cubo);
            printf("\n RAIZ: %f \n\n", raiz);
             }
    }

    return 0;
}
*/


/*
14. Faça um programa que simula o lançamento de dois dados, d1 e d2, n vezes, e tem como saída o número de cada dado e a relação entre eles (>, <, =) de cada lançamento.
*/

/*
int main(){ //esse não consegui fazer!
    int i, n, d1, d2;


    printf("Digite o numero de lancamentos dos dados: ");
    scanf("%d", &n);

    srand(time(NULL));

     for(i=1; i<=n; i++){
        d1 = 1 + ( rand() % n );
        d2 = 1 + ( rand() % n );
    }

    for(i=1; i<=n; i++){
    if (d1&&d2)
    printf("Dado 1 \(%d\) > Dado 2 \(%d\)\n", d1, d2);
    }

    return 0;
}
*/


/*
13. Faça um programa que some todos os números naturais abaixo de 1000 que são múltiplos de 3 ou 5.
*/

/*
int main(){
    int n1 = 3, n2 = 5, n3 = 0, i = 0;

    for(i = 0; i < 1000; i++){
        if(i % n1 == 0 || i % n2 == 0){
            n3 += i;
        }
    }

    printf("A soma dos multiplos de 3 e 5 abaixo de 1000 = %d\n\n", +n3);

    return 0;

}
*/



/*
12. Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores desse número, com exceção dele próprio. Ex.: a soma dos divisores do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78
*/

/*
int main(){
    int n, i=0, ndivi=0, somdivi=0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        if (n % i == 0) {
            printf(" %d ", i);
            ndivi++;
            somdivi+=i;
        }
    }

    printf("\nA soma dos divisores e %d\n\n", somdivi);

    return 0;
}
*/


/*
11. Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente.
*/

/*
int main(){

    int n, i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

        for(i=0; i<=n; i++)
        	printf("%d", i);

        	return 0;
		}
*/


/*
10. Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.
*/

/*
int main(){

     int  i=0, s=0;

     while(i!= 9){
      if(i%2 == 0){
       s+=i;
      }
      i++;
     }

     printf("A soma dos 50 numeros pares e: %d", s);

     return 0;

}
*/


/*
9. Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares.
*/

/*
int  main (){
    int n, i=1;

    printf("Digite um numero inteiro: " );
    scanf("%d",&n);

    while(n!= 0 ){
            if(i%2!= 0 ){
                 printf("%d" ,i);
                 n--;
            }
        i++;
    }
    return  0 ;
}
*/


/*
8. Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.
*/

/*
int main(){

    int n, nmaior, nmenor;
    int i;

    printf("Digite o 1o numero inteiro: ");
    scanf("%i", &n);

    nmaior = n;
    nmenor = n;

    for(i=1; i<10; i++){
     printf("\nDigite o %o numero inteiro: ",i+1);
     scanf("%i", &n);

     if(n>nmaior){
            nmaior=n;
     }else{
        if(n<nmenor){
            nmenor=n;
            }
        }
    }

     printf("\nO menor numero digitado foi: %d", nmenor);
     printf("\nO maior numero digitado foi: %d", nmaior);

    return 0;
}
*/


/*
7. Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua
média.
*/

/*
int main(){
    int n, i, a = 0;
    float m = 0;

    printf("--Digite numeros inteiros positivo--\n");

    for (i = 1; i <= 4; i++){

    printf("Digite o %do numero: ", i);
    scanf("%d", &n);

    while(n<=0){
    printf("Numero nao positivo. \n%d ", i);
    scanf("%d", &n);
    }
        a = a+n;
    }
        m = a/4;

    printf("\nA media dos numeros digitados e %.2f", m);

    return 0;

}
*/


/*
6. Faça um programa que leia 10 inteiros e imprima sua média.
*/

/*
int main(){

    int n=1, n1, n2=0;

    while(n<=10){
        printf("Digite o numero %d: ", n++);
        scanf("%d", &n1);
        n2 = n2 + n1;
    }
    printf("A media dos valores digitados e igual a: %d", n2/10);

    return 0;

}
*/

/*
5. Faça um programa que peça ao usuário para digitar 10 valores e some-os.
*/

/*
int main(){

    int n=1, n2, soma=0;

    while(n<=10){
        printf("Digite o valor %d: ", n++);
        scanf("%d", &n2);
        soma = soma + n2;
    }
    printf("%d", soma);

    return 0;
}
*/


/*
4. Escreva um programa que declare um inteiro, inicialize-o com 0, e incremente-o de 1000 em 1000, imprimindo seu valor na tela, até que seu valor seja 100.000 (cem mil).
*/

/*
int main(){

    int n;
    n = 0;
    while(n<=100000){
        printf("%d ", n);
        n = n + 1000;
    }
    printf("\n\n");

    return 0;
}
*/


/*
3. Faça um algoritmo utilizando o comando while que mostra uma contagem regressiva na tela, iniciando em 10 e terminando em 0. Mostrar uma mensagem “FIM!” após a contagem.
*/

/*
int main()
{
    int n;
    n = 10;
    while(n>=0){
        printf("%d ", n--);
    }
        printf("FIM!");
    return 0;
}
*/


/*
2. Escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3 vezes. A primeira vez deve usar a estrutura de repetição for, a segunda while, e a terceira do-while.
*/

/*
int main(){

    int n;
    for(n = 1; n <= 100; n++){
        printf("%d ", n);
    }

    printf("\n\n");

    n = 1;
    while(n<=100){
        printf("%d ", n);
        n++;
    }

    printf("\n\n");

    n = 1;
    do{
        printf("%d ", n);
        n++;
    }while(n<=100);

    printf("\n\n");


    return 0;
}
*/


/*
1. Faça um programa que determine o mostre os cinco primeiros múltiplos de 3, considerando números maiores que 0.
*/

/*
int main(){

    int n;
    n = 1;
    while(n<=5){
        printf("%d ", n*3);
        n++;
        }

    return 0;
}
*/
