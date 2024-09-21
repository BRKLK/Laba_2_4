#include <iostream>
#include <math.h>
//#define _USE_MATH_DEFINES
#define M_PI 3.141592653

using namespace std;

int main() {
    float r;
    cout << "Enter radius: "; cin >> r;
    cout << "" << printf("%.9F", M_PI * pow(r, 2));
    return 0;
}