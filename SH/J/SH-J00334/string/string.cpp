#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+10;
int n;
struct Node{
	int l,r;
	char c;
};
Node a[N],b[N];
bool cmp(Node a,Node b){
	return a.l<b.l;
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int cnt=0;
	for(int i=1;i<=n;i++){
		int t;
		cin>>t;
		char ct;
		cin>>ct;
		a[i].l=cnt+1;
		a[i].r=cnt+t;
		a[i].c=ct;
		cnt+=t;
	}
	for(int i=1;i<=n;i++){
		b[i].l=(cnt-a[i].r+1);
		b[i].r=(cnt-a[i].l+1);
		b[i].c=a[i].c;
	}
	sort(a+1,a+n+1,cmp);
	sort(b+1,b+n+1,cmp);
	int pa=1,pb=1,ans=0;
	while(pa<=n&&pb<=n){
		if(a[pa].c==b[pb].c){
			int tt=max((long long)0,min(a[pa].r-b[pb].l+1,b[pb].r-a[pa].l+1));
			ans+=tt;
		}
		if(a[pa].r>=b[pb].r) pb++;
		else pa++;
	}
	cout<<(cnt-ans)/2;
	return 0;
}
