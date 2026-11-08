#include<bits/stdc++.h>
using namespace std;
int a[200003];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int k=n-2,sum1=a[n-1];
	m-=1;
	while(m--){
		sum1&=a[k--];
	}
	cout<<sum1;
	return 0;
}
