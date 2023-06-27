#include <stdio.h> // biblioteca 
#include <stdlib.h> // biblioteca
#include<locale.h> // biblioteca
/*
Inicio do programa
*/
int main()
{
setlocale(LC_ALL, "Portuguese");
/*
Variaveis inteiras, e reais e vetores
*/
int item, qtd, c, qnt[7] = { 0 }; // variaveis inteiras
float vt, valor[7] = { 0 }; // variavel real
float preco[7] = { 5.00, 8.79, 9.99, 6.89, 4.80, 3.49, 4.99 };
/*
Menu da lanchonete com item, produto, codigo e preço unitario
*/
printf(" BEM VINDO A LANCHONETE M/A \n");// nome da lanchonete
printf(" -MENU- \n"); // menu da lanchonete
printf(" ________________________________________________\n");
printf("| Item | Produto |Codigo| Preco Unitario |\n");
printf("| _____|________________|______|_________________|\n");
printf("| 1 | Cachorro-quente| 100 | %.2f |\n", preco[0]);
printf("| 2 | X-Salada | 101 | %.2f |\n", preco[1]);
printf("| 3 | X-Bacon | 102 | %.2f |\n", preco[2]);// quadro com os itens disponiveis do menu
printf("| 4 | Misto | 103 | %.2f |\n", preco[3]);
printf("| 5 | Salada | 104 | %.2f |\n", preco[4]);
printf("| 6 | Água | 105 | %.2f |\n", preco[5]);
printf("| 7 | Refrigerante | 106 | %.2f |\n", preco[6]);
printf("|________________________________________________|\n");
printf("\n");
/*
Laço do while, condição booleana é executado pelo menos uma vez
*/
do {
printf("Digite o numero do item (1-7) ou 0 (ZERO) para finalizar seu PEDIDO:"); // Usuario deve escolher 1 ou mais 
itens do menu
scanf_s("%d", &item);
while ((c = getchar()) != '\n' && c != EOF) {} // Limpa buffer do teclado
/*
Mecanismo de controle de seleção
*/
switch (item)
{
case 1:
printf("\n");//pula uma linha
printf("Você escolheu o item Cachorro-Quente\n\n");
printf("Digite a QUANTIDADE:\n"); // Quantidade que o usuario deve escolher 
scanf_s("%d", &qtd);// O que foi guardado na memoria
while ((c = getchar()) != '\n' && c != EOF) {} // Limpa buffer do teclado
valor[0] = valor[0] + (qtd * preco[0]);//soma e multiplicação das variaveis capturadas
qnt[0] = qnt[0] + qtd;// resultado guardado na memoria da quantidade solicitada
break;
case 2:
printf("\n");//pula uma linha
printf("Você escolheu o item X-salada\n\n");
printf("Digite a QUANTIDADE:"); // Quantidade que o usuario deve escolher 
scanf_s("%d", &qtd);// O que foi guardado na memoria
while ((c = getchar()) != '\n' && c != EOF) {} // Limpa buffer do teclado
valor[1] = valor[1] + (qtd * preco[1]);//soma e multiplicação das variaveis capturadas
qnt[1] = qnt[1] + qtd;// resultado guardado na memoria da quantidade solicitada
break;
case 3:
printf("\n");//pula uma linha
printf("Você escolheu o item X-Bacon\n\n");
printf("Digite a QUANTIDADE:"); // Quantidade que o usuario deve escolher 
scanf_s("%d", &qtd);// O que foi guardado na memoria
while ((c = getchar()) != '\n' && c != EOF) {} // Limpa buffer do teclado
valor[2] = valor[2] + (qtd * preco[2]);//soma e multiplicação das variaveis capturadas
qnt[2] = qnt[2] + qtd;// resultado guardado na memoria da quantidade solicitada
break;
case 4:
printf("\n"); //pula uma linha
printf("Você escolheu o item Misto\n\n");
printf("Digite a QUANTIDADE: \n"); // Quantidade que o usuario deve escolher 
scanf_s("%d", &qtd);// O que foi guardado na memoria
while ((c = getchar()) != '\n' && c != EOF) {} // Limpa buffer do teclado
valor[3] = valor[3] + (qtd * preco[3]);//soma e multiplicação das variaveis capturadas
qnt[3] = qnt[3] + qtd;// resultado guardado na memoria da quantidade solicitada
break;
case 5:
printf("\n");//pula uma linha
printf("Você escolheu o item Salada\n\n");
printf("Digite a QUANTIDADE:"); // Quantidade que o usuario deve escolher 
scanf_s("%d", &qtd);// O que foi guardado na memoria
while ((c = getchar()) != '\n' && c != EOF) {} // Limpa buffer do teclado
valor[4] = valor[4] + (qtd * preco[4]);// soma e multiplicação das variaveis capturadas
qnt[4] = qnt[4] + qtd;// resultado guardado na memoria da quantidade solicitada
break;
case 6:
printf("\n");//pula uma linha
printf("Você escolheu o item Água\n\n");
printf("Digite a QUANTIDADE:"); // Quantidade que o usuario deve escolher 
scanf_s("%d", &qtd);// O que foi guardado na memoria
while ((c = getchar()) != '\n' && c != EOF) {} // Limpa buffer do teclado
valor[5] = valor[5] + (qtd * preco[5]); // soma e multiplicação das variaveis capturadas
qnt[5] = qnt[5] + qtd;// resultado guardado na memoria da quantidade solicitada
break;
case 7:
printf("\n");//pula uma linha
printf("Você escolheu o item Refrigerante\n\n");
printf("Digite a QUANTIDADE:"); // Quantidade que o usuario deve escolher 
scanf_s("%d", &qtd);// O que foi guardado na memoria
while ((c = getchar()) != '\n' && c != EOF) {} // Limpa buffer do teclado
valor[6] = valor[6] + (qtd * preco[6]);//soma e multiplicação das variaveis capturadas
qnt[6] = qnt[6] + qtd;// resultado guardado na memoria da quantidade solicitada
break;
case 0:
/*
Será exbido na tela depois da finalização dos pedidos
*/
printf("\n");//pula uma linha
printf("\n============================================================================\n");
printf(" Pedido finalizado! RU - 3285927\n");
printf(" ________________________________________________________\n");
printf("| Item | Produto | Qnt\t| Preco Unt | Total |\n");
printf("| ______|_________________|_____|____________|___________|\n");
/*
condição SE caso seja escolhida a quantidade de algum item aparecer na tela as informações
*/
if (qnt[0] > 0) //condição se a quantidade escolhida for algum valor mostrar na tela
{
printf("| 1 | Cachorro-quente | %d | %.2f | %.2f\t | \n", qnt[0], preco[0], valor[0]);
}
if (qnt[1] > 0)
{
printf("| 2 | X-Salada | %d | %.2f | %.2f\t | \n", qnt[1], preco[1], valor[1]);
}
if (qnt[2] > 0)
{
printf("| 3 | X-Bacon | %d | %.2f | %.2f\t | \n", qnt[2], preco[2], valor[2]);
}
if (qnt[3] > 0)
{
printf("| 4 | Misto | %d | %.2f | %.2f\t | \n", qnt[3], preco[3], valor[3]);
}
if (qnt[4] > 0)
{
printf("| 5 | Salada | %d | %.2f | %.2f\t | \n", qnt[4], preco[4], valor[4]);
}
if (qnt[5] > 0)
{
printf("| 6 | Água | %d | %.2f | %.2f\t | \n", qnt[5], preco[5], valor[5]);
}
if (qnt[6] > 0)
{
printf("| 7 | Refrigerante | %d | %.2f | %.2f\t | \n", qnt[6], preco[6], valor[6]);
}
else {
}
printf("|________________________________________________________|\n");
vt = valor[0] + valor[1] + valor[2] + valor[3] + valor[4] + valor[5] + valor[6]; // soma total dos itens do 
pedido
printf("\t\t\t |Valor total:\t | %.2f\t |\n", vt);
printf("\t\t\t |__________________|___________|\n");
break;
default:
printf("\n"); //pula uma linha
printf("ERRO FATAL!!! Escolha um dos itens do menu\n"); // condição gerada caso seja digitada qualquer outro 
numero que não esteja associada al algoritmo
}
printf("\n");
} while (item != 0);
/*
Fim Laço do while, condição booleana
*/
system("pause"); // para pausar na tela antes de finalizar
return 0;
} /*
Fim do programa
*/
