#include <iostream>

using namespace std;

int listSum(int* ptr, int size){ //loop to add each element to sum
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum = sum + ptr[i];
    }
    return sum;
}

int main(){

    int numArray[3];

    numArray[0] = 2;
    numArray[1] = 3;
    numArray[2] = 4;

    int sum = listSum(numArray, sizeof(numArray)/sizeof(int));
    cout << "The sum of the array is: " << sum << endl;

    return 0;
}