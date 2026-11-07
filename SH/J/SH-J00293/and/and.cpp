#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n,m;
ll a[200005];
ll maxn=-1;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
//	int a=15,b=12,c=0;
//	c=a;
//	c&=b;
//	cout<<c;
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	if(m==1){
		for(int i=1;i<=n;++i){
			if(a[i]>maxn){
				maxn=a[i];
			}
		}
	}else if(m==2){
		for(int i=1;i<=n;++i){
			for(int j=i;j<=n;++j){
			 	int b=a[i];
			 	b&=a[j];
			 	if(b>maxn){
			 		maxn=b;
				}
			}
		}
	}
	cout<<maxn;
 	return 0;
}
