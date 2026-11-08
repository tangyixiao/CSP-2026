#include<bits/stdc++.h>
using namespace std;
const int N=2*1e5;
int a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m,n;
	cin>>n>>m;
	
	int mx=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>mx)mx=a[i];
	}
	
	
	if(m==1)cout<<mx;
	else {
		sort(a,a+n);
		cout<<a[n-1-m];
	}
	return 0;
}

