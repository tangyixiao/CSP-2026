#include<bits/stdc++.h>
using namespace std;
int a[200000],n,m;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		sort(a+1,a+1+n);
		cout<<a[n];
	}
	else if(m==n){
		int ans;
		ans=a[1]&a[2];
		for(int i=3;i<=n;i++)
		ans=ans&a[i];
		cout<<ans;
	}
	else if(m=n-1){
		for(int i=1;i<=n;i++){
			int ans=0;
			int x=0;
			if(i==1)
			x=a[3]&a[2];
			if(i==2)
			x=a[1]&a[3];
			for(int j=1;j<=n;j++){
				if(j==1)
				continue;
				x=x&a[j]
			}
			if(x>ans)
			ans=x; 
		}
		cout<<ans;
	}
	else{
		for(int i=1;i<=n;i++){
			int ans=0;
			int x=0;
			for(int j=i+1;j<=n;j++){
				x=a[j]&a[i];
			}
			if(x>ans)
			ans=x;
		}
		cout<<ans;
	}
	return 0;
}
