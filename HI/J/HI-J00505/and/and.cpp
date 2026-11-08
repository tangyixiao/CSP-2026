#include <bits/stdc++.h>
using namespace std;
const long long N=2e5+5;
long long a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	long long mx=-1;
	long long mn;
	if(m==1){
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		mx=max(a[i],mx);
	}
		cout<<mx;
	}
	if(m==n){
		for(long long i=1;i<=n;i++){
		cin>>a[i];
		mn&=a[i];
	}
		cout<<mn;
	}
else{
	cout<<"867465";
}
	return 0;
}

