#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[200050],ans;
bool check(){
	for(int i=1;i<=n/1000;i+=45){
		int x=a[i]+1;
		while(x!=1){
			if(x%2==0){
				x/=2;
			}
			else{
				return 0;
			}
		}
	}
	return 1;
}
void han(int cen,int shu,int shang){
	if(cen==m){
		for(int j=shang+1;j<=n;j++){
			ans=max(ans,(a[j]&shu));
			//cout<<a[j]<<endl;
		}
	}
	else{
		for(int j=shang+1;j<=n;j++){
			han(cen+1,(shu&a[j]),j);
			//cout<<a[j]<<" ";
		}
	}
	return;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		sort(a+1,a+1+n);
		cout<<a[n];
	}
	else if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans&=a[i];
		}
		cout<<ans;
	}
	else if(check()&&n>20){
		sort(a+1,a+1+n);
		cout<<a[1];
	}
	else if(m==2&&n<2000){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max((a[i]&a[j]),ans);
			}
		}
		cout<<ans;
	}
	else if(n<=20){
		for(int i=1;i<=n;i++){
			han(2,a[i],i);
			//cout<<a[i]<<" ";
		}
		cout<<ans;
	}
	else{
		cout<<0;
	}
	return 0;
}