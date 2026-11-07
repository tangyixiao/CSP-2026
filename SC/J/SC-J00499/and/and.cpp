#include<bits/stdc++.h>
using namespace std;
long long a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("ans.out","w",stdout);
	int n,m,mixx=-1000,sum,maxx=-11;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i==0){
			sum=a[0];
		}else{
			sum&=a[i];
		}
		if(a[i]>mixx){
			mixx=a[i];
		}
	}
	if(m==1){
		cout<<mixx;
		return 0;
	}
	if(m==n){
		cout<<sum;
		return 0;
	}
	if(m==2){
		for(int i=0;i<n;i++){
			int ff=a[i];
			for(int j=i+1;j<n;i++){
				int aaa=ff&a[j];
				if(aaa>maxx){
					maxx=ff;
				}
			}
		}
		cout<<maxx;
		return 0;
	}
	if(m==n-1){
		int gg=a[0];
		int dd=a[1];
		for(int i=1;i<=n-1;i++){
			gg&=a[i];
		}
		for(int i=2;i<=n-1;i++){
			dd&=a[i];
		}
		cout<<max(gg,dd);
	}
	return 0;
}