#include<bits/stdc++.h>
using namespace std;
long long ans,cnt,maxx,two[30],a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	two[1]=1;
	for(int i=2;i<=29;i++){
		two[i]=two[i-1]*2;
		ans+=two[i];
	}ans++;
	long long t=ans;
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(n<=20){
		for(int i=1;i<(1<<n);i++){
			ans=t;cnt=0;
			for(int j=0;j<n;j++){
				
				if((i>>j)%2==1){
					ans=ans&a[j+1];
					cnt++;
				}
			}if(cnt==m){
				maxx=max(maxx,ans);
			}
		}cout<<maxx;
	}else if(m==1){
		sort(a+1,a+n+1);
		cout<<a[n];
	}else if(m==n){
		for(int i=1;i<=n;i++){
			ans&=a[i];
		}cout<<ans;
	}else 
	cout<<0;
} 
