#include<bits/stdc++.h>
using namespace std;
int a[200001];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n, m;
	cin>>n>>m;
	int maxn=-1;
	for(int i=0;i<n;i++){
		cin>>a[i];
		maxn=max(a[i],maxn);
	}
	if(m==n){
		for(int i=0;i<n-1;i++){
			a[i+1]=a[i]&a[i+1];
		}
		cout<<a[n-1];
		return 0;
	}
	cout<<maxn;
	return 0;
}