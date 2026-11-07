#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    long long a,m=0;
    cin>>a;
    string s="";
    for(long long i=0;i<a;i++){
        long long n;
        cin>>n;
        char c;
        cin>>c;
        for(long long j=0;j<n;j++)s+=c;
    }
    long long l=s.size()-1;
    for(long long i1=0,i2=l;i1<=l/2;i1++,i2--){
        if(s[i1]!=s[i2])m++;
    }
    cout<<m;
    return 0;
}
