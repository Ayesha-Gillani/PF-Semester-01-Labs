//#include <iostream>
//using namespace std;
//
//int main() {
//    int num = 10;
//    int* ptr = &num;
//
//    cout << "Value of num using pointer: " << *ptr << endl;
//
//    return 0;
//}
//
////TASK#2
//#include <iostream>
//using namespace std;
//
//int main() {
//    int num = 10;
//    int* ptr = &num;
//
//    *ptr = 20;  // Changing value using pointer
//
//    cout << "Modified value of num: " << num << endl;
//
//    return 0;
//}
//
////TASK#3
//#include <iostream>
//using namespace std;
//
//int main() {
//    int arr[] = {1, 2, 3, 4, 5};
//    int* ptr = arr;  // Array name acts as a pointer to the first element
//
//    cout << "Array elements using pointer arithmetic: ";
//    for (int i = 0; i < 5; i++) {
//        cout << *(ptr + i) << " ";
//    }
//    cout << endl;
//
//    return 0;
//}
//
////TASK#4
#include <iostream>
using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    
    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    swap(&x, &y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;

    return 0;
}
//
////TASK#5
//#include <iostream>
//using namespace std;
//int main() {
//   int* ptr = nullptr;
//
//    if (ptr == nullptr) {
//        cout << "Pointer is null, it does not point to any valid memory." << endl;
//   } else {
//     cout << "Pointer holds address: " << ptr << endl;
//   }
//
//    return 0;
//}

//TASK#6
//#include <iostream>
//using namespace std;
//
//int main() {
//    int num = 42;
//    void* ptr = &num;
//
//    cout << "Value of num using void pointer: " << *(static_cast<int*>(ptr)) << endl;
//
//    return 0;
//}
