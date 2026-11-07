#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10,M=3e5+10;
int n,m,a[N],ans[M],last[M],l[N];
bool vis[M];
set<int>s,ss;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	bool ok=1;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		if(a[i]<a[i-1])
			ok=0;
		l[i]=last[a[i]];
		last[a[i]]=i;
	}
	if(ok){
		int now=a[1];
		for(int i=1;i<=n;i++){
			if(a[i]!=now){
				ans[a[i-1]]=i-1;
				now=a[i];
			}	
		}
		ans[a[n]]=n;
		printf("%d",ans[1]);
		for(int i=2;i<=m;i++)
			printf(" %d",ans[i]);
		return 0;
	}
	s.clear();
	for(int i=n;i>=1;i--){
		if(vis[a[i]])
			continue;
		vis[a[i]]=1;
		int flag=1;
		ss=s;
		for(int j=i;j>=1;j--){
			if(ss.count(a[j]))
				flag=0;
			if(a[j]==a[i])
				flag=1;
			ans[a[i]]+=flag;
			if(!flag)
				ss.insert(a[j]);
		}
		s.insert(a[i]);
	}
	printf("%d",ans[1]);
	for(int i=2;i<=m;i++)
		printf(" %d",ans[i]);
	return 0;
}