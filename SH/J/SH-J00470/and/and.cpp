#include<bits/stdc++.h>
using namespace std;
int n,m;
long long l[200009];
long long ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>l[i];
	if(m==1){
		for(int i=0;i<n;i++)ans=max(ans,l[i]);
	}
	else if(m==2){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			ans=max(ans,l[i]&l[j]);
		}
	}}
	else if(m==n){
		ans=1;
		for(int i=0;i<n;i++){
			ans&=l[i];
		}
	}
	cout<<ans;
	return 0;
}
