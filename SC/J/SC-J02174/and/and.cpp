#include<bits/stdc++.h>
using namespace std;
int a[200100];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		if(a[i]==a[i-1]){
			ans=a[i];
		}
		if(ans!=0){
		cout<<ans;
		}
		else{
			sort(a+1,a+1+n);
			cout<<a[1];
		}
		}
	return 0;
}
