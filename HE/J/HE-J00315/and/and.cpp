#include<bits/stdc++.h>
using namespace std;
long long n,m,a[2000010],l=1;
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	for(int i=n;i>=1;i--){
		if(l==m){
			cout<<a[i];
			break;
		}
		l++;
	}
	return 0;
}
