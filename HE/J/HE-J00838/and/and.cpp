#include <bits/stdc++.h>
using namespace std;
long long a[200010],sum;
int main(){
	freopen("and.in","r",stdin);
	freopen("ans.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n,greater<int>());
	for(int i=1;i<m;i++){
		sum=a[i]&a[i+1];
	}
	cout<<sum;
	return 0;
}
