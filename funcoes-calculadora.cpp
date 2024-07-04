#include <iostream>

using namespace std; 

float somar(float x, float y)
{
    return x + y;
}

float subtrair(float x, float y)
 {
    return x - y; 
 }

 float multiplicar(float x, float y)
 {
    return x * y; 
 }

  float dividir(float x, float y)
 {
    return x / y; 
 }

int main()
{ 
    system("cls");
    float numero1 = 5;
    float numero2 = 15;
    string operacao = "+";

    float resultado = 0;

    if (operacao == "+"){
        resultado = somar(numero1, numero2);
    }else if (operacao == "-") {
        resultado = subtrair(numero1, numero2);

    }else if (operacao == "*"){
        resultado = somar(numero1, numero2);

    }else if (operacao == "/"){
        resultado = somar (numero1, numero2);
    }

    cout << "o resultado da operacao é:"  << resultado;

    return 0;
}