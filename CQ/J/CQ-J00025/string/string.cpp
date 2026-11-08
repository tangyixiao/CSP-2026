#include<iostream>
#include<cstdio>
using namespace std;
string s;
int ans;
int a[200001];
char c[200001];
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i]>>c[i];
        for(int j=1;j<=a[i];j++) s+=c[i];
    }
    int len=s.size();
    for(int i=0;i<=len-1;i++){
        if(s[i]!=s[len-i-1]) {
            ans++;
            s[len-i-1]=s[i];
        }
    }
    cout<<ans;
    return 0;
}
