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
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
     for(int i=0;i<n;i++){
        cout<< v[i] <<" ";
    }
    cout <<endl;
    sort(v.begin(),v.end());
    if(v[0]!=v[1])
    cout<<v[0]<<endl;
    else if(v[n-1]!=v[n-2])
    cout<<v[n-1]<<endl;
    else{
for(int i=1;i<n-1;){
if(v[i]==v[i-1]||v[i]==v[i+1])
i++;
else{
    cout<<v[i]<<endl;
    break;
}
}
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    n=1;
    while(n--){
  solve();
}
return 0;
}


// leetcode solution single II
// class Solution {
// public:
//     int singleNumber(vector<int>& v) {
//         int result=0;
//       for(int i=0;i<32;i++){
// int bitcount =0;
// for( int x:v)
//  bitcount += (x>>i) & 1;
//  bitcount=bitcount%3;
//   result |= bitcount << i;

//     }
//       return result;
//     }
// };