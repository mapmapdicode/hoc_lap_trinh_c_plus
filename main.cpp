#include <iostream>
using namespace std;

int main() {
    float r, cv, dt;
    const float PI = 3.14159265358979323846;
    cout << "Enter R: ";
    cin >> r;

    if (r <= 0) {
        cout << "Invalid Input: Fail" << endl;
        return 123;
    }

    cv = 2*PI*r;
    dt = r*r*PI;

    cout << "CV: " << cv << endl;
    cout << "DT: " << dt << endl;

    return 0;
}