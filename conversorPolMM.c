#include <stdio.h>
#include <math.h>
//%i lê octa e hexa, %d apenas inteiros

int main(){

float pol, mm;
int escolha;

printf("\nUm conversor de medidadas entre milímetro e polegadas\n");
printf("Escolha entre Pol to MM digitando '1' ou MM to Pol digitando '2': ");
scanf("%d", &escolha);

//escolha = 1; Pol to MM; 1" = 25.4mm
if (escolha == 1){
    printf("\nDigite quantas polegadas deseja em mm : ");
    scanf("%f", &pol);

    mm = pol * 25.4;

    printf("O valor das polegadas em milimetro é: %f", mm);
}
//escolha = 2; MM to Pol; 25.4 = 1"
 else if (escolha == 2){
    printf("\nDigite quantos mm deseja em pol : ");
    scanf("%f", &mm);

    pol = mm / 25.4;

    printf("O valor das polegadas em milimetro é: %f", pol);
}

return 0;
}
