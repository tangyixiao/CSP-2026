#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,a[N],ans,maxx,c[5];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i],maxx=max(maxx,a[i]);
	if(m<=2){
		for(int i=1;i<=n-m+1;i++){
			int b=a[i];
			for(int j=i;j<m+i-1;j++)
				b=b&a[j];
			ans=max(ans,b&a[m+i]);
			for(int j=m+i+1;j<=n;j++)
				ans=max(ans,b&a[j]);
		}
	}
	else{
		while(m--){
			maxx/=2;
		}
		ans=maxx+1;
	}
	cout<<ans;
	return 0;
}

