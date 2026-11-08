#include <bits/stdc++.h>
using namespace std;
int const N=1e5*2+10;
int ans;
int a[N];
int con(int ans,int n){
	int temp = ans;
	ans = ans&a[2];
	for (int i=2;i<=n;i++)
	{
		if (temp&a[i]!=temp){
			if (temp&a[i]>ans)
		{
			ans = temp&a[i];
		}
	}
		
	}	
	return ans;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m,n;
	cin >> n>>m;
	if (m==1){
		while(n){
			cin>>a[n];
			ans = max(ans,a[n]);
			n--;
		}
		cout << ans;
		return 0;
	}
	if (m==n)
	{
		ans = 1024*1024-1;
		while(n){
			cin>>a[n];
			ans = ans&a[n];
			n--;
		}
		cout << ans;
		return 0;
	}
	
	for (int i=1;i<=n;i++)
		cin >> a[i];
	for (int i=1;i<=n;i++){
		for (int j=i+1;j<=n;j++)
		{
			if (a[i]&a[j]>ans)
				ans = a[i]&a[j];
		}
	}
	if (m!=2){
	
		while(m-2>0){
			ans = con(ans,n);
			m--;
		}
}
	cout << ans;			
}
