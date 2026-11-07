#include <bits/stdc++.h>
using namespace std;
const int N=1e5*2+5;
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m,n,a[N]={},sum;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	if(m==1){
		cout<<1;
		return 0;
	}
	if(n==m){
		sum=a[1];
		for(int i=2;i<=n;i++){
			sum&=a[i];
		}
		cout<<sum;
		return 0;
	}
	sum=a[n];
	int j=n-1;
	for(int i=1;i<m;i++){
		
		sum&=a[j];
		j--;
	}
	cout<<sum;
	return 0;
}
