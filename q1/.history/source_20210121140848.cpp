#include <iostream>
using namespace std;


//  ============================================================================
//  function prototypes
//  ============================================================================

void sumProductDifference(int, int, int &, int &, int &);
int power(int, int);
//  ============================================================================

int main(){

    int x;
    int y;
    int sum;
    int product;
    int difference;

    cout << "This program will compute the sum, product, difference," << endl;
    cout << "and power of two user-supplied integers." << endl;
    cout << endl;
    cout << "Please enter first integer: ";
    cin >> x;
    cout << "Please enter second integer: ";
    cin >> y;

    sumProductDifference(x, y, sum, product, difference);
    cout << "sum:        " << sum << endl;
    cout << "product:    " << product << endl;
    cout << "difference: " << difference << endl;

    cout << "power:      " << power(x, y) << endl;

}//  end main
//  ============================================================================
void sumProductDifference(int x, int y, int& sum, int& product, int& difference){

    sum = x + y;
    product = x * y;
    difference = x - y;

}  //end sumProductDifference
//  ============================================================================  
int power(int x, int y){

    int power = x;

    for (int i = 1; i < y; i++){
        power = power * x;
    }

    return power;

} // end power
//  ============================================================================
