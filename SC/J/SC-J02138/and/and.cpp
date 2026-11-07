#include<bits/stdc++.h>
#define int long long
using namespace std;
struct node{
	int a;
	string s;
}a[200005];
void f(int a,string &s){
	while(a){
		s=char((a&1)+'0')+s;
		a>>=1;
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	int n,k,maxx=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i].a;
		f(a[i].a,a[i].s);
		maxx=max(maxx,(int)(a[i].s.size()));
	}for(int i=1;i<=n;i++){
		while((int)(a[i].s.size())!=maxx)a[i].s="0"+a[i].s;
	}sort(a+1,a+n+1,[](node a,node b){return a.s>b.s;});
	int ans=0;
	for(int i=1;i+k-1<=n;i++){
		int sum=a[i].a;
		for(int j=i+1;j<=i+k-1;j++)sum&=a[j].a;
		if(sum>=ans)ans=sum;
		else break;
	}cout<<ans;
	return 0;
}