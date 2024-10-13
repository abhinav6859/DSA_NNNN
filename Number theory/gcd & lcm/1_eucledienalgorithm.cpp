// Eucledian algorithm to find gcd
// .gcd(a,b)=gcd(b,a-b)             if(a>b)
// .gcd(a,0)=a




#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FOR(i,a,b) for(int i=(a); i<(b); i++)
#define FORk(i,a,b,k) for(int i=(a); i<(b); i+=k)
#define RFOR(i,a,b) for(int i=(a); i>=(b); i--)
#define RFORk(i,a,b,k) for(int i=(a); i>=(b); i-=k)
#define pb push_back
typedef vector<int>v;
typedef vector<string>vs;
typedef long long int ll;

int  gcd(int c,int d) {
  int a,b;
      if(c>d){
       a=c;
       b=d;
      }
      else{
        b=c;
        a=d;
      }
      if(b==0){ 
        cout<<a<<endl;
        return 0;
      }
      if((a-b)>b)
      return gcd(a-b,b);
      else return gcd(b,a-b);
    }

    // from mod
    //int  gcd(int a,int b) {
 
      // if(b==0){ 
      //   cout<<a<<endl;
      //   return 0;
      // }
      // else
      // return gcd(b,a%b);     a%b always less than a/2

int main(){
    ios_base::sync_with_stdio(true);
    cin.tie(NULL);
    cout.tie(NULL);
int a,b;
cout<<"give ur number\n";
cin>>a;
cin>>b;
  gcd(a,b);

return 0;
}