#include <stdio.h> 

void Torremovimento(int movimento){
    if(movimento > 0){
        Torremovimento(movimento - 1);
        printf("Torre andou %d casas para a direita\n", movimento);
    }
}
void Bispomovimento(int movimento2){
    if(movimento2 > 0){
        Bispomovimento(movimento2 - 1);
        printf("Bispo andou %d casas para a direita cima\n", movimento2);
    }
}
void Rainhamovimento(int movimento3){
    if(movimento3 > 0){
        Rainhamovimento(movimento3 - 1);
        printf("Rainha andou %d casas para a esquerda\n", movimento3);
    }
}
//Função recursiva para momivimento das peças

int main(){

int Torre, Bispo, Rainha, Cavalo;
int Opcao;
Cavalo = 1;
Torre = 5;
Bispo = 5;
Rainha = 8;

printf("Escolha uma peça:\n\n");
printf("1. Torre\n");
printf("2. Bispo\n");
printf("3. Rainha\n");
printf("4. Cavalo\n");
scanf("%d", &Opcao);

switch (Opcao) //Sistema de escolha e movimentação das peças
{
case 1:
printf("Você escolheu a Torre\n");
Torremovimento(Torre);

break;
case 2:
printf("Você escolheu o Bispo\n");
Bispomovimento(Bispo);

break;
case 3:
printf("Você escolheu a Rainha\n");
Rainhamovimento(Rainha);

break;
case 4:
printf("Você escolheu o Cavalo\n");
while(Cavalo--){

} for(int i = 1; i < 3; i++){
    printf("Cavalo andou %d casas para cima\n", i);

}printf("Cavalo andou %d casas para direita\n", Cavalo + 2);
break;
default:
printf("Opção invalida\n");

}
//Desafio concluido.
return 0;
}
