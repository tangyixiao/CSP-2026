#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,a[100000005],c;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		for(ll i=1;i<=n;i++){
			if(a[i]>c){
				c=a[i];
			}
		}
	}	
	cout<<c;
	return 0;
}//Trick||Treat!
