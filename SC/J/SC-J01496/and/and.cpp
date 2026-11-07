#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	long long a[200001];
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n-1-i;j++){
			if(a[i] < a[i+j])swap(a[i],a[i+j]);
		}
	}
	int result=a[0];
	if(m == 1)cout<<result;
	else{
		for(int i=0;i<m;i++)result=(result & a[i]);
		cout<<result;
	}
	return 0;
}