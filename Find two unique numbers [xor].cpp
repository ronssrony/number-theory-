
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[] = {1,2,3,1,2,3,5,7} ;
    int ans = 0 ;
    for(int i = 0 ; i<8 ; i++)
    {
        ans^=arr[i] ;
      
    }
    int temp = ans;
    int setbit = 0 ;
    int pos = 0 ;
    while(!setbit)
    {
        setbit = ans&1 ;
        
        pos++;
        ans=ans>>1 ;
    }
  
    int newxor = 0 ;
    for(int i = 0 ; i<8 ; i++)
    {
        if (arr[i]&(1<<pos-1))
        {
           newxor^=arr[i] ;
        }
    }
    cout<<newxor<<endl;
    cout<< (newxor^temp) <<endl;
   
    
    return 0 ;
}
