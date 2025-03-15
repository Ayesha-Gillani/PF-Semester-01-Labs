//#include <iostream>
//#include <cmath>  // Library for mathematical functions
//using namespace std;
//
//int main() {
//    double number;
//
//    // Prompt the user to enter a number
//    cout << "Enter a number: ";
//    cin >> number;
//
//    // Calculate and display the square root
//    cout << "Square Root: " << sqrt(number) << endl;
//
//    // Calculate and display the absolute value
//    cout << "Absolute Value: " << abs(number) << endl;
//
//    // Calculate and display the sine (in radians)
//    cout << "Sine: " << sin(number) << endl;
//
//    // Calculate and display the cosine (in radians)
//    cout << "Cosine: " << cos(number) << endl;
//
//    // Calculate and display the power of 3
//    cout << "Power of 3: " << pow(number, 3) << endl;
//
//    return 0;
//}
//TASK#2
#include <iostream>
using namespace std;

// Function to display a welcome message
void welcomeMessage() {
    cout << "Hello, Welcome to C++ Functions!" << endl;
}

int main() {
    // Calling the function
    welcomeMessage();
    return 0;
}

//TASK#3
//#include <iostream>
//using namespace std;
//
//// Function to determine if a number is even or odd
//void checkEvenOdd(int num) {
//    if (num % 2 == 0) {
//        cout << "Even" << endl;
//    } else {
//        cout << "Odd" << endl;
//    }
//}
//
//int main() {
//    int number;
//    cout << "Enter a number: ";
//    cin >> number;
//    checkEvenOdd(number); // Calling the function
//    return 0;
//}

//TASK#4
//#include <iostream>
//using namespace std;
//
//// Function to calculate factorial
//int factorial(int n) {
//    int result = 1;
//    for (int i = 1; i <= n; ++i) {
//        result *= i;
//    }
//    return result;
//}
//
//int main() {
//    int number;
//    cout << "Enter a number: ";
//    cin >> number;
//    cout << "Factorial of " << number << " is " << factorial(number) << endl;
//    return 0;
//}

//TASK#5
//#include <iostream>
//using namespace std;
//
//// Function to perform addition
//double add(double a, double b) {
//    return a + b;
//}
//
//// Function to perform subtraction
//double subtract(double a, double b) {
//    return a - b;
//}
//
//// Function to perform multiplication
//double multiply(double a, double b) {
//    return a * b;
//}
//
//// Function to perform division
//double divide(double a, double b) {
//    if (b == 0) {
//        cout << "Error: Division by zero!" << endl;
//        return 0;
//    }
//    return a / b;
//}
//
//int main() {
//    int choice;
//    double num1, num2;
//    do {
//        cout << "Menu:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n";
//        cout << "Enter your choice: ";
//        cin >> choice;
//        if (choice >= 1 && choice <= 4) {
//            cout << "Enter two numbers: ";
//            cin >> num1 >> num2;
//        }
//        switch (choice) {
//            case 1:
//                cout << "Result: " << add(num1, num2) << endl;
//                break;
//            case 2:
//                cout << "Result: " << subtract(num1, num2) << endl;
//                break;
//            case 3:
//                cout << "Result: " << multiply(num1, num2) << endl;
//                break;
//            case 4:
//                cout << "Result: " << divide(num1, num2) << endl;
//                break;
//            case 5:
//                cout << "Exiting..." << endl;
//                break;
//            default:
//                cout << "Invalid choice! Please try again." << endl;
//        }
//    } while (choice != 5);
//    return 0;
//}

//TASK#6
//#include <iostream>
//using namespace std;
//
//// Function to display the menu
//void displayMenu() {
//    cout << "Menu:\n1. Burger - $5\n2. Pizza - $10\n3. Pasta - $8\n4. Salad - $6\n5. Drink - $2\n";
//}
//
//// Function to calculate the cost of an item
//double calculateCost(int item, int quantity) {
//    double price;
//    switch (item) {
//        case 1:
//            price = 5;
//            break;
//        case 2:
//            price = 10;
//            break;
//        case 3:
//            price = 8;
//            break;
//        case 4:
//            price = 6;
//            break;
//        case 5:
//            price = 2;
//            break;
//        default:
//            price = 0;
//    }
//    return price * quantity;
//}
//
//// Function to calculate the final bill with tax
//double calculateBill(double total) {
//    double tax = 0.10; // 10% tax
//    return total + (total * tax);
//}
//
//int main() {
//    int choice, quantity;
//    double total = 0;
//    do {
//        displayMenu();
//        cout << "Enter the item number (1-5) or 0 to exit: ";
//        cin >> choice;
//        if (choice >= 1 && choice <= 5) {
//            cout << "Enter the quantity: ";
//            cin >> quantity;
//            total += calculateCost(choice, quantity);
//        } else if (choice != 0) {
//            cout << "Invalid choice! Please try again." << endl;
//        }
//    } while (choice != 0);
//    cout << "Total bill (including 10% tax): $" << calculateBill(total) << endl;
//    return 0;
}