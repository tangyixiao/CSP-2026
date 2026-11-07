#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
ll a[200009];
ll s=0;
string c[200005];
string d[100000009];
string o[100000009];
ll b=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(ll i=1;i<=n;i++){
	cin>>a[i]>>c[i];
	s+=a[i];
	for(ll j=s-a[i]+1;j<=s;j++){
		d[j]=c[i];
	} 
}
for(ll i=1;i<=s;i++){
		o[i]=d[s-i+1];
		}
	for(ll i=1;i<=(s+1/2);i++){
		if(d[i]!=o[i]){
				b++;
			}else break;
		}
	cout<<b;
	return 0;
}
