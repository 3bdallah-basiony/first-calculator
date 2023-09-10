#include <iostream>
using namespace std ;

int main ()
{
    int n1 , n2 , op ;
 cout << "hello\n";
 cout<< "welcome to my premative calculator \n";
 cout << "please enter your first number\n";
 cin >> n1 ;
 cout << "now enter the second number \n";
 cin >> n2;
 cout <<"now choose the operation from the following : \n";
 cout << "enter 1 for + \n";
 cout << "enter 2 for - \n";
 cout << "enter 3 for * \n";
 cout << "enter 4 for / \n";
 cin >> op;
 switch (op)
 {
  case 1:
    cout << n1 <<"+"<< n2 <<"="<< n1 +n2 <<"\n";
    break;
 case 2:
    cout << n1 <<"-"<< n2 <<"="<< n1 - n2 <<"\n";
    break;
 case 3:
    cout << n1 <<"*"<< n2 <<"="<< n1 * n2 <<"\n";
    break;
 case 4:
    cout << n1 <<"/"<< n2 <<"="<< n1 / n2 <<"\n";
    break;  
 default:
   cout << "invalid operation\n";
    break;
 
 }
 cout << "thank you for using our calculator\n"; 
 int ops ;
 cin >> ops; 

 return 0;
}