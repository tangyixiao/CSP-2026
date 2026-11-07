#include<bits/stdc++.h>
using namespace std;
int n,m,maxx,ans;
bool flag;
int a[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]!=i){
			flag=1;
		}
		maxx=max(a[i],maxx);
	}
	sort(a,a+n);
	if(flag){
		cout<<a[n-m];
		return 0;
	}else{
		cout<<n-m;
		return 0;
	}
	if(m==1){
		cout<<maxx;
		return 0;
	}
	if(m==n){
		ans=a[0]&a[1];
		for(int i=2;i<n;i++){
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	if(m==2){
		maxx=0;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]==a[i+1]){
					break;
				}
				if(a[j]==a[j+1]){
					continue;
				}
				maxx=max(maxx,a[i]&a[j]);
			}
		}
		cout<<maxx;
		return 0;
	}
	return 0;
}