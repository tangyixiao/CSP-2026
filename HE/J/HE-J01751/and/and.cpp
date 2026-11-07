#include<bits/stdc++.h>
using namespace std;
long long a[10000005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	

	long long n,m;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	
	
	if(m==1){
		long long ma=-1;
		for(int i=1;i<=n;i++){
			ma=max(ma,a[i]);
		}
		cout << ma;
		return 0;
	}

	
	if(m==2)
	{
	
	long long maxn=-1;
	for(int i=1;i<=n;i++){	
		for(int j=i+1;j<=n;j++){
				maxn=max(maxn,a[i]&a[j]);
		}
	}
	cout << maxn;
	}

	

return 0;
}
