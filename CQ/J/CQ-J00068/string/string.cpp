#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n;
    int ans=0;
    string s1;
    string s2;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        string b;
        cin>>a>>b;
        for(int j=0;j<a;j++){
            s2[j]=b[j];
        }
    }
    int len=s2.size();
    int cnt=0;
    for(int i=len;i>0;i--){
        if(s2[i]!=s1[cnt]){
            ans++;
        }
        cnt++;
    }
    cout<<ans;
    return 0;
}
