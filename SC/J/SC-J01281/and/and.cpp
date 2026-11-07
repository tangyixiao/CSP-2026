#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005],ans=-1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(n==m){
		int s=a[1];
		for(int i=2;i<=n;i++) s=(s&a[i]);
		cout<<s;
		return 0;
	}
	else if(m==1){
		sort(a+1,a+n+1);
		cout<<a[n];
		return 0;
	}
	else if(m==2){
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max((a[i]&a[j]),ans);
			}
		}
		cout<<ans;
		return 0;
	}
	else if(m==n-1){
		for(int i=1;i<=n;i++){
			long long s;
			if(i==1) s=a[2];
			else s=a[1];
			for(int j=1;j<=n;j++){
				if(j==i) continue;
				s=s&a[j];
			}
			ans=max(s,ans);
		}
		cout<<ans;
		return 0;
	}
	else{
		sort(a+1,a+n+1);
		cout<<a[n];
	}
	return 0;
} 


 