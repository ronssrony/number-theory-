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
  cout<<"Input a number to check it is odd or even"<<" ";
    cin>>a ;
  //odd even check//

   if(a&1)
   {
    cout<<"it's an odd number"<<endl;
   }
   else 
   {
    cout<<" it's an even number"<<endl;
   }
//divide and multiply  by two 
//when we done 1<<(left shift) on a number it will multiply by 2 ; 
// and 1>>(right shift) on a number divide by 2 //
cout<<(a<<1)<<endl;
cout<<(a>>1)<<endl;

//upper lower case conversation 
//if i want to convert a upper case char to lower case i just need to do set  5(fifth)bits in upper case binary number 
//so let see 
char A = 'A' ; 
char d = A|(1<<5);
cout<<d<<endl;
//if i want to convert lower case to upper case i just need to do unset 5th bit in lower case binary number
 char b = 'b'; 
 char B = b & ~(1<<5) ; 
 cout<<B<<endl;
  //here some ninja ,,,,,for upper to lower we just done or operation with space and it will converted
  // and lower to upper we just done and operation with uderscore and it will revert his form
  char upper = 'y'&'_' ; 
  char lower =  'Y'|' ';
  cout<<upper<<endl;
  cout<<lower<<endl;

/* //  clear LSB   //
we can do it with a loop using unset method  but here a trick for do this in one operation lets see 
so assume that we have clear 2nd bit of LSB for 11 
11 in binary (00001011)
think if we have a number 11111000 and then 11&(11111000) will clear the LSB
how we get that?
think 11111000 is the reverse of 00011111
 (00001000-1) is the same of number of this reverse number
*/
int h = 11 ; 
binaryprint(h) ;
int H = h&(~((1<<3)-1));
binaryprint(H);

//clear MSB
 H = h&((1<<3)-1);
binaryprint(H);

// check power of two(2)

int two ; 
cout<<"input a number to check is this power of two or not.....";
cin>>two ; 
if(two&(two-1))
{
  cout<<"NOT"<<endl;
}
else 
{
  cout<<"Yes, it is"<<endl;
}




        
        

}
