#include <bits/stdc++.h>
using namespace std;
long long n,m,Max,max1=99999999999999,a[200010];
int main() {

	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<m;i++){
		Max=0;
		for(int j=0;j<n;j++){
			if(a[j]>Max and a[j]<max1)Max=a[j];
		}
		max1=Max;
	}
	cout<<Max;

	return 0;
}

