#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,a,ans;
char c[100];
int main(){
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>a>>c[i];
	}
	if(n<=1&&a<=5){
		for(ll i=1;i<=a;i++){
			if(c[i]!=c[a]){
				c[i]=c[a];
				ans++;
				a--;
			}
		}cout<<ans;
	}
    if(a<=1){
		for(ll i=1;i<=n*a;i++){
			c[i]=a*c[i];
			if(c[i]!=c[a*n]){
				c[i]=c[a*n];
				ans++;
				a--;
			}
		}cout<<ans;
	}
	return 0;
}
