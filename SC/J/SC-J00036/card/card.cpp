#include<bits/stdc++.h>
using namespace std;
int n,m;
int flg[300005],a[200005],ans[300005];
stack<int> s;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		memset(flg,0,sizeof(flg));
		for(int j=i;j<=n;j++){
			flg[a[j]]++;
			if(flg[a[j]]==2){
				while(s.top()!=a[j]){
					flg[s.top()]--;
					s.pop();
				}
				flg[a[j]]=1;
			}
			else s.push(a[j]);
		}
		while(!s.empty()){
			ans[s.top()]++;
			s.pop();
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}