#include<bits/stdc++.h>
using namespace std;
int n,m,a[500001];
int s[500001],r[500001],st[500001];
int ans[500001],t[500001];
int bj[500001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(!st[a[i]])st[a[i]]=i;
		else r[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		ans[i]=ans[i-1]+1;
	}
	int l=0;
	for(int i=1;i<=n;i++){
		if(i==r[a[i]]){
			for(int j=r[a[i]]+1;j<=n;j++){
				if(r[a[j]]&&j!=r[a[j]]){s[j]+=bj[i];j=r[a[j]];s[j]-=bj[i];bj[j]+=bj[i];break;}
			}
		}
		if(r[a[i]]&&i!=r[a[i]]){
			s[i]+=i-l;
			s[r[a[i]]]-=i-l;
			bj[r[a[i]]]+=i-l;
			l=i;
		}
	}
	for(int i=1;i<=n;i++){
		s[i]=s[i-1]+s[i];
		ans[i]=ans[i]-s[i];
	}
	for(int i=1;i<=n;i++){
		t[a[i]]+=ans[i];
	}
	for(int i=1;i<=m;i++){
		cout<<t[i]<<' ';
	}
	return 0;
}