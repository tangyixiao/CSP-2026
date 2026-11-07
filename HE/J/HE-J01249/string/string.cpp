#include<bits/stdc++.h>
using namespace std;
char s[20000001];
int main(){
    long  n,k=0,sum=0,m=0;
    cin>>n;
    for(long  i=1;i<=n;i++){
    long  a;
    char c;
    cin>>a>>c;
    sum+=a;
    for(long j=1;j<=a;j++){
        s[k]=c;
        k++;
    }
    }
    for(long i=0;i<=sum/2+1;i++){
        if(sum%2!=0&&i==sum/2+1){
            break;
        }
        if(s[i]!=s[sum-i-1])
        m++;
    }
    cout<<m;
    return 0;
}

