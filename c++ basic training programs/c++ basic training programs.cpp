

// *******************Hello World********************//

// #include <iostream>
// using namespace std;

// int main(){

// cout<<"hello world";

// 	return 0;
// }

// *******************verriables********************//

// #include <iostream>
// using namespace std;

// int main(){

//  int sli;
//  sli = 5+1;
 
// int clid = sli;
// sli = 100000;
// cout << clid;


//  return 0;

// }
// *******************take user input********************//

// #include <iostream>
// using namespace std;

// int main(){
// int sli;
// cout<< "how to many slices you need \n";
// cin>>sli;
// cout<<"ok! I will give you "<< sli <<" slices of Pizza \n";

//  return 0;

// }
// *******************power function********************//

// #include <iostream>
// #include<cmath>
// using namespace std;

// int main(){
//     float base ,exponent ;
//     cout<<"what is your base number :"<<endl;
//     cin>>base;
//     cout<<"what is the exponent :"<<endl;
//     cin>>exponent;
//     cout<<"Your Answer is "<< pow(base, exponent,) <<endl;

//     return 0;
// }
// *******************power function********************//
// #include <iostream>
// #include <Cmath>
// using namespace std;
// int main(){

//     float base, exponent, take_again;
//     cout<<"what is your base number"<<endl;
//     cin>>base;
//     cout<<"whats is your exponent number"<<endl;
//     cin>>exponent;
//     take_again = pow(base,exponent);
//     cout<<"your answer is " <<pow( take_again,3)<<endl;

//     return 0;
// }
// *******************creating own function example # 1 ********************//
// #include <iostream>
// using namespace std;

//  double saeed(double first, double second)

// {

// double result =first+second;
//     return result;   
// }

// double first ,second;
// int main(){
//  cout<<"what is your first number : "<<endl;
//  cin>>first;
//  cout<<"what is your second : "<<endl;
//  cin>>second;

//  double sum= saeed(first ,second);
//  cout<<sum<<endl;
// }
// *******************creating own function example 2 ********************//
// #include <iostream>
// using namespace std;

// double saeed(double first , double second)
// {

// double result= 1;

// for (int i = 0; i < second; i++)
// {
//     result = result * first;
// }
// return result;

// }

// double base ,exponent;
// int main(){

//  cout<<"what is your base : "<<endl;
//  cin>>base;

//  cout<<"what is your exponent : "<<endl;
//  cin>>exponent;

//  double answer= saeed(base ,exponent);
//  cout<<answer<<endl;
// }
// *******************creating void function********************//
// #include <iostream>
// using namespace std;

// double power(double base,double exponent)
// {
//     double result =1;
//     for (int i = 0; i < exponent; i++)
//     {
//         result = result * base;
//     }
//     return result;

// }
//     void print_power(double base, int exponent)
//     {
//         double mypower = power(base,exponent);
//         cout<<base << " raised to power "<< exponent <<" is equal to the "<<mypower<<endl;
//     }

// int main()
// {
// double bases;
// int exponents;
// cout<<"what is base? : \n";
// cin >> bases;
// cout<<"what is exponent? : \n";
// cin >> exponents;
// print_power(bases, exponents);
// print_power(2,32);
// print_power(2,16);
// }
// *******************creating void function example 2********************//
// #include <iostream>
// using namespace std;
// double plus_num(double num1,double num2)
// {


//    double result = num1 + num2;

//       return result;

// }

// void print_num(double number1,double number2)
// {

// double my_number = plus_num(number1 , number2);

//  cout<<number1<<" + "<<number2 <<" is equal to the "<< my_number <<endl;

// }

// int main()

// {
//     double number_1,number_2;
//     cout<<"What is your first Number : \n";
//     cin>>number_1;
//     cout<<"What is your second Number : \n";
//     cin>>number_2;
//     print_num(number_1, number_2);
//     cout<<endl<<"But 36 + 48 is equal to ";
//     print_num(36,48);
// }
// *******************Number Table for function practice not completed********************//
// #include <iostream>
// #include <conio.h>
// using namespace std;
// void table(int n);
// void main()
// {
//     int num;
//     clrscr();
//     cout<<"Enter a number : ";
//     cin >> num;
//     table(num);
//     getch();
// }
// void table(int n)
// {
//     int c;
//     for (c = 0; c <=10; c++)
//     {
//         cout<<n<<" * "<<c<<" = "<<n*c<<endl;
//     }
    
// }
// *******************creating calculator using Function********************//
// #include <iostream>
// using namespace std;

//     void sum()
//     {
//         double num1,num2;
//         cout<<"Enter your First Number : \n";
//         cin>>num1;
//         cout<<"Enter your Second Number : \n";
//         cin>>num2;
//         cout<<"The sum is = " << num1 + num2;
//     }
//         void multiplication()
//     {
//         double num1,num2;
//         cout<<"Enter your First Number : \n";
//         cin>>num1;
//         cout<<"Enter your Second Number : \n";
//         cin>>num2;
//         cout<<"The multiplication is = " << num1 * num2;
//     }
//     void subtraction()
//        {
//         double num1,num2;
//         cout<<"Enter your First Number : \n";
//         cin>>num1;
//         cout<<"Enter your Second Number : \n";
//         cin>>num2;
//         cout<<"The subtraction is = " << num1 - num2;
//     }
//     void division()
//        {
//         double num1,num2;
//         cout<<"Enter your First Number : \n";
//         cin>>num1;
//         cout<<"Enter your Second Number : \n";
//         cin>>num2;
//         cout<<"The Division is = " << num1 / num2;
//     }

//  main()
// {
//     double number;
//     cout<<"press 1 for Addition "<<endl;
//     cout<<"press 2 for Subtraction "<<endl;
//     cout<<"press 3 for Multiplication "<<endl;
//     cout<<"press 4 for Division "<<endl;
//     cin>>number;

//     if (number == 1)
//     {
//         sum();
//     }
//     else if (number==2)
//     {
//         subtraction();
//     }
//     else if (number == 3)
//     {
//         multiplication();
//     }
//     else if (number == 4)
//     {
//         division();
//     }
//     else
//     {
//         cout<<"Sorry! You Enter Wrong Number "<<endl;
//     }
    

// }
// *******************creating more functional calculator********************//










