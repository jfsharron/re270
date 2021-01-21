#include <iostream>
using namespace std;


//  ============================================================================
//  function prototypes
//  ============================================================================

void sumProductDifference(int, int, int &, int &, int &);
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

}//  end main
//  ============================================================================
void sumProductDifference(int x, int y, int& sum, int& product, int& difference){

    // int sum;
    // int product;
    // int difference;

    sum = x + y;
    product = x * y;
    difference = x - y;


}  //end sumProductDifference
//  ============================================================================    
