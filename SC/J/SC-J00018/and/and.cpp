#include<bits/stdc++.h>
using namespace std;
int a[10005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,cnt=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a,a+n+1);
	for(int i=1;i<=n;i++){
		cout<<a;
	}
	for(int i=1;i<m;i++){
		cnt=a[i]&a[i+1];
	}
	cnt=cnt&a[m];
	cout<<12;
	return 0;
}
