#include <stdio.h>//biblioteca
#include <stdlib.h>//biblioteca
#include <locale.h>//biblioteca
void inserir(); //Prototipo função
void mostrar(); //Prototipo função
void quantidade(); //Prototipo função
int i, j;
int menu = 4;
int cont[7] = { 0 };
int tabuleiro[8][8] = {
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0}
};
int main(void) {
setlocale(LC_ALL, "Portuguese"); //para poder usar palavras com acentuação
while (menu != 0) {
system("cls");
printf(" Mateus Alves - RU 3285927\n");
printf("============================\n");
printf(" Menu Tabuleiro de Xadrez\n");
printf("============================\n\n");//menu tabuleiro de xadrez
printf("1-Inserir peça no tabuleiro \n");
printf("2-Mostrar o tabuleiro \n");
printf("3-Quantidade de peças \n");
printf("0-Sair do Programa \n\n");
printf("Sua Opcao ==> ");
scanf_s("%i", &menu);
fflush(stdin);//limpar o buffer do teclado
switch (menu) // Prototipo menu de seleção de função 
{
case 1:
inserir();
break;
case 2:
mostrar();
break;
case 3:
quantidade();
break;
}
}
}
void inserir() // função inserir peça no tabuleiro
{
printf("0 - Nenhuma peça\n");
printf("1 - Peão \n");
printf("2 - Cavalo \n");
printf("3 - Torres\n"); // imprime as opções
printf("4 - Bispo \n");
printf("5 - Rei \n");
printf("6 - Rainha\n");
/* laço for varredura e inserir as peças */
for (i = 0; i <= 7; i++) {
for (j = 0; j <= 7; j++) {
printf("Digite o numero da peça para colocar na posição na linha [%i], coluna[%i]: ", i, j);
scanf_s("%i", &tabuleiro[i][j]);
fflush(stdin);//limpar o buffer do teclado
}
printf("\n");
}
}
void mostrar() // função inserir peça no tabuleiro
{
printf("==Tabuleiro de Xadrez==\n");
/* laço for faz varredura e mostra na tela */
for (i = 0; i <= 7; i++) {
for (j = 0; j <= 7; j++) {
printf("[%i]", tabuleiro[i][j]);
}
printf("\n");
}
printf("\n");
system("pause");
system("cls");
}
void quantidade() // função inserir peça no tabuleiro
{
/* laço for faz varredura e mostra quantidade das peças */
for (i = 0; i <= 7; i++) {
for (j = 0; j <= 7; j++) {
if (tabuleiro[i][j] == 0)
cont[0]++;
if (tabuleiro[i][j] == 1)
cont[1]++;
if (tabuleiro[i][j] == 2)
cont[2]++;
if (tabuleiro[i][j] == 3)
cont[3]++;
if (tabuleiro[i][j] == 4)
cont[4]++;
if (tabuleiro[i][j] == 5)
cont[5]++;
if (tabuleiro[i][j] == 6)
cont[6]++;
}
}
/* mostra na tela quantidade das peças do tabuleiro*/
printf("\n===Quantidade de Peças no Tabuleiro===\n\n");
printf("Quantidade de casas vazias: = %i\n\n", cont[0]);
printf("Quantidade de peões no tabuleiro = %i\n", cont[1]);
printf("Quantidade de cavalos no tabuleiro = %i\n", cont[2]);
printf("Quantidade de torres no tabuleiro = %i\n", cont[3]);
printf("Quantidade de bispos no tabuleiro = %i\n", cont[4]);
printf("Quantidade de reis no tabuleiro = %i\n", cont[5]);
printf("Quantidade de rainhas no tabuleiro = %i\n", cont[6]);
printf("\n\n");
system("pause");
system("cls");//limpa tela
}
