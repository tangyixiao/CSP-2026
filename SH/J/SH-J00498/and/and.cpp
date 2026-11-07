#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;
long long a[N];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long m,n;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(m==0){
		cout<<0;
		return 0;
	}
	long long ans=a[0]&a[1];
	if(m==n){
		for(int i=1;i<=n;i++){
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	return 0;
}
