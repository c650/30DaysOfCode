/******************************************

        30 Days of Code Submission

        @author Charles Bailey

        Licensed under MIT License

******************************************/
#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    if ((n % 2 == 1) || ((n >= 6)&&(n <= 20))) {
        cout << "Weird" << endl;
    } else {
        cout << "Not Weird" << endl;
    }
    return 0;
}