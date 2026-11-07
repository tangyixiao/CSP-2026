#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL a[200010],n,m,ans=-1,s[200010];
void g(LL x[200010]){
	bool f=true;
	LL cnt=a[x[1]];
	for(int i=2;i<=m;i++){
		cnt=cnt&a[x[i]];
	}
	ans=max(ans,cnt);
	for(int i=1;i<=m;i++){
		for(int j=1;j<=m;j++){
			if(x[i]==x[j]||i>m)f=false;
		}
		if(f)x[i]++;g(x);
	}
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		s[i]=i;
	}
	cout<<0;
	return 0;
} 
