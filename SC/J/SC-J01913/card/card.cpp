#include<bits/stdc++.h>
using namespace std;
const int N=3e5+10;
int n,m;
int a[N],pos[N];
int cnt[N],p[N],sum[N];
stack<int> sta;
bool in_sta[N],flag;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]) flag=1;
	}
	if(n==m){
		for(int i=1;i<=n;i++) cout<<i<<" ";
		return 0;
	}
	else if(!flag){
		for(int i=1;i<=n;i++) p[a[i]]=i;
		for(int i=1;i<=m;i++) cout<<p[i]<<" ";
		return 0;
	}
	else if(n<=500){
		for(int i=1;i<=n;i++){
			memset(p,0,sizeof p);
			memset(sum,0,sizeof sum);
			for(int j=i;j<=n;j++){
				sum[j]=a[j];
				if(!p[a[j]]){
					p[a[j]]=j;
				}
				else{
					for(int k=p[a[j]];k<=j-1;k++) p[sum[k]]=0,sum[k]=0;
					p[a[j]]=j;
				}
			}
			for(int j=i;j<=n;j++) cnt[sum[j]]++;
		}
		for(int i=1;i<=m;i++) cout<<cnt[i]<<" ";
		return 0;
	}
	else{
		for(int i=n;i>=1;i--){
			if(!in_sta[a[i]]){
				sta.push(a[i]);
				in_sta[a[i]]=1;
			}
			else{
				while(!sta.empty()&&sta.top()!=a[i]){
					in_sta[sta.top()]=0;
					sta.pop();
				}
			}
			for(int i=1;i<=m;i++) if(in_sta[i]) cnt[i]++;
			cout<<"\n";
		}
		for(int i=1;i<=m;i++) cout<<cnt[i]<<" ";
	}
	
	return 0;
}