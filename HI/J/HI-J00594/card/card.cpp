#include <bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int n,m,a[N],e[N]={0},o[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int x=1;
	while(x<=n){
		for(int i=x;i<=n;i++){
			if(e[i]==1){
				e[i]=0;
				int s=i;
				s-=1;
				while(s>=x){
					e[s]=0;
					if(a[s]==a[i])break;
					s--;
				}
			}else e[i]=1;
		}
		for(int i=x;i<=n;i++){
			if(e[i]==1)o[a[i]]++;
		}
	}
	for(int i=1;i<=m;i++){
		if(o[i]!=0){
			cout<<o[i]<<" ";
		}
	}
	return 0;
}
