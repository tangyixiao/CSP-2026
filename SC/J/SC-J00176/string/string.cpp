#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+5;
unsigned ll n,a[N],ans;
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for(ll i=1,j=n;i<j;){
		if(c[i]!=c[j]){
			ans+=min(a[i],a[j]);
			if(a[i]>a[j]){
				a[i]-=a[j];
				j--;
			}else if(a[i]==a[j]){
				i++;
				j--;
			}else{
				a[j]-=a[i];
				i++;
			}
		}else{
			if(a[i]>a[j]){
				a[i]-=a[j];
				j--;
			}else if(a[i]==a[j]){
				i++;
				j--;
			}else{
				a[j]-=a[i];
				i++;
			}
		}
	}
	cout<<ans;
}