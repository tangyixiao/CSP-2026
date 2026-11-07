#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200009;
int n;
ll a[N];
char c[N];
ll ans;
ll ls;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i]>>c[i];
	for(int i=1;i<=n;i++)ls+=a[i];
	ll nl=a[1],nr=a[n];
	int l=1,r=n;
	while(l<r){
		if(c[l]==c[r]){
			if(nl>nr){
				nl-=nr;
				nr=0;
				r--;
				nr+=a[r];
			}else if(nl<nr){
				nr-=nl;
				nl=0;
				l++;
				nl+=a[l];
			}else{
				nl=0;
				nr=0;
				l++;
				r--;
				nr+=a[r];
				nl+=a[l];
			}
		}else{
			if(nl>nr){
				nl-=nr;
				ans+=nr;
				nr=0;
				r--;
				nr+=a[r];
			}else if(nl<nr){
				nr-=nl;
				ans+=nl;
				nl=0;
				l++;
				nl+=a[l];
			}else{
				ans+=nl;
				nl=0;
				nr=0;
				l++;
				r--;
				nr+=a[r];
				nl+=a[l];
			}
		}
	}
	cout<<ans;
	return 0;
} 
