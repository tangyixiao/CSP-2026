#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int n,m,a[N];
int lst_[N],nxt[N],lst[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)	cin>>a[i];
	
	vector<int> ans(m,0);
	for(int l=1;l<=n;l++){
		vector<bool> vst(n,0);
		for(int i=l;i<=n;i++)
			lst[i]=lst_[a[i]],nxt[lst_[a[i]]]=i,lst_[a[i]]=i;
		for(int i=1;i<=m;i++)	lst_[i]=0;
		for(int i=l;i<=n;i++){
			if(!vst[lst[i]]){
				for(int j=lst[i];j<i;j++){
					lst[nxt[j]]=lst[j],nxt[lst[j]]=nxt[j];
					vst[j]=true;
				}
			}
		}
		vector<bool> cnt(m,0);
		for(int i=l;i<=n;i++)
			if(!vst[i])	cnt[a[i]]=true;
		for(int i=1;i<=m;i++)
			if(cnt[i])	ans[i]++;
	}
	for(int i=1;i<=m;i++)	cout<<ans[i]<<' ';
	return 0;
}