#include<bits/stdc++.h>
using namespace std;
long long n,a[2345678],ans;
string c[2834743];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	if(n==1){
		cout<<"0";
		return 0; 
	}
	bool flag=true;
	for(long long i=1;i<=n-1;i++){
		if(c[i]!=c[i+1]){
			flag=false;
		}
	}
	if(flag){
		cout<<"0";
		return 0;
	}
	for(int i=1;i<=n/2;i++){
		for(int j=n;j>=n/2;j--){
			if(c[i]==c[j]){
				ans+=abs(a[i]-a[j]);
			}else{
				ans+=min(a[i],a[j]);
			}
		}
	}
	if(n%2==0) cout<<ans;
	else cout<<ans-1;
	return 0;
}
