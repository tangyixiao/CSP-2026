#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m,n;
	int a[200010],d[200010];
	cin>>n>>m;
	a[0]=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	int ans=-1;
	if(m==1){
		for(int i=1;i<=n;i++){
			ans=max(ans,a[i]);
		}
	}
	else if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans=ans&a[i];
		}
	}
	else{
		for(int i=1;i<=n;i++){
			d[i]=a[i]&a[i-1];
			ans=max(ans,d[i]);
		}
	}
	
	cout<<ans;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
