#include <iostream>
#include <iomanip>

using namespace std;

int calculateTime(int units){
    
    int total = 1; 
    int growthrate = 0;
    int seconds = 0;

while (units > total){
    seconds = seconds + 1;
    growthrate = growthrate + 1;
    total += growthrate;
}
//seconds counter goes up once each time loop is ran, loop only runs until the growthrate total is >= to the units inputed into the function
//summation counter ex: 0 + 1 = 1, 1 + 2 = 3, 3 + 3 = 6, 6 + 4 = 10, 10 + 5 = 15, 15 + 6 = 21
    return seconds;
}

int main(){

int head;
int mid_body;
int low_body;

cout << "Enter head size:" << endl;
cin >> head;

while(head <= 0){
    cout << "Please enter a positive integer for head size:" << endl;
    cin >> head;
}

cout << "Enter mid-body size:" << endl;
cin >> mid_body;

while(mid_body <= 0){
    cout << "Please enter a positive integer for mid-body size:" << endl;
    cin >> mid_body;
}

cout << "Enter lower-body size:" << endl;
cin >> low_body;

while(low_body <= 0){
    cout << "Please enter a positive integer for lower-body size:" << endl;
    cin >> low_body;
}

cout << "Time to reach head size: " << calculateTime(head) << " seconds" << endl;
cout << "Time to reach mid-body size: " << calculateTime(mid_body) << " seconds" << endl;
cout << "Time to reach lower-body size: " << calculateTime(low_body) << " seconds" << endl;
cout << "Total time to create the snowman: " << calculateTime(head) + calculateTime(mid_body) + calculateTime(low_body) << " seconds" << endl;

    return 0;
}