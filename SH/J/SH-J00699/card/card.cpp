#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,a[500010];
ll tag[300010];
bool flag;
ll zh[500010];
ll cnt1[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		tag[a[i]]=i;
		if(a[i]<a[i-1]) flag=1; 
	}
	if(m==1){
		cout<<n<<endl;
	}
	if(m==2){
		ll cnto=0,cntt=0;
		for(ll i=1;i<=n;i++){
			bool is_on=0,is_tw=0;
			for(ll j=i;j<n;j++){
				if(a[i]==1){
					is_on=1;
					if(!(a[j]==1&&a[j+1]==2)&&!(a[j]==2&&a[j+1]==2)) is_tw=0;
					else is_tw=1;
				}
				else{
					is_tw=1;
					if(!(a[j]==2&&a[j+1]==1)&&!(a[j]==1&&a[j+1]==1)) is_on=0;
					else is_on=1;
				}
			}
			if(is_on) cnto++;
			if(is_tw) cntt++;
		}
	}
	if(!flag){
		for(ll i=1;i<=m;i++){
			cout<<tag[i]<<" ";
		}
	}
	else{
		for(ll i=1;i<=n;i++){
			ll cnt=0;
			for(int j=i;j<=n;j++){
				for(int k=1;k<=cnt;k++){
					if(zh[k]==a[j]){
						cnt=k-1;
					}
				}
				zh[++cnt]=a[j];
			}
			for(int j=1;j<=cnt;j++){
				cnt1[zh[j]]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt1[i]<<" ";
	}
	return 0;
} 
