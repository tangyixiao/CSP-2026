#include<bits/stdc++.h>
using namespace std;
long long a[500005],b[500005],n,m,ans=1;
int main(){
	freopen("crystal.in", "r", stdin);
	freopen("crystal.out", "w", stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n==1){
		cout<<1;
		return 0;
	}
	sort(a+1,a+n+1);
	for(int i=n-1;i>=1;i--){
		b[i]=a[i+1]-a[i];
	}
	for(long long i=1;i<=n;i++){
		long long ans1=1;
		for(long long j=i;j<n;j++){
			if(m-j*b[j]>=0){
				ans1++;
				m-=j*b[j];
			}
			else break;
		}
		ans=max(ans,ans1);
		if(ans==n){
			break;
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout); 
	return 0;
}
