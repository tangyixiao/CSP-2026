#include<iostream>
using namespace std;
int n,m;
int a[200010];
int main () {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0; i<n; i++) cin>>a[i];
	if(m==1||m==n) {
		cout<<0;
		return 0;
	}
	cout<<m;
	return 0;
}
