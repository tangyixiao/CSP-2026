#include <bits/stdc++.h>
using namespace std;

int n,m,a[200000],c[25];
vector<int> b;
void s(int l,int sy,int an){
	if(sy==0){
		c[an]=1;
		return;
	}
	for(int i=l;i<n-1-m;i++){
		an=an&a[i];
		s(l+1,sy-1,an);
	}
	c[an]=1;
	return;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(m==1){
		sort(a,a+n);
		cout<<a[n-1];
		return 0;
	}if(m==n){
		int ans;
		for(int i=0;i<n;i++){
			ans=ans&a[i];
			cout<<ans;
			return 0;
		}
	}
	s(0,m,31);
	for(int i=20;i>=0;i--){
		if(c[i]!=0){
			cout<<i;
			return 0;
		}
	}
	return 0;
}