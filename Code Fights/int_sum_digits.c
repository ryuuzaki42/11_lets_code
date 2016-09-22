// Code from Ryuzaki42 git repository Let's code (https://github.com/ryuuzaki42/lets_code.git). Enjoy it!

// Given an integer, find the sum of all its digits
// n = 111 =>  3 : 1 + 1 + 1
// n = 172 => 10 : 1 + 7 + 2

// # Code credits: Clebson Cardoso [my friend :)] => https://github.com/clebsonc #

// To compile:
// g++ -o int_sum_digits.out int_sum_digits.c

#include <iostream>

using namespace std;

int sum_digits(int n) {
    int sum = 0;
    while (n != 0){
        sum += n % 10;
        n = n/10;
   }
   return sum;
}

int main(){
    int n =0;

    cin >> n;

    cout << sum_digits(n) << endl;

    return 0;
}
