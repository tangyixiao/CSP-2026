#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int n,m;
inline int read(){
	int s=0,f=1;
	char c=getchar();
	while(c<'0'||c>'9'){
		if(c=='-') f=-f;
		c=getchar();
	}
	while(c>='0'&&c<='9'){
		s=s*10+c-'0';
		c=getchar();
	}
	return s*f;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
//	freopen("card6.in","r",stdin);
	n=read();m=read();
	vector<int>a(n+1);
	vector<int>cnt(m+1,0);
	vector<int>bck(m+1,0);
	vector<int>fst(m+1,0);
	vector<ll>ans(m+1,0);
	for(int i=1;i<=n;i++){
		a[i]=read();
		cnt[a[i]]++;
		if(!fst[a[i]]) fst[a[i]]=i;
		bck[a[i]]=i;
	}
	for(int i=1;i<=m;i++){
		int d=fst[i],len=cnt[i];
		while(d<=n){
			int x=a[d];
			ans[x]+=len;
			d=bck[x]+1;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
/*
1 2 3 4 5 6 7 8 9 10
3 1 2 1 3 2 3 1 2 1
3 : 1~5 5~7
1 : 2~4 4~8 8~10
2 : 3~6 6~9

1 5 7
2 4 8 10
3 6 9

*/
