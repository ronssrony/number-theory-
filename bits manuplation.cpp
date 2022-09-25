#include<bits/stdc++.h>
using namespace std;
 void binaryprint( int num )
    {
    
       for(int i = 7 ; i>=0 ; --i)
    {
      cout<<((num>>i)&1);
    }
    cout<<endl;

    }
int main()
{       
    int a  ;
    int ct = 0 ;
    cin>>a ;
  //print binary number 
  binaryprint(a);



   
  ////set bits 
  binaryprint((a|(1<<4)));

  ///unset bits 
  binaryprint((a& ~(1<<3)));
  
 //toogle bits 
 binaryprint(a^(1<<0));

    //set count 
 for(int i = 7 ; i >=0 ; --i)
 {
  if( (a & (1<<i)) !=0)
  {
    ct ++ ;
  }
 }
 cout<<ct<<endl;
 cout<<__builtin_popcount(a)<<endl;



        
        

}
