// Code from Ryuzaki42 git repository Let's code (https://github.com/ryuuzaki42/lets_code.git). Enjoy it!

// Input R and  calculate the area of a circumference is defined as A = π * R^2; with π = 3.14159:
// Output: "A=" followed by the value with four places after the decimal point

// Input Samples   Output Samples
// 2.00             A=12.5664
// 100.64           A=31819.3103
// 150.00           A=70685.7750

// To compile:
// g++ -o 1002_area_a\ circumference.out 1002_area_a\ circumference.cc

#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    double r, res;

    cin >> r;
    res = 3.14159 * (r * r);

    printf("A=%.4f\n", res);

    return 0;
}
