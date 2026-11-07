#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+10;
struct A{
	int x;
	char c;
}a[N];
int n;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].x>>a[i].c;
	}
	int l=1,r=n;
	int ans=0;
	while(l<=r){
		int mi=min(a[l].x,a[r].x);
		if(a[l].c!=a[r].c)
			ans+=mi;
		if(mi==a[l].x){
			l++;
			a[r].x-=mi;
			if(a[r].x==0)
				r--;
//			a[r].x+=a[r+1].x;
//			if(l==r && (a[r+1].c!=a[r].c))
//				ans+=a[r+1].x;
		}
		else{
			r--;
			a[l].x-=mi;
			if(a[l].x==0)
				l++;
//			a[l].x+=a[l-1].x;
//			if(l==r && (a[l-1].c!=a[l].c))
//				ans+=a[l-1].x;
		}
	}
	cout<< ans;
}
