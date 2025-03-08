#include <stdio.h> 
int main(){

int Torre, Bispo, Rainha, Cavalo;
int Opcao;
Cavalo = 3;

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
for(Torre = 1; Torre <= 5; Torre++){
    printf("Torre andou %d casas para cima\n", Torre);
}
break;
case 2:
printf("Você escolheu o Bispo\n");
for(Bispo = 1; Bispo <= 5; Bispo++){
    printf("Bispo andou %d casas para a direita cima\n", Bispo);
}
break;
case 3:
printf("Você escolheu a Rainha\n");
for(Rainha = 1; Rainha <= 8; Rainha++){
    printf("Rainha andou %d casas para esquerda\n", Rainha);
}
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

return 0;
}
