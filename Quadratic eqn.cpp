#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    cout << "ax^2 + bx + c -> Enter Values- a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    int discriminant = b * b - 4 * a * c;
    
    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "Root: " << root << endl;
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Root 1: " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2: " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}
