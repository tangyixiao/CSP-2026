#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);

    string ans1="";
    string ans2="";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int a;
        char c;
        cin>>a>>c;
        for(int j=1;j<=a;j++) ans1+=c;
    }
    for(int i=ans1.size()-1;i>=0;i--){
        ans2+=ans1[i];
    }
    long long cnt=0;
    for(int i=0;i<ans1.size();i++){
        if(ans1[i] != ans2[i]) cnt++;
    }
    cout<<cnt/2;
    return 0;
}