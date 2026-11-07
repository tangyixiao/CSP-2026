#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+10;
int n,m;
int a[N];
int ans;
bool ans2;
bool cmp(bool x,bool y) {
	return x<y;
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) {
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	if(m==1) {
		cout<<a[n];
		return 0;
	}
	else if(m==2) {
		cout<<a[n-1]&&a[n];
		return 0;
	}
	else {
		cout<<a[n-m+1];
		return 0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
