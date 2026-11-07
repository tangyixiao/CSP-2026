#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=500005;
ll n,m,a[N],desk[N],stay[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		ll edge=0;
		for(int j=i;j<=n;j++){
			for(int k=1;k<=edge;k++){
				if(desk[k]==a[j]){
					edge=k-1;
					break;
				}
			}
			desk[++edge]=a[j];
		}
		for(int j=1;j<=edge;j++){
			stay[desk[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<stay[i]<<" ";
	}
	return 0;
}
