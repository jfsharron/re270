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
    int menu;

    cout << "This program will compute the sum, product, difference," << endl;
    cout << "and power of two user-supplied integers." << endl;
    cout << endl;
    cout << "Please enter first integer: ";
    cin >> x;
    cout << "Please enter second integer: ";
    cin >> y;
    cout << endl;

    cout << "Do you want to compute the sum, product difference -or- power?" << endl;
    cout << "1 - sum, product, difference" << endl;
    cout << "2 -power" << endl;
    cout << "select 1 or 2: ";
    cin >> menu;

    switch (menu){
        case 1:
        sumProductDifference(x, y, sum, product, difference);
        cout << "sum:        " << sum << endl;
        cout << "product:    " << product << endl;
        cout << "difference: " << difference << endl;
        break;

        case 2:
        cout << "power:      " << power(x, y) << endl;
        break;
    }
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
