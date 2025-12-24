/*
  Name: Muhammad Hafizuddin Hakimi Bin Hasmadi
  Matric Number: A25CS0273
  Date: 11/11/2025
  Set 3
*/

#include <iostream>
using namespace std;

int main(){
    int x;
    int product=1;
    cout << "Enter an integer number: ";
    cin >> x;
    int temp = x;
    // Loop to calculate the product of digits
    while (x>0){
        int digit = x % 10;
        
        product = product * digit;
        
        x = x / 10;
    }
    
    
    if (product%4==0){
        cout << product <<" is multiples of 4." << endl;
    }
     if (product%5==0){
        cout << product << " is multiples of 5." << endl;
    }
     if (product%7==0){
        cout << product <<" is multiples of 7." << endl;
    }

    
    return 0;     
}