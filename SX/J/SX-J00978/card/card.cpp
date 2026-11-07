#include<bits/stdc++.h>
using namespace std;
int n,m,pai[500005],top,st[500005],tong[500005];
map<int,int> mp;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>pai[i];
    for(int i=1;i<=n;i++){
        top=0;
        mp.clear();
        memset(st,0,sizeof st);
        for(int j=i;j<=n;j++){
        	if(mp.find(pai[j])!=mp.end()){
        		top=mp[pai[j]];
        		mp[pai[j]]=top;
			}
        	else{
                top++;
        	    st[top]=pai[j];
        	    mp[pai[j]]=top;
			}
		}
		for(int j=1;j<=top;j++){
			tong[st[j]]++;
		}
	}
	for(int i=1;i<=m;i++) cout<<tong[i]<<" ";
	return 0;
}