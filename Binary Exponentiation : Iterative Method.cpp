#include<bits/stdc++.h>
using namespace std;


int binaryiterator(int a ,int b )
{
    int ans = 1 ; 
    while(b) 
    {
        if(b&1)
        {
            ans = ans*a ;
        }
        a = a*a ;
      
        b = b>>1 ;

    }
    cout<<ans<<endl;
}

int main()
{
int t ;
cin>>t;
while(t--)
{
   int a , b  ;
   cin>>a>>b ; 
 
   cout<<binaryiterator(a,b)<<endl;


}
    
    return 0 ;
}
