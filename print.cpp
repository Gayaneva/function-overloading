#include <iostream>
#include <string>
using namespace std;


void print(int x) {
    cout << "Integer  " << x << endl;
}

void print(const string &s) {
    cout << "String " << s << endl;
}

void print(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int num = 42;
    string text = "Hello";
    int arr[] = {1, 2, 3, 4, 5};

  
    print(num);
    print(text);
    print(arr, 5);

    return 0;
}

