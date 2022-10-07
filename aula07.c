#include <stdio.h>
#include <stdlib.h>


float calculaIMC(float peso,float altura){
    float imc = peso/(altura*altura);
    return(imc);
}

void exibeimc(float imc){
    if(imc<18.5){
        printf("\nVoce esta abaixo do peso");
    }
    else if(imc>=18.5 && imc<=24.9){
        printf("\nPeso normal");
    }
    else if(imc>-25 && imc <=29.9){
        printf("\nExcesso de peso");
    }
    else if(imc>=30 && imc<=34.9){
        printf("\nObesidade classe I");
    }
    else if(imc>=35 && imc<=39.9){
        printf("\nObesidade classe II");
    }
    else{
        printf("\nObesidade classe III");
    }



}

int main(){
        float peso,altura,imc;
        printf("\n entre com o peso: ");
        scanf("%f",&peso);
        printf("\n Entre com o altura: ");
        scanf("%f",&altura);

        imc = calculaIMC(peso,altura);
        printf("\no seu imc é: %2.f",imc);
        exibeimc(imc);

}
