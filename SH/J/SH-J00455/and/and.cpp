#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
long long a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1);
	long long sum=a[n];
	m-=1;
	for(int i=n-1;i>=1;i--){
		m--;
		if(m>=0)sum=sum&a[i];
	}
	cout<<sum;
	return 0;
}
