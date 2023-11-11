// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// int main()
// {
//     vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

//     for (const string& word : msg)
//     {
//         cout << word << " ";
//     }
//     cout << endl;
// }
// // Factorial

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     long factorial = 1.0;

//     cout << "Enter a positive integer: ";
//     cin >> n;

//     if (n < 0)
//         cout << "Error! Factorial of a negative number doesn't exist.";
//     else {
//         for(int i = 1; i <= n; ++i) {
//             factorial *= i;
//         }
//         cout << "Factorial of " << n << " = " << factorial;    
//     }

//     return 0;
// }

// #include <iostream>

// int main() {
//     std::cout << "Hello World";
//     /* code */
//     return 0;
// }


// variables
// #include <iostream>

// int main() {
//     int file_size = 100 ;
//     double sales = 9.99;
//     std::cout << file_size;
//     /* code */
//     return 0;
// }


// #include <iostream>

// using namespace std;

// int main() {
//     int a = 2;
//     int b = 1;
//     int temp = a;
//     a = b;
//     b = temp;
//     std::cout << a;
//     return 0;
// }

// constant

// #include <iostream>
// int main() {
//     const double pi = 3.14;
//     return 0;
// }

// Naming conventions

// int  main () {
//     int file_size; // snak case
//     int FileSize; // pascal case
//     int fileSize; // camel case
//     int iFileSize; // hungarian notation
// }

// mathematical expressions

// int main() {
//     int x = 10;
//     int y = 3;
//     int z = x + y;  // to get the answer in flotatoin we have to convert on of the in to double 
//     std::cout << z;
//     return 0;
// }

// int main() {
//     int x = 10;   // adding ++ to any integer ot will add 1
//     int y = x++; // x = 11, y = 10
//     int z = ++x; // x = 11, z = 11 if don't apply first coode
//     std::cout << y;
//     return 0;
// }

// order of operaters

// int main() {
//     doubule x = 1 + 2 * 3;
//     std::cout << x;
//     return 0;
// }

// int main() {
//     double x = 10;
//     double y = 5;
//     double z = (x + 10) / (3 * y);
//     std::cout << z;
//     return 0;
// }

// writing output to the console

// int main() {
//     int x = 10;
//     int y = 20;
//     std::cout << "x = ";
//     std::cout <<  x;
//     std::cout << "x =" << x;
//     std::cout << "y =" << y;
//     std::cout <<"x =" << x << std::endl;
//     std::cout << "x =" << x << std::endl
//               << "y =" << y;
//     return 0;
// }

// #include <iostream>

// using namespace std;

// int main() {
//     double sales = 95000;
//     cout << "Sales: $" << sales << endl;


//     const double statetaxrate = .04;
//     double statetax = sales * .04;
//     cout << "State Tax: $" << statetax << endl;


//     const double countytaxrate = .02;
//     double countytax = sales * .02;
//     cout << "State Tax: $" << countytax << endl;


//     double totaltax = statetax + countytax;
//     cout << "Total Tax: $" <<totaltax;

//     return 0;

// }

// readinh from y=the console

// #include <iostream>

// using namespace std;

// int main() {
//     cout << "Enter a value: ";
//     int value;                   // use double to get floting no.
//     cin >> value;
//     cout << value;
//     return 0;
// }

// #include <iostream>

// using namespace std;

// int main() {
//     cout << "Enter values for x and y: ";
//     double x;
//     double y;
//     cin >> x;                   
//     cin >> y;
//     cout << x +y;
//     return 0;
// }

// #include <iostream>

// using namespace std;

// int main() {
//     cout << "Enter values for x and y: ";
//     double x;
//     double y;
//     cin >> x >> y; 
//     cout << x +y;
//     return 0;
// }

#include <iostream>

using namespace std;

int main() {
    cout << "Enter Temperature in Fahrenheit: ";
    double Fahrenheit;
    cin >> Fahrenheit;
    double Celsius;
    Celsius = (Fahrenheit - 32)* 5/9;
    cout << "Temperature in Celsius: " << Celsius;
    return 0;
}