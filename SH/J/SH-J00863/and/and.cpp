#include<bits/stdc++.h>
using namespace std;
int n,m,flag;
long long a[200005],b[200005],c[200005],ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	flag=1;
	ff=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>=4) ff=0;
	}
	for(int i=1;i<=n;i++){
		b[i]=a[i]+1;
		while(b[i]){
			if(b[i]/2*2!=b[i]){
				flag=0;
				break;
			} 
			else b[i]/=2; 
		}
	}
	if(flag==1){
		sort(a+1,a+n+1);
		ans=a[n-m+1];
	}
	else if(ff==1){
		for(int i=1;i<=n;i++){
			c[a[i]]++;
		}
		if(c[2]&&c[3]) ans=2;
		else if(c[1]&&c[3]) ans=1;
		else ans=0;
	}
	else if(m==1) 
	for(int i=1;i<=n;i++){
		ans=max(ans,a[i]);
	}
	else if(m==n){
		ans=a[1]&a[2];
	for(int i=3;i<=n;i++){
		ans&=a[i];
	}
}
	else if(m==2)
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			ans=max(ans,a[i]&a[j]);
		}
	}
	cout<<ans;
}
