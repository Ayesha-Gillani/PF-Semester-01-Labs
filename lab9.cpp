//#include<iostream>
//using namespace std;
//int main()
//{
//	int N;
//	cout<<"Enter a positive number N:";
//	cin>>N;
//	int i= 1;
//	while(i<=N){
//		cout<<i;
//		i++;
//		}
//	}

// MLTIPLICATION TABLE
//    int num ,i =1;
//    cout<<"Enter a number to show its multiplication table: ";
//    cin>>num;
//    cout<<"Multiplication table of"<<" "<<num<<" "<<"is:"<<endl;
//    while (i<=10){
//    	cout<<num<<" "<<"x"<<" "<<i<<"="<<num*i<<endl;
//    	i++;}
//    

// SUM OF FIRST FIVE NATURAL NUMBERS
//    int sum=0;
//	int i=1;
//	while(i<=5) {
//	sum +=i;
//	i++;}
//	cout<<"The sum of first five natural number is: "<<sum<<endl;

//DISPLAY POSTIVE NUMBER
//    int num;
//    while(true){
//    	cout<<"Enter a positive number: ";
//    	cin>>num;
//    	if(num>0){
//    		cout<<"You entered a positive number: "<<num<<endl;
//    		break;
//    	}else
//    	cout<<"ERROR: Please enter a positive number"<<endl;
//    	
//		}	

//BANKING SYSTEM
#include <iostream>
using namespace std;

int main() {
    double balance = 1000.0; // Initial balance
    int choice;
    double amount;

    while (true) {
        // Display menu
        cout << "\nBanking System Menu:\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Handle user choice
        if (choice == 1) {
            cout << "Enter amount to deposit: ";
            cin >> amount;
            balance += amount; // Add deposit amount to balance
            cout << "Amount deposited successfully!\n";
        } else if (choice == 2) {
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            if (amount > balance) {
                cout << "Insufficient balance!\n";
            } else {
                balance -= amount; // Deduct withdrawal amount from balance
                cout << "Withdrawal successful!\n";
            }
        } else if (choice == 3) {
            cout << "Current balance: $" << balance << endl; // Display balance
        } else if (choice == 4) {
            cout << "Exiting program...\n";
            break; // Exit the loop and end the program
        } else {
            cout << "Invalid choice! Try again.\n"; // Handle invalid input
        }
    }

    return 0;
}

//PASSWORD USING DO-WHILE LOOP
//#include <iostream>
//using namespace std;
//
//int main() {
//    string password;
//    string correctPassword = "ayesha123";
//
//    do {
//        cout << "Enter password: ";
//        cin >> password;
//
//        if (password != correctPassword) {
//            cout << "Incorrect password! Try again.\n";
//        }
//    } while (password != correctPassword);
//
//    cout << "Access granted!\n";
//
//    return 0;
//}
