//#include<iostream>
//using namespace std;
//int main()
//{
//	int num;
//	cout<<"Enter a number:";
//	cin>>num;
//	if(num>0){
//		cout<<"Positive";
//	}else if(num<0){
//		cout<<"Negative";
//	}else{
//	cout<<"zero";
//	} return 0;
//}

//TASK#2
//#include <iostream>
//using namespace std;
//int main() {
//    int temp;
//    cout << "Enter the temperature (°C): ";
//    cin >> temp;
//
//    if (temp >= 40) {
//        cout << "Stay indoors! It's extremely hot and dangerous for health." << endl;
//    } else if (temp >= 30) {
//        cout << "Drink plenty of water to stay hydrated." << endl;
//    } else if (temp >= 20) {
//        cout << "The weather is pleasant for outdoor activities." << endl;
//    } else {
//        cout << "Wear warm clothes to stay comfortable." << endl;
//    }
//
//    return 0;
//}
//
////TASK#3
//#include <iostream>
//using namespace std;
//int main() {
//    string username, password;
//    cout << "Enter username: ";
//    cin >> username;
//    cout << "Enter password: ";
//    cin >> password;
//
//    if (username == "admin" && password == "12345") {
//        cout << "Access Granted." << endl;
//    } else if (username != "admin") {
//        cout << "User Not Found.." << endl;
//    } else {
//        cout << "Wrong Password." << endl;
//    }
//
//    return 0;
//}
//
////TASK#4
//#include <iostream>
//using namespace std;
//int main() {
//    int sub1, sub2, sub3;
//    cout << "Enter marks for three subjects (out of 100): ";
//    cin >> sub1 >> sub2 >> sub3;
//
//    int total = sub1 + sub2 + sub3;
//    double percentage = (total / 300.0)*100;
//    char grade1, grade2, grade3;
//    //For subject 1
//    if(sub1>=90){
//    	grade1='A';
//    }
//   	else if(sub1>=80&&sub1<90){
//   		grade1='B';
//	}
//	else if(sub1>=70&&sub1<80){
//		grade1='C';
//	}
//	else if(sub1>=60&&sub1<70){
//		grade1='D';
//	}
//	else{
//		grade1='F';
//		
//	}
//	//Now for subject 2
//	if(sub2>=90){
//    	grade2='A';
//    }
//   	else if(sub2>=80&&sub2<90){
//   		grade2='B';
//	}
//	else if(sub2>=70&&sub2<80){
//		grade2='C';
//	}
//	else if(sub2>=60&&sub2<70){
//		grade2='D';
//	}
//	else{
//		grade2='F';
//	}
//	//For subject 3
//	if(sub3>=90){
//    	grade3='A';
//    }
//   	else if(sub3>=80&&sub3<90){
//   		grade3='B';
//	}
//	else if(sub3>=70&&sub3<80){
//		grade3='C';
//	}
//	else if(sub3>=60&&sub3<70){
//		grade3='D';
//	}
//	else{
//		grade3='F';
//	}
//
//    cout << "Total Marks: " << total << "\nPercentage: " << percentage << "%" << endl;
//    cout << "Grades: " << grade1 << ", " << grade2 << ", " << grade3 << endl;
//
//    // Check failure condition
//    if (grade1 == 'F' || grade2 == 'F' || grade3 == 'F') {
//        cout << "Failed" << endl;
//        return 0;
//    }

    // Scholarship eligibility
//    if (grade1 == 'A' && grade2 == 'A' && grade3 == 'A' && total >= 270) {
//        cout << "Eligible for Merit Scholarship." << endl;
//    } else if (grade1 >= 'B' && grade2 >= 'B' && grade3 >= 'B' && total >= 240) {
//        cout << "Eligible for Regular Scholarship." << endl;
//    } else {
//        cout << "Not eligible for a scholarship." << endl;
//    }
//
//    return 0;
//}
//TASK#5
//#include <iostream>
//using namespace std;
//int main() {
//    int age;
//    double income;
//    
//    cout << "Enter your age: ";
//    cin >> age;
//
//    if (age >= 18) {
//        cout << "Enter your annual income: ";
//        cin >> income;
//
//        if (income >= 30000) {
//            cout << "Congratulations! You are eligible for a loan." << endl;
//        } else {
//            cout << "You meet the age requirement but are not eligible due to low income." << endl;
//        }
//    } else {
//        cout << "You are not eligible for a loan because you are under 18 years old." << endl;
//    }
//
//    return 0;
//}

//TASK#6
#include <iostream>
using namespace std;
int main() {
    string username, password, role;
    
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (username == "admin" && password == "password123") {
        cout << "Authentication Successful!\n";
        
        cout << "Enter your role (Admin, Guest, User, etc.): ";
        cin >> role;

        if (role == "Admin") {
            cout << "Full Access" << endl;
        } else if (role == "Guest") {
            cout << "Limited Access" << endl;
        } else {
            cout << "No Access" << endl;
        }

    } else {
        cout << "Authentication Failed. Access Denied." << endl;
    }

    return 0;
}
