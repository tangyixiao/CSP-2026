#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn=200000+10;
int n;
ll ans=0;
struct node{
	int tp,cnt;
}a[maxn],b[maxn];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int x;
	char ch;
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%d",&x); cin>>ch;
		a[i]={ch-'a',x};
		b[n-i+1]={ch-'a',x};
	}
	int l=1,r=1,last1=0,last2=0;
	while(l<=n && r<=n){
		int t1=a[l].cnt-last1;
		int t2=b[r].cnt-last2;
		int mn=min(t1,t2);
		if(a[l].tp!=b[r].tp) ans+=mn;
		last1+=mn; last2+=mn;
		if(a[l].cnt==last1) l++,last1=0;
		if(b[r].cnt==last2) r++,last2=0;
	}
	printf("%lld\n",ans/2);
	return 0;
}