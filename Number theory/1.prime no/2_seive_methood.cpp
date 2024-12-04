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

const int N=1000000;
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
    FOR(i,1,151){            //  (151 is just value ,u take ur own)
if(pr[i]) cout<<i<<endl;
    } 
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n=1;
    while(n--){
  solve();
}
return 0;
}
