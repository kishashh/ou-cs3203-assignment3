#include <iostream>

using namespace std;

int listSum(int* ptr, int size){ //loop to add each element to sum
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum = sum + ptr[i];
    }
    return sum;
}

int listProduct(int* ptr, int size){//loop to multiply each element to product
    int product = 1;
    for(int i = 0; i < size; i++){
        product = product * ptr[i];
    }
    return product;
}

int* reverseList(int* list, int size){
    int* listReverse = new int[size];
    for(int i = 0; i < size; i++){
        listReverse[i] = list[size - 1 - i]; //size - 1 - (amount of loop iterations)
    }
    return listReverse;
}

int main(){
    int n;
    cout << "Enter the how many numbers will be in the list: ";
    cin >> n;

    int* numArray = new int[n]; //an array with a size that is determined at runtime

    for (int i = 0; i < n; i++){
        cout << "Enter the value at " << i << ": ";
        cin >> numArray[i];
    }

    int sum = listSum(numArray, n);
    cout << "The sum of the array is: " << sum << endl;
    
    int product = listProduct(numArray, n);
    cout << "The product of the array is: " << product << endl;

    int* numReverse;
    numReverse = reverseList(numArray, n);
    cout << "The reverse of the array:";
    for (int i = 0; i < n; i++) {
        cout << " " << numReverse[i];
    }
    cout << endl;

    delete[] numArray;//free memory
    delete[] numReverse;

    return 0;
}