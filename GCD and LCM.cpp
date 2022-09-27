#include<bits/stdc++.h>
using namespace std;
int gcd(int a , int b) 
{
  if(b == 0)
  {
    return a ; 
  }
  return gcd(b , a%b);
}
int main()
{
   
   int a , b ; 
   cin>>a>>b ; 
   cout<<gcd(a ,b)<<endl; 
  int lcd = a*b / gcd(a,b) ; 
  cout<<lcd<<endl;
  // either you can use inbuilt funtion __gcd()
  cout<<"OUTPUT of using GCD inbuilt funtion __gcd() ----"<<__gcd(a,b) ;


  
  return 0 ;
}
