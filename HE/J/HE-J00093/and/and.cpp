#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m,a[N],ans=0;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(m==1){
		for(int i=1;i<=n;i++) ans=max(ans,a[i]);
	}else if(m==2){
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				ans=max(ans,a[i]&a[j]);
	}else if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++) ans=ans&a[i];
	}else if(m==n-1){
		ans=a[2];
		for(int i=3;i<=n;i++) ans=ans&a[i];
		int x=a[1];
		for(int i=2;i<=n;i++){	
			for(int j=2;j<=n;j++){
				if(j==i) continue;
				x&=a[j];
			}
		}
		ans=max(ans,x);
	}else{
		sort(a+1,a+n+1,cmp);
		ans=a[1];
		for(int i=2;i<=m;i++) ans=ans&a[i]; 
	}
	cout<<ans;
	return 0;
} 
