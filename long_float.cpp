#include <iostream>
using namespace std;

void show(long x) {
    cout << "long  " << x << endl;
}

void show(float x) {
    cout << "float " << x << endl;
}

int main() {
 //   show(5);      // compile error 2n l kara lini
   // show(5.0);    // compile error 2n el kara lini
    show(5.0f);   // float kkanchi

    return 0;
}

