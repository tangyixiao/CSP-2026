#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long n,m,a[N],ans;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1,greater<long long>());
	

	int now=1;
	while((a[now]&(a[now]-1))==0){
		now++;
	}
	ans=a[now];
	for(long long i=2;i<=m;i++){now++;
			ans&=a[now];
			
			
	}
	cout<<ans;
	return 0;
	
	
	
	
	
}
