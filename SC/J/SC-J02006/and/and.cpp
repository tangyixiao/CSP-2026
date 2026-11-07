#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
int n,m,a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;++i)	cin>>a[i];
	if(m==1){
		sort(a,a+n); cout<<a[n-1];
	}
	else if(m==2){
		int ans=-1;
		for(int i=0;i<n;++i){
			int an=a[0];
			for(int j=i-1;j<n;++j){	
				an=a[i]&a[j];
			} 
			ans=max(ans,an);
		}
			
		cout<<ans;
	}
	else if(m==n-1){
		int ans=-1;
		for(int i=1;i<n;++i){
			int an=a[0];
			for(int j=1;j<n;j++){
				if(j!=i) an=an&a[j];
			}
			ans=max(ans,an);
		}
		int an=a[1];
		for(int i=1;i<n;++i) an=an&a[i];
		ans=max(ans,an);
		cout<<ans;
	}
	else if(n==m){
		int ans=a[0];
		for(int i=1;i<n;++i) ans=ans&a[i];
		cout<<ans;
	}
	//else{
		
	//}
	return 0;
} 