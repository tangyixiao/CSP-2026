#include<bits/stdc++.h>
using namespace std;
long long n,a[205000];
long long ans=0;
long long len;
char c[205000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	len=n;
	for(int i=1;i<=n;i++){
		if(a[i]==a[n]){
			if(c[i]!=c[n]){
				ans+=a[i];
			}
			n--;
			continue;
		}
		if(a[i]>a[n]){
			if(c[i]!=c[n]){
				n--;
				ans+=a[n+1];
				i--;
			}
			a[i+1]-=a[n+1];
		}
		else{
			if(c[i]!=c[n]){
				ans+=a[i];
			}
			a[n]-=a[i];
		}
	}
	cout<<ans;
	return 0;
}
