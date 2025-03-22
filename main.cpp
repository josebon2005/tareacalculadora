#include <iostream>
using namespace std;

// Funciones para cada operación
double sumar(double a, double b) {
    return a + b;
}

double restar(double a, double b) {
    return a - b;
}

double multiplicar(double a, double b) {
    return a * b;
}

double dividir(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: Division por cero no permitida!" << endl;
        return 0;  // Retorna 0 para manejar la división por cero
    }
}

double potencia(double base, double exponente) {
    double resultado = 1;
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }
    return resultado;
}

double raizCuadrada(double num) {
    if (num < 0) {
        cout << "Error: No se puede calcular la raíz cuadrada de un numero negativo!" << endl;
        return -1;  // Retorna un valor negativo como indicador de error
    }

    // Aproximación de la raíz cuadrada usando el método de bisección
    double raiz = num;
    double precision = 0.00001;  // Precisión de la aproximación

    while ((raiz * raiz - num) > precision || (num - raiz * raiz) > precision) {
        raiz = (raiz + num / raiz) / 2;  // Método de aproximación de Newton
    }

    return raiz;
}

int factorial(int n) {
    if (n < 0) {
        cout << "Error: No se puede calcular el factorial de un numero negativo!" << endl;
        return -1;  // Retorna un valor negativo como indicador de error
    }

    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int opcion;
    double num1, num2;
    int numInt;

    cout << "Bienvenido a la calculadora basica en C++!" << endl;
    cout << "Seleccione una opcion:" << endl;
    cout << "1. Sumar" << endl;
    cout << "2. Restar" << endl;
    cout << "3. Multiplicar" << endl;
    cout << "4. Dividir" << endl;
    cout << "5. Potencia" << endl;
    cout << "6. Raiz Cuadrada" << endl;
    cout << "7. Factorial" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    // Realizar operación según la opción seleccionada
    switch (opcion) {
        case 1:
            cout << "Ingrese dos numeros: ";
            cin >> num1 >> num2;
            cout << "El resultado de la suma es: " << sumar(num1, num2) << endl;
            break;
        case 2:
            cout << "Ingrese dos numeros: ";
            cin >> num1 >> num2;
            cout << "El resultado de la resta es: " << restar(num1, num2) << endl;
            break;
        case 3:
            cout << "Ingrese dos numeros: ";
            cin >> num1 >> num2;
            cout << "El resultado de la multiplicacion es: " << multiplicar(num1, num2) << endl;
            break;
        case 4:
            cout << "Ingrese dos numeros: ";
            cin >> num1 >> num2;
            cout << "El resultado de la division es: " << dividir(num1, num2) << endl;
            break;
        case 5:
            cout << "Ingrese la base y el exponente: ";
            cin >> num1 >> num2;
            cout << "El resultado de la potencia es: " << potencia(num1, num2) << endl;
            break;
        case 6:
            cout << "Ingrese un numero: ";
            cin >> num1;
            cout << "La raiz cuadrada de " << num1 << " es: " << raizCuadrada(num1) << endl;
            break;
        case 7:
            cout << "Ingrese un numero entero: ";
            cin >> numInt;
            cout << "El factorial de " << numInt << " es: " << factorial(numInt) << endl;
            break;
        default:
            cout << "Opcion invalida!" << endl;
    }

    return 0;
}
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.