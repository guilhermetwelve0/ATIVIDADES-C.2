#include<iostream>
#include<cstdlib>
#include<ctime>

#define TAMANHO_DO_VETOR 50
#define LIMITE 100

int main(){
    
    int vetor[TAMANHO_DO_VETOR];

    srand(time(NULL));
    
    for(int i = 0;  i < TAMANHO_DO_VETOR; i++)
    {
        vetor[i] = rand() % LIMITE;
    }

    for(int i = 0;  i < TAMANHO_DO_VETOR; i++)
    {
        int posanterior = 1;
        if(i > 0)
        {
            posanterior = vetor[i - 1];
        }
        std::cout << "Posicao: " << i << " valor: " << vetor[i] << "\n";
        std::cout << "Posicao: " << i << " calculo: " << vetor[i] * posanterior << "\n";
    }   

    return 0;
}