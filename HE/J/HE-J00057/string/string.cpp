#include<bits/stdc++.h>
using namespace std;
int n,a[200001],cnt=1;
char c[200001];
string s;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i]>>c[i];
        for(int j=cnt;j<=a[i]+cnt;j++){
            s[j]=c[i];
        }
        cnt=a[i]+cnt;
    }
    int r=0;
    for(int i=1;i<=cnt;i++){
        if(s[i]!=s[cnt+1-i]){
            r++;
        }
    }
    cout<<r/2;
    return 0;
}
