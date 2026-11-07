#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

string str="";
long long n,x,ans=0;
char c;

int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for(long long i=0;i<n;i++){
        cin>>x>>c;
        for(long long j=0;j<x;j++){
            str+=c;
        }
    }

    long long len=str.length();
    for(long long i=0,j=len-1;i<=len/2,j>=len/2;i++,j--){
        if(str[i]!=str[j]){
            ans++;
        }
    }

    cout<<ans;

    return 0;
}