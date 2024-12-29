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

// int pow(int a,int b){
//     if(b==0) return 1;
//     int ans=pow(a,b/2);
//     ans*=ans;
//     if(b%2 == 1) ans*=a;
//     return ans;
// }

//for constant space complexity
void solve(){
    int a,b;
    cin>>a>>b;
    int ans = 1 ;
    while(b){
        if(b%2 == 1) ans = ans*a ;
        b >>=1;
        a *= a ;
    }
    cout<< ans << endl; 
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    while(n--){
  solve();
}
return 0;
}