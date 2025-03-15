//#include <iostream>
//using namespace std;
//
//int main() {
//    double num1, num2;
//    char op;
//
//    cout << "Enter first number: ";
//    cin >> num1;
//    cout << "Enter operator (+, -, *, /): ";
//    cin >> op;
//    cout << "Enter second number: ";
//    cin >> num2;
//
//    switch (op) {
//        case '+': cout << "Result: " << num1 + num2 << endl; break;
//        case '-': cout << "Result: " << num1 - num2 << endl; break;
//        case '*': cout << "Result: " << num1 * num2 << endl; break;
//        case '/': 
//            if (num2 != 0) cout << "Result: " << num1 / num2 << endl;
//            else cout << "Error: Division by zero!" << endl;
//            break;
//        default: cout << "Invalid operator!" << endl;
//    }
//
//    return 0;
//}

//TASK#2
//#include <iostream>
//using namespace std;
//
//int main() {
//    int day;
//    cout << "Enter a number (1-7) for the day of the week: ";
//    cin >> day;
//
//    switch (day) {
//        case 1: cout << "Monday" << endl; break;
//        case 2: cout << "Tuesday" << endl; break;
//        case 3: cout << "Wednesday" << endl; break;
//        case 4: cout << "Thursday" << endl; break;
//        case 5: cout << "Friday" << endl; break;
//        case 6: cout << "Saturday" << endl; break;
//        case 7: cout << "Sunday" << endl; break;
//        default: cout << "Invalid input! Please enter a number between 1 and 7." << endl;
//    }
//
//    return 0;
//}

//TASK#3
//#include <iostream>
//using namespace std;
//
//int main() {
//    int choice;
//    double area;
//
//    cout << "Select shape: \n1. Circle\n2. Rectangle\n3. Triangle\nEnter choice: ";
//    cin >> choice;
//
//    switch (choice) {
//        case 1: {
//            double radius;
//            cout << "Enter radius: ";
//            cin >> radius;
//            area = 3.14159 * radius * radius;
//            cout << "Area of Circle: " << area << endl;
//            break;
//        }
//        case 2: {
//            double length, width;
//            cout << "Enter length and width: ";
//            cin >> length >> width;
//            area = length * width;
//            cout << "Area of Rectangle: " << area << endl;
//            break;
//        }
//        case 3: {
//            double base, height;
//            cout << "Enter base and height: ";
//            cin >> base >> height;
//            area = 0.5 * base * height;
//            cout << "Area of Triangle: " << area << endl;
//            break;
//        }
//        default:
//            cout << "Invalid choice!" << endl;
//    }
//
//    return 0;
//}

//TASK#4
#include <iostream>
using namespace std;

int main() {
    int choice;
    double amount, converted;

    cout << "Currency Converter\n";
    cout << "1. USD to PKR\n2. USD to INR\n3. USD to Euro\n";
    cout << "Enter choice: ";
    cin >> choice;

    cout << "Enter amount in USD: ";
    cin >> amount;

    switch (choice) {
        case 1: converted = amount * 278.50; cout << "Amount in PKR: " << converted << endl; break;
        case 2: converted = amount * 82.90; cout << "Amount in INR: " << converted << endl; break;
        case 3: converted = amount * 0.91; cout << "Amount in Euros: " << converted << endl; break;
        default: cout << "Invalid choice!" << endl;
    }

    return 0;
}
