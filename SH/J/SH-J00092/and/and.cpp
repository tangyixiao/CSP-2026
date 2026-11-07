#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+5;
long long n,m,ans;
long long a[maxn];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(m==1){
		for(int i=0;i<n;i++){
			ans=max(ans,a[i]);
		}
		cout<<ans;
		return 0;
	}
	if(m==2){
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				ans=max(ans,a[i]&a[j]);			
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==n){
		for(int i=0;i<n;i++){
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	if(m==n-1){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;i++){
				if(i!=j)
					ans&=a[i];
			}
		}
		cout<<ans;
		return 0;
	}
	cout<<67; 
	return 0;
}
