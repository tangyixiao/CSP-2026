#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N=2e5+100;
ll n,a[N],sum=0,ga=0,gb=0,ans=0;
char c[N];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	std::cin.tie(nullptr)->std::ios::sync_with_stdio(false);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum=sum+a[i];
	}
	ga=1;
	gb=n;
	while(ga<=gb){
		if(c[ga]==c[gb]){
			if(a[ga]>a[gb]){
				a[ga]=a[ga]-a[gb];
				gb--;
			}
			else if(a[ga]<a[gb]){
				a[gb]=a[gb]-a[ga];
				ga++;
			}
			else if(a[ga]==a[gb]){
				ga++;
				gb--;
			}
		}
		else{
			if(a[ga]>a[gb]){
				ans=ans+a[gb];
				a[ga]=a[ga]-a[gb];
				gb--;
			}
			else if(a[ga]<a[gb]){
				ans=ans+a[ga];
				a[gb]=a[gb]-a[ga];
				ga++;
			}
			else if(a[ga]==a[gb]){
				ans=ans+a[ga];
				ga++;
				gb--;
			}
		}
	}
	cout<<ans;
	return 0;
}
