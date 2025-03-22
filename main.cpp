#include <iostream>
#include <cmath> // Para la función de raíz cuadrada y potencia
using namespace std;

// Función para sumar
double sumar(double a, double b) {
    return a + b;
}

// Función para restar
double restar(double a, double b) {
    return a - b;
}

// Función para multiplicar
double multiplicar(double a, double b) {
    return a * b;
}

// Función para dividir
double dividir(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: No se puede dividir entre cero!" << endl;
        return 0;
    }
}

// Función para calcular la potencia
double potencia(double base, double exponente) {
    return pow(base, exponente);
}

// Función para calcular la raíz cuadrada
double raizCuadrada(double a) {
    if (a < 0) {
        cout << "Error: No se puede calcular la raiz cuadrada de un numero negativo!" << endl;
        return -1;
    } else {
        return sqrt(a);
    }
}

// Función para calcular el factorial
int factorial(int n) {
    if (n < 0) {
        cout << "Error: No se puede calcular el factorial de un número negativo!" << endl;
        return -1;
    }
    int resultado = 1;
    for (int i = 1; i <= n; ++i) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int opcion;
    double num1, num2;
    int numFactorial;

    // Mensaje de bienvenida
    cout << "Bienvenido a la calculadora basica!" << endl;
    cout << "Seleccione una opcion:" << endl;
    cout << "1. Sumar" << endl;
    cout << "2. Restar" << endl;
    cout << "3. Multiplicar" << endl;
    cout << "4. Dividir" << endl;
    cout << "5. Potencia" << endl;
    cout << "6. Raiz Cuadrada" << endl;
    cout << "7. Factorial" << endl;

    // Solicitar la opción
    cin >> opcion;

    // Según la opción elegida
    switch(opcion) {
        case 1: // Sumar
            cout << "Ingrese el primer numero: ";
            cin >> num1;
            cout << "Ingrese el segundo numero: ";
            cin >> num2;
            cout << "Resultado: " << sumar(num1, num2) << endl;
            break;

        case 2: // Restar
            cout << "Ingrese el primer numero: ";
            cin >> num1;
            cout << "Ingrese el segundo numero: ";
            cin >> num2;
            cout << "Resultado: " << restar(num1, num2) << endl;
            break;

        case 3: // Multiplicar
            cout << "Ingrese el primer numero: ";
            cin >> num1;
            cout << "Ingrese el segundo numero: ";
            cin >> num2;
            cout << "Resultado: " << multiplicar(num1, num2) << endl;
            break;

        case 4: // Dividir
            cout << "Ingrese el primer numero: ";
            cin >> num1;
            cout << "Ingrese el segundo numero: ";
            cin >> num2;
            cout << "Resultado: " << dividir(num1, num2) << endl;
            break;

        case 5: // Potencia
            cout << "Ingrese la base: ";
            cin >> num1;
            cout << "Ingrese el exponente: ";
            cin >> num2;
            cout << "Resultado: " << potencia(num1, num2) << endl;
            break;

        case 6: // Raíz cuadrada
            cout << "Ingrese el numero: ";
            cin >> num1;
            cout << "Resultado: " << raizCuadrada(num1) << endl;
            break;

        case 7: // Factorial
            cout << "Ingrese un numero entero: ";
            cin >> numFactorial;
            cout << "Resultado: " << factorial(numFactorial) << endl;
            break;

        default:
            cout << "Opcion no valida." << endl;
    }

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.