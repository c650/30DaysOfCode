/******************************************

        30 Days of Code Submission

        @author Charles Bailey

        Licensed under MIT License

******************************************/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    float m;
    int t, x;
    cin >> m >> t >> x;
    
    cout << "The final price of the meal is $"<< round(m + ((m * t)/100.0) + ((m * x)/100.0)) << "." << endl;
    return 0;
}