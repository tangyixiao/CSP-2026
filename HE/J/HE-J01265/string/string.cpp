#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        string c;
        cin>>a>>c;
        for(int i=0;i<a;i++){
            s+=c;
        }
    }
    int l=0,r=s.size()-1,ans=0;
    while(l<=r){
        if(s[l]!=s[r]){
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
