#include <iostream>
using namespace std;
bool isPalindrome(int x) {
        if(x<0){
             return false;
        }  
    long long original=x;
    long long rev=0;

    while(x>0){
       int  digit=x % 10;
       rev=rev *10 +digit;
       x/=10;
    }
    return original==rev;
    }
int main(){
  int x;
  cout<<"Enter the number:";
  cin>>x;
  if( isPalindrome(x)){
    cout<<"Palindrome";
  }else{
     cout<<"Not a Palindrome";
  }
return 0;
}
