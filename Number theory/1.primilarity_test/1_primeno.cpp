//1 is neither prime nor composite

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FOR(i,a,b) for(int i=(a); i<(b); i++)
#define FORk(i,a,b,k) for(int i=(a); i<(b); i+=k)
#define RFOR(i,a,b) for(int i=(a); i>=(b); i--)
#define RFORk(i,a,b,k) for(int i=(a); i>=(b); i-=k)

void solve(){
    int n; 
    cin >> n;

    //border cases for 1and 2
    if(n==1){
      cout<<"no"<<endl;
      return;
    }
    if(n==2){
      cout<<"yes"<<endl;
      return;
    }

   FOR(i,2,n){    //if we use sqrt(n) place of n then T.C 0(root(n)logn)
   if(n%i==0){
     cout<<"no"<<endl;
      return;
   }
   }
   cout<<"yes"<<endl;
     
}
int main(){
    ios_base::sync_with_stdio(true);
    cin.tie(NULL);
    cout.tie(NULL);
     
    int n;
  //  n=5; set n for testcases
    while(n--){
  solve();
}
return 0;
}