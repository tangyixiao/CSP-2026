#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=5e5+5;
ll n,m,a[N],man[N],po[N],b[N],ans[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=n;j++){
			a[j]=b[j];
			man[b[j]]=0;
		}
		for(ll j=i;j<=n;j++){
			if(man[a[j]]==0){
				po[a[j]]=j;
			}
			if(a[j]!=0){
				man[a[j]]++;
			}
			if(man[a[j]]==2){
				for(ll k=po[a[j]];k<j;k++){
					man[a[k]]--;
					a[k]=0;			
				}
			}
		}
		for(ll j=i;j<=n;j++){
			ans[a[j]]++;
		}
	}
	for(ll i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}