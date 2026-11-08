#include<bits/stdc++.h>
using namespace std;
namespace ccf{
	int n,a[200005];
	long long s[200005],m;
	struct word{
		long long l,r;
		char c;
	}w1[200005],w2[200005];
	struct q{
		long long x;
		int b;
		char c;
	}p[210005];
	int cnt;
	bool cmp(q q1,q q2){
		return q1.x<q2.x;
	}
	char c1,c2;
	long long ans;
	int main(){
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i]>>w1[i].c;
			s[i]=s[i-1]+a[i];
			w1[i].l=s[i-1]+1;
			w1[i].r=s[i];
		}
		m=s[n];
		for(int i=1;i<=n;i++){
			w2[n+1-i].l=m+1-w1[i].r;
			w2[n+1-i].r=m+1-w1[i].l;
			w2[n+1-i].c=w1[i].c;
		}
		for(int i=1;i<=n;i++){
			if(w1[i].l<=m/2)p[++cnt]={w1[i].l,1,w1[i].c};
			if(w2[i].l<=m/2)p[++cnt]={w2[i].l,2,w2[i].c};
		}
		p[++cnt].x=m/2+1;
		sort(p+1,p+cnt+1,cmp);
		for(int i=1;i<cnt;i++){
			if(p[i].b==1){
				c1=p[i].c;
			}
			if(p[i].b==2){
				c2=p[i].c;
			}
			if(c1!=c2)ans+=p[i+1].x-p[i].x;
		}
		cout<<ans;
		return 0;
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ccf::main();
	return 0;
}
