#include <stdio.h>
#include <locale.h>

int main(){
    //idioma português
    setlocale(LC_ALL, "Portuguese");
    
    //ex1();
    //ex2();
    //ex3();
    //ex4();
    //ex5();
    //ex6();
    ex7();

    return 0;
}
void ex1(){
    int num;
    printf("Algoritmo que identifica se é par ou ímpar\n");
    printf("Digite o número: ");
    scanf("%d", &num);

    if (num % 2 == 0){
        printf("O número %d é par!\n", num);
    }
    else{
        printf("O número %d é impar!\n", num);
    }

}
void ex2(){
    int num1, num2, num3;
    int maior = 0;
    printf("Algoritmo que verifique qual o maior valor entre três números reais lidos\n");
    printf("Digite três números \n");
    printf("Primeiro: ");
    scanf("%d", &num1);
    printf("Segundo: ");
    scanf("%d", &num2);
    printf("Terceiro: ");
    scanf("%d", &num3);

    if(num1 > num2){
        maior = num1;
    }
    else{
        maior = num2;
    }

    if(maior > num3){
        printf("O maior número é %d \n", maior);
    }
    else{
        maior = num3;
        printf("O maior número é %d \n", maior);

    }

}
void ex3(){
    float altura, pesoideal;
    char genero;
    printf("Cálculo do peso ideal\n");
    printf("Qual seu Genero? \n");
    printf("Digite M para masculino ou F para feminino : ");
    scanf("%c",&genero);
    printf("Qual sua altura? \n");
    printf("Digite um numero Real tipo 0.00 : ");
    scanf("%f",&altura);

    if(genero == 'M' || genero == 'm'){
        pesoideal = 72.7  *  altura - 58;
        printf("\nSeu peso ideal masculino é %f \n", pesoideal);

    }
    else if(genero == 'F' || genero == 'f'){
        pesoideal = 62.1  *  altura - 44.7;
        printf("Seu peso ideal feminino é %f \n", pesoideal);

    }
    else{
        printf("Opção invalida\n");
    }

}
void ex4(){
    int ano;
    printf("Identificar se um ano lido é bissexto\n");
    printf("Digite o ano: ");
    scanf("%d",&ano);

    if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
        printf("É bissexto!\n"); 
    }
    else{
        printf("Não é bissexto! \n");
    }


}
void ex5(){
  
    float lado1, lado2, lado3;

    printf("Digite o valor do primeiro lado: ");
    scanf("%f", &lado1);

    printf("Digite o valor do segundo lado: ");
    scanf("%f", &lado2);

    printf("Digite o valor do terceiro lado: ");
    scanf("%f", &lado3);

    if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1)) {
        printf("Os valores informados formam um triangulo valido!\n");
    } else {
        printf("Os valores informados NAO formam um triangulo.\n");
    }

    return 0;
}
void ex6(){

}
void ex7(){
    int idade;
    printf("\nDigite sua Idade:");
    scanf("%d",&idade);

    if (idade < 18 && idade > 0){
        printf("É menor de idade!\n");
    }
    else if (idade > 18 && idade < 100){
        printf("É maior de idade!");
    }
    else if(idade < 0){
        printf("Impossivel\n");
    }
    else{
        printf("Já morreu\n");
    }
}