#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    int n,m;
    cin>>n>>m;
    vector<int> cards(n);
    for(int i=0;i<n;i++) cin>>cards[i];
    unordered_map<int,int> ans;
    for(int i=0;i<n;i++){
        string num="";
        for(int j=i;j<n;j++){
            char cur=cards[j]+'0';
            int pos=num.find(cur);
            if(pos==-1) num+=cur;
            else num=num.substr(0,pos+1);
        }
        int len=num.size();
        for(int i=0;i<len;i++){
            ans[num[i]-'0']++;
        }
    }
    for(int i=1;i<=m;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
