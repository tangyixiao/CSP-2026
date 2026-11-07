#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=2e5+10;
ll n,a[maxn],tot,ans,l=0,r,p,q;
char c[maxn];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
		tot+=a[i];
	}
	r=n-1;
	while(l<r){
		if(c[l]!=c[r]){
			ans+=min(a[l],a[r]);
		}
		if(a[l]>a[r]){
			a[l]-=a[r];
			r--;
			}
		else if(a[l]==a[r]){
			l++;
			r--;
		}
		else{
			a[r]-=a[l];
			l++;
		}
	}
	cout<<ans; 
	return 0;
}