#include<bits/stdc++.h>
using namespace std;
struct Node{
	int a;
	char c;
};
Node a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long ans=0;
	for(int i=1;i<=n;i++) cin>>a[i].a>>a[i].c;
	int l=1,r=n;
	while(l<=r){
		if(l==r) break;
		int mini=min(a[l].a,a[r].a);
		if(a[l].c!=a[r].c) ans+=mini;
		a[l].a-=mini;
		a[r].a-=mini;
		if(a[l].a==0) l++;
		if(a[r].a==0) r--;
	}
	cout<<ans;
	return 0;
} 