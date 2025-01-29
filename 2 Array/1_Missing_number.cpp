// Proper code on array present in cpp repo
// For more practice you can go on  leetcode 
// My leetcode profile https://leetcode.com/u/abhinav6859/

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

void solve(){
     int result =0;
     int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
//      for(int i=0;i<n;i++){
//    result += v[i];
//     }
//    result=(n*(n+1))/2 -result ;
//    cout << result << endl;

int xor1 =0;
int xor2 =0;
 for(int i=0;i<n;i++){
   xor1 ^= v[i];
    }
   for(int i=1;i<=n;i++){
   xor2 ^= i;
    }
result=xor1^xor2;
   cout << result << endl;

    
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