#include <iostream>
#include <cmath>
#include <iomanip>
#include <cassert>

using namespace std;

int main(){

int number;
int count = 0;

cout << "Enter a number between 10 and 500: " << endl;
cin >> number;

while (number <= 10 || number >= 500){
    cout << "Invalid input." << endl;
    cout << "Enter a number between 10 and 500: " << endl;
    cin >> number;
}

while (number > 1 && number != 1){
    if (number % 2 == 0){ //even numbers
        number = floor(number / 2);
        cout << number << endl;
        count = count + 1;
    }
    if (number % 2 == 1 && number != 1){ //odd numbers
        number = ((3 * number) + 1);
        cout << number << endl;
        count = count + 1;
    }
    }
    
cout << "Total steps: " << count << endl;

    return 0;
}