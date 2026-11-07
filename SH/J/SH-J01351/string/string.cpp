#include <bits/stdc++.h>
using namespace std;

const int mxn=2e5+5;
char s[mxn];
int a[mxn];

long long sum=0;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>a[i]>>s[i];
    }
    long long str=1,en=n;
    while(str<en){
        if(a[str]<a[en]){
            if(s[str]!=s[en]){

                sum+=a[str];
            }
            a[en]-=a[str];
            a[str]=0;
            str++;
        }
        if(a[str]>a[en]){
            if(s[en]!=s[str]){
                sum+=a[en];
            }
            a[str]-=a[en];
            a[en]=0;
            en--;
        }
        if(a[str]==a[en]){
            if(s[en]!=s[str]){
                sum+=a[en];
            }
            a[str]-=a[en];
            a[en]=0;
            en--;
            str++;
        }
    }
    cout<<sum;
    return 0;
}
