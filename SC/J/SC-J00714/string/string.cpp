#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,cnt=0,ans=0,temp=0;
	cin>>n;
	int a[n];
	char c[n];
	 for(int i=1;i<=n;i++){
	 	cin>>a[i]>>c[i];
	 }
	 for(int i=1;i<=n;i++){
	 	if(c[i]==c[i+1]){
	 		cout<<0;
	 		return 0;
		 }
	}
	for(int i=1;i<=n;i++){
		if(a[i]%2==0)
		cnt++;
	}
	if(cnt==n){
		cout<<0;
		return 0;
	}
	for(int i=1;i<=n;i++){
		ans=a[i]+ans;
	}
	cout<<ans/n+1;
	return 0;
}