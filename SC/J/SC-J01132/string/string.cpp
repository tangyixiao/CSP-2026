#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=200010;
int n,ans=0,sum[N];
struct node{
	int x;
	char c;
}a[N];
signed main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n;
	int h=1,t=0,idh=1,idt=n;
	for(int i=1;i<=n;i++) {
		cin>>a[i].x>>a[i].c;
		t+=a[i].x;
		sum[i]=sum[i-1]+a[i].x;
	}
	int sz;
	while(h<=t) {
		sz=min(sum[idh]-h+1,t-sum[idt-1]);
//		cout<<sum[idh]-h+1<<" "<<t-sum[idt-1]<<"\n";
		if(a[idh].c!=a[idt].c) {
//			cout<<"change:"<<idh<<" "<<idt<<"\n";
			ans+=sz;
		}
		if(sum[idh]-h+1==t-sum[idt-1]) {
			h=sum[idh]+1;
			idh++;
			t=sum[idt-1];
			idt--;
//			cout<<"one";
		}
		else if(sz==sum[idh]-h+1) {
			h=sum[idh]+1;
			idh++;
			t-=sz;
//			cout<<"two";
		}
		else {
			t=sum[idt-1];
			idt--;
			h+=sz;
//			cout<<"three";
		}
//		cout<<h<<"->"<<idh<<" "<<t<<"->"<<idt<<"\n";
	}
	cout<<ans<<"\n";
	return 0;
}
/*
5
2 v
2 c
2 e
2 c
3 v

*/