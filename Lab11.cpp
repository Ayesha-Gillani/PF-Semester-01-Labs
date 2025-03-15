//#include <iostream>
//using namespace std;
//
//int main() {
//    int arr[5] = {10, 20, 30, 40, 50};
//
//    cout << "Array elements: ";
//    for (int i = 0; i < 5; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}
//
////TASK#2
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    cout << "Enter the number of elements: ";
//    cin >> n;
//
//    int arr[n];
//    cout << "Enter " << n << " elements: ";
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//
//    cout << "Array in reverse order: ";
//    for (int i = n - 1; i >= 0; i--) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}
//
////TASK#3
//#include <iostream>
//using namespace std;
//
//int main() {
//    int arr[] = {5, 10, 15, 20, 25};
//    int sum = 0;
//    int size = sizeof(arr) / sizeof(arr[0]);
//
//    for (int i = 0; i < size; i++) {
//        sum += arr[i];
//    }
//
//    double average = (double)sum / size;
//    cout << "Sum: " << sum << endl;
//    cout << "Average: " << average << endl;
//
//    return 0;
//}
//
////TASK#4
//#include <iostream>
//using namespace std;
//
//int main() {
//    int arr[] = {2, 4, 6, 8, 10};
//    int size = sizeof(arr) / sizeof(arr[0]);
//
//    cout << "Length of the array: " << size << endl;
//
//    return 0;
//}

//TASK#5
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    cout << "Enter the number of elements: ";
//    cin >> n;
//
//    int arr[n];
//    cout << "Enter " << n << " elements: ";
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//
//    int max = arr[0];
//    for (int i = 1; i < n; i++) {
//        if (arr[i] > max) {
//            max = arr[i];
//        }
//    }
//
//    cout << "Largest number in the array: " << max << endl;
//
//    return 0;
//}
//2D Array
#include<iostream>
using namespace std;
int main()
{

int i,j;
int arr[i][j]={{1,2,3,4},{5,6,7,8}};
for(int i=0;i<2;i++){
	for(j=0;j<4;j++){
		cout<<arr[i][j]<<" "<<endl;
	}
}
}
