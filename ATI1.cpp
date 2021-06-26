#include <iostream>
using namespace std;


float adicao(float n1, float n2);
float sub(float n1, float n2);
float mult(float n1, float n2);
float div2(float n1, float n2);

int main()
{
   
    char escolha;
    float n1, n2;

    cout << "Escolha um dos operador (+, -, *, /): ";
    cin >> escolha;
    cout << "entre com dois numeros: " ;
    cin >> n1 ;
    cout << "Entre com o segundo numero: " ;
    cin >> n2;

    switch (escolha) {
        case '+':
            cout << "O resultado da soma é: " << adicao(n1, n2);
            cout << "\n";
            break;
        case '-':
            cout << "O resultado da subtração é: " << sub(n1, n2);
            cout << "\n";
            break;
        case '*':
            cout << "O resultado da multiplicação é: " << mult(n1, n2);
            cout << "\n";
            break;
        case '/':
            cout << "O resultado da divisão é: " << div2(n1, n2);
            cout << "\n";
            break;
        default:
            cout << "Opa desculpe! O operador digitado é inválido";
            cout << "\n";
            break;
    }

    return 0;
}

float adicao(float n1, float n2)
{
    return n1 + n2;
}

float sub(float n1, float n2)
{
    return n1 - n2;
}

float mult(float n1, float n2)
{
    return n1 * n2;
}

float div2(float n1, float n2)
{
    return n1 / n2;
}