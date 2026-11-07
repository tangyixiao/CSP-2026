#include<iostream>
#include<cstdio>
#define int long long
using namespace std;
const int N=2e5+7;
struct node{
	char c;
	int len;
}a[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n; cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i].len>>a[i].c;
	int l=1,r=n,ans=0;
	while(l<r){
		if(a[l].c!=a[r].c) ans+=min(a[l].len,a[r].len);
		if(a[l].len>a[r].len){
			a[l].len-=a[r].len;
			a[r].len=0;
			r--;
		}
		else{
			a[r].len-=a[l].len;
			a[l].len=0;
			l++;
		}
	}
	cout<<ans;
	return 0; 
}
