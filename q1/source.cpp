//  ============================================================================
//  Program:               QuizOneProject
//  Software Engineer:     Jonas Sharron
//  Original Date:         25 September 2017
//  Revised Date:          22 January 2021
//  Purpose:               Given the input of two integers from the user, this 
//                         program will output either the sum, product, and
//                         difference of the integers or the value of raising 
//                         one integer to power of the other.
//  ============================================================================

#include <iostream>
using namespace std;

//  ============================================================================
//  function prototypes
//  ============================================================================
void sumProductDifference(int, int, int &, int &, int &);
int power(int, int);
//  ============================================================================

int main(){

    int x;                          //  first integer
    int y;                          //  second integer
    int sum;                        //  variable for holding sum
    int product;                    //  variable for holding product
    int difference;                 //  variable for holding difference
    int menu;                       //  variable for user input in menu
    int menu2;                      //  variable for user input in menu2
    bool goAgain;                   //  flag to determine loop with same values
    bool goAgainNew = true;         //  flag to determine loop with new values

    //  banner
    cout << endl;
    cout << "This program will compute the sum, product, difference," << endl;
    cout << "and power of two user-supplied integers." << endl;

    // user input and entry point of initial loop (as well as entry point if
    //  user chooses to run program again with new values)
    while(goAgainNew == true){
        cout << endl;
        cout << "Please enter first integer: ";
        cin >> x;
        cout << "Please enter second integer: ";
        cin >> y;
        goAgain = true;

        //  user input for what to compute (also entry point of loop if user 
        //  chooses to re-run program with the same values)
        while (goAgain == true){
            cout << endl;
            cout << "Compute the sum, product difference -or- power?" << endl;
            cout << "1 - sum, product, difference" << endl;
            cout << "2 - power" << endl;
            cout << "select 1 or 2: ";
            cin >> menu;
            cout << endl;

            //  switch statement to direct program flow based on user choice of
            //  what to compute above
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
            } // end menu switch

            //  user input on how to continue after computations and respective
            //  switch statement
            cout << endl;
            cout << "what would you like to do next?" << endl;
            cout << "1 - go again with same integers" << endl;
            cout << "2 - go again with new integers" << endl;
            cout << "3 - quit" << endl;
            cout << "select 1, 2, or 3: ";
            cin >> menu2;

            switch (menu2){
                case 1:
                    goAgain = true;
                    break;
                case 2:
                    goAgain = false;
                    goAgainNew = true;
                    break;
                case 3:
                    goAgain = false;
                    goAgainNew = false;
                    break;
            } // end menu2 switch
        } // end while (goAgain) loop
    }  // end while(goAgainNew) loop
}//  end main
//  ============================================================================
//  Function:        sumProductDifference
//  Purpose:         calculate the sum, product, and difference of two integers
//  Parameters:      int x - integer one for calculation
//                   int y - integer two for calculation
//                   int& sum - value of sum (of x and y) reference (for return)
//                   int& product - value of product (of x and y) reference (for
//                                  return)
//                   int& difference - value of difference (of x and y) reference
//                                     (for return)
//  Returns:         nothing (void function, calculated vales - sum, product,
//                   difference are passed by reference)
//  ============================================================================
void sumProductDifference(int x, int y, int& sum, int& product, int& difference){

    sum = x + y;
    product = x * y;
    difference = x - y;

}  //end sumProductDifference
//  ============================================================================  
//  Function:   power
//  Purpose:    calculate the value of one integer raised to the power of another
//  Parameters: int x - the base integer
//              int y - the exponent integer
//  Returns:    power - the value of int x raised to the power of int y  
int power(int x, int y){

    int power = x;

    for (int i = 1; i < y; i++){
        power = power * x;
    }

    return power;

} // end power
//  ============================================================================
