# include<bits/stdc++.h>
using namespace std;
long long a[200010];
int n,m;
int main() {
	freopen("and.in","r".stdin);
	freopen("and.out","w".stdout);
	cin>>n>>m;
	int mx,num;
	for(int i=0; i<n; i++) {
		cin>>a[i];
		if(i==1) {
			num=a[i];
		}
		mx=max(mx,a[i]);
		num=num&&a[i];
	}
	if(m==n) {
		cout<<num;
	} else {
		mx=0;
	}
return 0;
}
