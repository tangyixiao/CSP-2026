#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    char s[510],s1[510];
    int a[200010],n,cnt=0,ans;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>a[i];
        cin>>s[cnt];
        char b=s[cnt];
        for(int j=0;j<a[i];++j){
            cnt++;
            s[cnt]=b;
        }
    }
    int cnt1=cnt;
    while((cnt--)){
        s1[cnt-1]=s[cnt1-cnt];
    }
    for(int i=0;i<cnt1/2;++i){
        if(s1[i]!=s[i])
            ans++;
    }
    cout<<ans;
    return 0;
}
