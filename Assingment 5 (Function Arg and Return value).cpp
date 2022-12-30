#include<iostream>
using namespace std;
int num1,num2,num3, num4,num5,num6;
void func1(){
cout<<"function 1 with no argument & return value "<<endl<<"enter a value :";
cin>>num1;
if(num1%2==0)
cout<<"No is even"<<endl;
else
cout<<"No is odd"<<endl;
}
string func2(){
cout<<"function 2 with no argument but return value "<<endl<<"enter a value :";
cin>>num1;
if(num1%2==0)
 return "even";
else
 return "odd";
}
void func3(int num){
if(num%2==0)
cout<<"No is even"<<endl;
else
cout<<"No is odd"<<endl;
}
string func4(int num){
if(num%2==0)
 return "even";
else
 return "odd"; 
}
int main()
{

   func1();
string result=func2();
cout<<"No is "<<result<<endl;

cout<<"function 3 with argument but no return value "<<endl<<"enter a value :";
cin>>num1;
func3(num1);

cout<<"function 4 with argument & return value "<<endl<<"enter a value :";
cin>>num1;
result =func4(num1);
cout<<"No is "<<result<<endl;
}