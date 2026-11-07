#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    long long n,s=0;
    cin>>n;
    string a;
    for(int i=0;i<n;i++){
        long long x;
        string y;
        cin>>x>>y;
        for(int j=0;j<x;j++){
            a=a+y;
        }
        s+=x;
    }
    int l=0,r=s-1;
    int m;
    if(s%2==0){
        m=s/2;
    }
    else{
        m=s/2+1;
    }
    int ans=0;
    for(int i=0;i<m;i++){
        if(a[l]!=a[r]){
            ans++;
        }
        l++;
        r--;
    }
    cout<<ans;
    fclose(stdin);
    fclose(stdout);
    return 0;
}
