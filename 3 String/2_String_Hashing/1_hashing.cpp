// Polynomial rolling hash function is a hash function that uses only multiplications and additions. The following is the function:
// hash(s)

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
typedef vector<ll>vll;
const int mod=1e9+7;
const int N=1e5;
const int p=31;
vll pp(N+1,1);

ll p_hash (string s){
    ll ans =0;
    FOR(i,0,s.length()){
ans =  ( ans+ (s[i] -'a' +1)*pp[i]) %mod;
    }
return  ans;     
    
}

void solve(){
    string s;
    cin>> s;
    cout<<p_hash(s) <<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >>n;
     FOR(i,1,N+1) pp[i]=(pp[i-1]*p)%mod;
    while(n--){
  solve();
}
return 0;
}