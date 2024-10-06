// find all prime number less than or equal to N .
// constraints :- 1<=N<=10^6


// if we directly apply brute force then TLE (time limit exeed)

    
    #include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FOR(i,a,b) for(int i=(a); i<(b); i++)
#define FORk(i,a,b,k) for(int i=(a); i<(b); i+=k)
#define RFOR(i,a,b) for(int i=(a); i>=(b); i--)
#define RFORk(i,a,b,k) for(int i=(a); i>=(b); i-=k)

const int N=100000000;
bool pr[N+1];

void sieve (){
    //T.C  0(n loglogn)
    FOR(i,2,N+1) pr[i]=true;
    for(int i=2;i*i<=N;i++)
        if(pr[i])
            FORk(j,i*i,N+1,i)    //(for(int j=i*i;j<=N;j+=i))
              pr[j]=false;
}
void solve(){
    sieve();
    
    vector<int>v;
    FOR(i,1,100000000){
if(pr[i]){ 
   // cout<<i<<endl;
  v.push_back(i);
    } 
}
int a;
cout<<"k th prime n0. :\n";
cin>>a;
cout<<v[a-1]<<endl;
}
int main(){
    ios_base::sync_with_stdio(true);
    cin.tie(NULL);
    cout.tie(NULL);


    int n;
    cout<<"how much input you have :"<<endl;
    cin>>n;
    while(n--){
  solve();
}
return 0;
}
