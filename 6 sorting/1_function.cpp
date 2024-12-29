#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main(){
     
    ios_base::sync_with_stdio(true);
    cin.tie(NULL);
    cout.tie(NULL);
   
int n=1;
cout << "how much testcase you have"<<endl;
cin>> n;
cout<<"give your pair "<< endl; 
while(n--){
    int a,b;
cin>>a>>b;
    int sum =a+b;
    cout<<"sum "<< sum<<"\n";
}
return 0;
}