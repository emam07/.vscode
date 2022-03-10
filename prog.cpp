#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    string a;
    string b,c;
    cout<<"enter the word:"<<endl;
    cin>>a;
    cout<<"enter the word:"<<endl;
    cin>>b;
    int k=a;
    int l=b;
    int g =c;
    c=k*l;
    cout<<"the no smple:"<<c<<endl;
}


/*

 int fib(int n)
 {
     if (n < 2)
     {
         return 1;
     }
     return fib(n - 2) + fib(n - 1);
 }

 /*int factorial(int n)
     {
         if (n<=1)
         {
             return 1;
         }
         return n*factorial(n-1);
     }
 int main()
 {
     /* int a,b;
     cout<<"enter the first no.";
     cin>>a;
     cout<<"enter the second no.";
     cin>>b;
     cout<<"the result of the two no is:"<< a+b;
     int k=4,j=1000;
     cout<<"the no is right justified:"<<setw(4)<<k<<endl;
     cout<<"the no is right justified:"<<setw(4)<<j<<endl;
     //if else ladder
     int age;
     cout<<"enter your age";
     cin>>age;
     if(age<30)
     {
         cout<<"you are eligible for the course";
     }
     else if(age==30)
     {
         cout<<"you are getting a special discount in the course:"<<endl;
     }
     else
     {
         cout<<"you are above the age limit";
     }
     for (int i=0;i<10;i++)
     {
         cout<<"the no is less than 10 > "<<i<<endl;}
         int i=;
         while(i<=10){
         cout<<"print the table:"<<(6*i)<<endl;
         i++;
     }
     int a=4;
     int* h= &a;
     //cout<<"the adress is:"<<&a<<endl;
     //cout<<"the adress is:"<<h<<endl;
     cout<<*h;
     int arr[100];
     int n,i;
     cout<<"enter the no of elements:";
     cin>>n;
     for(i=0;i<n;i++)
     {
         cout<<"enter the elements of array:";
     cin>>arr[i];
     }
     for(i=0;i<n;i++)
     {
         cout<<"the elements of the array is:"<<arr[i]<<endl;

     }
     int* g=arr;
     for(i=0;i<n;i++)
     {
         cout<<"THE ELEMENTS OF THE ARRAY BY POINTERS ARE:"<<*g<<endl;
         g++;
     }
     int u,d;
     cout<<"enter the no.1:"<<endl;
     cin>>u;
     cout<<"enter the no.2:"<<endl;
     cin>>d;
     cout<<"the sum of the two no. is:"<<sum (u, d);*/
/*int a;
cout<<"enter the no:"<<endl;
cin>>a;
cout<<"the factorial of " <<a<< " is " << factorial(a) <<endl;
int ae;
cout << "enter the no:" << endl;
cin >> ae;
cout << "the fibonicci posi is:" << fib(ae) << endl;
return 0;}*/

