#include <iostream>
using namespace std;

// Function declarations
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main() {
    int choice;
    double num1, num2;

    do {
        cout << "\n===== SIMPLE CALCULATOR =====\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice >= 1 && choice <= 4) {
            cout << "Enter first number: ";
            cin >> num1;

            cout << "Enter second number: ";
            cin >> num2;
        }

        switch(choice) {
            case 1:
                cout << "Result = " << add(num1, num2) << endl;
                break;
            case 2:
                cout << "Result = " << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "Result = " << multiply(num1, num2) << endl;
                break;
            case 4:
                if(num2 != 0)
                    cout << "Result = " << divide(num1, num2) << endl;
                else
                    cout << "Error! Division by zero is not allowed.\n";
                break;
            case 5:
                cout << "Thank you for using the calculator!\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while(choice != 5);

    return 0;
}

// Function definitions
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}
