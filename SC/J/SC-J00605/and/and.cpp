#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200010];
int main(){
	freopen("and3.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int nd=0xffff;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<m;i++){
		int sm=0,ns;
		for(int j=0;j<n;j++)if(a[i]&nd>sm&&a[i]!=-1)ns=i;
		nd&=a[ns];
	}
	cout<<nd;
	return 0;
}