#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>
using namespace std;
int n,m;
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int a[200005];
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    int sum=0,sum1=0;
    for(int i=1;i<=n;i++){
        if(a[i]==a[i-1]){
            cout<<a[i];
            return 0;
        }
        if(m==n){    
            sum+=a[i]&a[i+1];
            if(i==n)break;
        }
        
    }
    if(m==n)cout<<sum;return 0;
    if(m==n-1){
        for(int i=2;i<=n;i++){
            sum1+=a[i]&a[i+1];
            if(i==n)break;
        }
    }
    if(m==n-1)cout<<sum1;return 0;
    if(m==1)cout<<a[n];return 0;
    int ans=a[n]&a[n-1];
    if(m==2)cout << ans;return 0;
    int sum3=0;
    if(n<=20&&m<=n){
        for(int i=n-m;i>=n;i++){
            if(i==n)break;
            sum3+=a[i]&a[i+1];
        }
    }
    cout<<a[0];
    return 0;
}