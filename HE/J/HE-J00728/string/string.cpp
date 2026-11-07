#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);

    long long n,sum=0;
    cin>>n;
    long long a1[n+1];char a2[n+1],a3[n+1];
    for(long long i=0;i<n;i++){
        cin>>a1[i]>>a2[i];
    }
    for(long long i=0;i<n;i++){
        a3[i]=a2[n-i-1];
    }
    for(long long i=0;i<n;i++){
        if(a2[i]==a3[i]) break;
        a2[i]=a3[i];a3[n-i-1]=a2[i];
        sum=sum+a1[i];
    }
    cout<<sum;

    return 0;
}
