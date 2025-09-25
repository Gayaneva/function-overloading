#include <iostream>
using namespace std;

int sum(int a, int b) {
    cout << "2 int" << endl;
    return a + b;
}

double sum(double a, double b) {
    cout << "2 double" << endl;
    return a + b;
}

int main() {
    cout << sum(3, 4) << endl;         
    cout << sum(3.5, 2.5) << endl; 
//    cout << sum(3, 2.5) << endl;  // compile error e linum

    return 0;
}

