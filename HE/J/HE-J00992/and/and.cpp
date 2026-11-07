#include<bits/stdc++.h>
using namespace std;
string s;
long long n,m,a[200005],ans=-1,cnt=0;
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
	}else if(m==n){
		cnt=a[0];
		for(int i=1;i<n;i++){
			cnt=cnt&a[i];
		}
		cout<<cnt;
	}else if(m==2){
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				ans=max(ans,a[i]&a[j]);
			}	
		}
		cout<<ans;
	}
	return 0;
}
