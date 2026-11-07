#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],b[1000005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1);
	if(m==1) cout<<a[n];
	for(int i=1;i<=a[n];i++)
		b[a[i]]++;
	sort(b+1,b+a[n]+1);
	int l=b.size();
	for(int i=1;i<=l;i++)
		if(i==l) cout<<i;
	return 0;
}