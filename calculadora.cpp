#include <iostream> 
#include <math.h>

using namespace std;

int main()
{
float num1, num2, resultado;
int operacion;

cout << "------ CALCULADORA BASICA ------" <<endl;
cout << "Ingrese un valor: " <<endl;
cin >> num1;
cout << "Ingrese un segundo valor: " <<endl;
cin >> num2;

cout << "Que operacion desea realizar? " <<endl;
cout << "1) SUMA \n 2) RESTA \n 3) MULTIPLICACION \n 4) DIVISION" <<endl;
cin >> operacion;

switch (operacion){
    
    case 1: 
    resultado = num1 + num2; 
    cout << "Resultado: " << resultado << " " << endl; break;
    case 2: 
    resultado = num1 - num2; 
    cout << "Resultado: " << resultado << " " << endl; break;
    case 3: 
    resultado = num1 * num2;
    cout << "Resultado: " << resultado << " " << endl; break;
    case 4:
    if (num2 == 0){
        cout << "No es posible dividir por 0" << endl; break;
    } else{
        resultado = num1 / num2;
        cout << "Resultado: " << resultado << " " << endl; break;
    }
    default: cout <<" Opcion invalida " << endl; break;

}
 

    return 0;
}