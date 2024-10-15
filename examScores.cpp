#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int minAverg(int scores[][10], const int NUM_STUDENTS, double threshold){

int index = 0;
double value = 0;
double average = 0;
bool test = true;

for(int i = 0; i < NUM_STUDENTS; i++){

for(int j = 0; j < 10; j++){
value = scores[i][j] + value;
}

average = value / 10;
//cout << average << endl;

if(average <= threshold){
    index = i;
    test = false;
    break;
}
else {value = 0;}
}

if(test == true){
    index = -1;
}

    return index;
}


int main(){

int scores[4][10] = {
{50, 60, 55, 65, 70, 60, 58, 62, 55, 65},  // Average = 60 (above threshold)
    {70, 80, 75, 85, 90, 65, 78, 82, 88, 74},  // Average = 78.7
    {10, 20, 15, 25, 12, 30, 18, 22, 17, 15},  // Average = 18.4 (below threshold)
    {100, 110, 105, 115, 120, 90, 108, 102, 114, 104}
};

cout << "returned student index: " << minAverg(scores, 4, 40.0) << endl;

return 0;
}