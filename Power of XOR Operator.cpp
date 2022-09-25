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
    
    //swap number using xor opeerator 
    int a = 7 ; 
    int b = 5 ; 
    a = a^b ; 
    b = b^a ;                  // b = b^a ----a = a^b ; 
                              // b = b^(a^b);
                             // b = a ;
   a = a^b ;                // a = a^b ----b = b^a ; 
                           // a = a^(b^a);
                          // a = b ;
    
   cout<< a<<" "<<b<<endl;      

   //eliminate duplicate number 

   int arr[7] = { 3 ,8 , 7 ,5 , 5 , 3,8};
   int ans = 0 ;
   for(int i = 0 ; i< 7 ; i++)
   {
      ans^= arr[i] ;
   } 
   cout<<ans<<endl;             
        
        

}
