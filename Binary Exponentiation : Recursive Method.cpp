#include<bits/stdc++.h>
using namespace std;

int binaryrec(int a , int b) 
{
    //either store binaryrec(a,b/2) in a variable and use  where it needed ....... 
    if (b==0)
    {
        return 1 ; 
    }
    if(b&1)
    {
        return a*binaryrec(a,b/2)*binaryrec(a,b/2) ; 
    }
    else 
    {
        return binaryrec(a,b/2)*binaryrec(a,b/2) ;
    }
}

int main()
{
int t ;
cin>>t;
while(t--)
{
   int a , b  ;
   cin>>a>>b ; 
   cout<<binaryrec(a,b)<<endl ; 


}
    
    return 0 ;
}
