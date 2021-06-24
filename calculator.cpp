#include <iostream>
using namespace std;

    void sum()
    {
        double num1,num2;
        cout<<"Enter your First Number : \n";
        cin>>num1;
        cout<<"Enter your Second Number : \n";
        cin>>num2;
        cout<<"The sum is = " << num1 + num2;
    }
        void multiplication()
    {
        double num1,num2;
        cout<<"Enter your First Number : \n";
        cin>>num1;
        cout<<"Enter your Second Number : \n";
        cin>>num2;
        cout<<"The multiplication is = " << num1 * num2;
    }
    void subtraction()
       {
        double num1,num2;
        cout<<"Enter your First Number : \n";
        cin>>num1;
        cout<<"Enter your Second Number : \n";
        cin>>num2;
        cout<<"The subtraction is = " << num1 - num2;
    }
    void division()
       {
        double num1,num2;
        cout<<"Enter your First Number : \n";
        cin>>num1;
        cout<<"Enter your Second Number : \n";
        cin>>num2;
        cout<<"The Division is = " << num1 / num2;
    }
   void power(double first , double second)
{

double result= 1;

for (int i = 0; i < second; i++)
{
    result = result * first;
}


}

double base ,exponent;
int main(){

 cout<<"what is your base : "<<endl;
 cin>>base;

 cout<<"what is your exponent : "<<endl;
 cin>>exponent;

 double answer= power(base ,exponent);
 cout<<answer<<endl;
}

 main()
{
    double number;
    cout<<"press 1 for Addition "<<endl;
    cout<<"press 2 for Subtraction "<<endl;
    cout<<"press 3 for Multiplication "<<endl;
    cout<<"press 4 for Division "<<endl;
    cout<<"press 5 for for power function "<<endl;
    cout<<"press 6 for taking square "<<endl;
    cin>>number;

    if (number == 1)
    {
        sum();
    }
    else if (number==2)
    {
        subtraction();
    }
    else if (number == 3)
    {
        multiplication();
    }
    else if (number == 4)
    {
        division();
    }
    else if (number == 5)
    {
        division();
    }
    else if (number == 6)
    {
        power();
    }
    else
    {
        cout<<"Sorry! You Enter Wrong Number "<<endl;
    }
    

}