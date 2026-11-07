#include<bits/stdc++.h>
using namespace std;

int n,m;
long long a[200005];
int bc[200005];
int cnt[35];
bool A=true;
int ans=(1<<30)-1;

bool isA(long long x){
	while(x>0){
		if(x%2==0)return false;
		x/=2;
	}
	return true;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	long long maxa=-1;long long sum=(1<<30)-1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxa=max(maxa,a[i]);
		A=A&&isA(a[i]);
		sum=sum&a[i];
	}
	if(m==1){
		cout<<maxa;
		return 0;
	}
	if(m==n){
		cout<<sum;
		return 0;
	}
	if(A){
		sort(a+1,a+n+1);
		for(int i=n;i>n-m;i--){
			ans=ans&a[i];
		}
		cout<<ans;
		return 0;
	}
	cout<<n-m;
	return 0;
}
