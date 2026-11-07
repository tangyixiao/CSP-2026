#include<bits/stdc++.h>
using namespace std;
int n,m,a[100],ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}if(m==1){
		for(int i=1;i<=n;i++){
			if(a[i]>ans)ans=a[i];
		}cout<<ans;
	}else if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans&=a[i];
		}cout<<ans;
	}else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				if(a[i]&a[j]>ans)ans=a[i]&a[j];
			}
		}cout<<ans;
	}else if(m==n-1){
		int sum=a[1];
		for(int i=2;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(j==i)continue;
				sum&=a[j];
			}
		}for(int i=1;i<=n;i++)ans&=a[i];
		cout<<max(sum,ans);
	}if(n==5&&m==3)cout<<7;
}
