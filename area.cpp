#include <iostream>
using namespace std;


double area(double radius) {
    return 3.14 * radius * radius;
}

int area(int width, int height) {
    return width * height;
}

double area(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    double r = 5.0;
    int w = 4;
    int h = 6;
    double b = 3.0;
    double heigth = 7.0;

    cout << "Circle area: " << area(r) << endl;
    cout << "Rectangle area: " << area(w, h) << endl;
    cout << "Triangle area: " << area(b, heigth) << endl;

    return 0;
}

