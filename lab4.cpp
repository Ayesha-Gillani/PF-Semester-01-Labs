#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
//	double item1 = 12.95;
//	double item2 = 24.95;
//	double item3 = 6.95;
//	double item4 = 14.95;
//	double item5 = 3.95;
//	double subtotal = item2 + item2 + item3 + item4 + item5;
//	double salestax = subtotal*6/100;
//	double total = subtotal + salestax;
//	cout<<"Price of item 1:"<<" "<<'$'<<item1<<endl;
//	cout<<"Price of item 2:"<<" "<<'$'<<item2<<endl;
//	cout<<"Price of item 3:"<<" "<<'$'<<item3<<endl;
//	cout<<"Price of item 4:"<<" "<<'$'<<item4<<endl;
//	cout<<"Price of item 5:"<<" "<<'$'<<item5<<endl;
//	cout<<"Subtotal:"<<" "<<'$'<<subtotal<<endl;
//	cout<<"Sales Tax (6%):"<<" "<<'$'<<salestax<<endl;
//	cout<<"Total:"<<" "<<'$'<<total<<endl;
//	return 0;
//	
//}
//double num1 = 85.5;
//double num2 = 90.75;
//double num3 = 88.25;
//double sum = num1 + num2 + num3;
//double totalnum = 3;
//double average = sum/totalnum;
//cout<<"The average of "<<num1<<" "<<','<<" "<<num2<<" "<<"and"<<" "<<num3<<" "<<'='<<" "<<fixed<<setprecision(2)<<average<<endl;
//}


//int num1,num2,num3,addition,subtraction,multiplication,division,modulus;
//cout<<"Enter two numbers:"<<endl;
//cout<<"Number 1 :";
//cin>>num1;
//cout<<"Number 2 :";
//cin>>num2;
//addition = num1 + num2;
//subtraction = num1 - num2;
//multiplication = num1*num2;
//division = num1/num2;
//modulus = num1%num2;
//cout<<"\tAddtion:\n\t"<<"\t"<<num1<<" + "<<num2<<" = "<<addition<<endl;
//cout<<"\tSubtraction:\n\t"<<"\t"<<num1<<" - "<<num2<<" = "<<subtraction<<endl;
//cout<<"\tMultiplication:\n\t"<<"\t"<<num1<<" * "<<num2<<" = "<<multiplication<<endl;
//cout<<"\tDivision:\n\t"<<"\t"<<num1<<" / "<<num2<<" = "<<division<<endl;
//cout<<"\tModulus:\n\t"<<"\t"<<num1<<" % "<<num2<<" = "<<modulus<<endl;
//}


//double weight, height, BMI;
//cout<<"BMI Calculator"<<endl;
//cout<<"--------------"<<endl;
//
//cout<<" Enter your weight in kilograms: "<<endl;
//cin>>weight;
//cout<<"Enter your height in meters: "<<endl;
//cin>>height;
//BMI=weight/(height*height);
//cout<<"Your BMI is: "<<BMI<<endl;
//}

double distance, fuelEfficiency, fuelCostPerLitre, totalTripCost;
cout<<"Trip Cost Estimator"<<endl;
cout<<"___________________"<<endl;
cout<<"Enter the distance of the trip in kilometers: "<<endl;
cin>>distance;
cout<<"Enter the vehicle\'s fuel efficiency (km per litre):"<<endl;
cin>>fuelEfficiency;
cout<<"Enter the fuel cost per litre:"<<endl;
cin>>fuelCostPerLitre;
totalTripCost = (distance / fuelEfficiency)*fuelCostPerLitre;
cout<<"Total trip cost: Rs"<<" "<<totalTripCost<<endl;
}






