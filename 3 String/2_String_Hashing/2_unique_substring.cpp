// Find the number of unique substring in s

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


ll p_hash (string s, int p){
    int a1,j;
    set<ll> s1;
    ll ans =0;
    int n=s.length();
    FOR(i,0,n){
        ans=0;
        a1=1;
FOR(j,i,n){
    ans =  ( ans+ (s[j] -'a' +1)*a1) %mod;
a1=(a1*p)%mod;
s1.insert(ans);
}
    }
return  s1.size();     
    
}

void solve(){
    string s;
    cin>> s;
    cout<<p_hash(s,p) <<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >>n;
    while(n--){
  solve();
}
return 0;
}