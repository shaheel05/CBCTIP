#include <iostream>
#include <iomanip> // For setting precision in floating-point numbers
#include <cmath>   // For mathematical functions like pow()

using namespace std;

void showMenu() {
    cout << "Advanced Digital Calculator" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "5. Square (^2)" << endl;
    cout << "6. Cube (^3)" << endl;
    cout << "7. Exit" << endl;
    cout << "Choose an option: ";
}

void performCalculation(int choice, double num1, double num2 = 0) {
    switch (choice) {
        case 1:
            cout << "Result: " << fixed << setprecision(2) << (num1 + num2) << endl;
            break;
        case 2:
            cout << "Result: " << fixed << setprecision(2) << (num1 - num2) << endl;
            break;
        case 3:
            cout << "Result: " << fixed << setprecision(2) << (num1 * num2) << endl;
            break;
        case 4:
            if (num2 != 0) {
                cout << "Result: " << fixed << setprecision(2) << (num1 / num2) << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        case 5:
            cout << "Result: " << fixed << setprecision(2) << pow(num1, 2) << endl;
            break;
        case 6:
            cout << "Result: " << fixed << setprecision(2) << pow(num1, 3) << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
    }
}

int main() {
    int choice;
    double num1, num2;

    while (true) {
        showMenu();
        cin >> choice;

        if (choice == 7) {
            cout << "Exiting the calculator. Goodbye!" << endl;
            break;
        }

        if (choice == 5 || choice == 6) {
            cout << "Enter a number: ";
            cin >> num1;
            performCalculation(choice, num1);
        } else {
            cout << "Enter first number: ";
            cin >> num1;

            cout << "Enter second number: ";
            cin >> num2;

            performCalculation(choice, num1, num2);
        }
    }

    return 0;
}
