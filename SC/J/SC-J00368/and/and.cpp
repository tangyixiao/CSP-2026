#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,a[N],b[N],t,s;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=29;~i;i--){
		t=0;
		for(int j=1;j<=n;j++){
			if(a[j]&(1<<i)){
				b[++t]=a[j];
			}
		}
		if(t>=m){
			s|=1<<i;
			for(int j=1;j<=t;j++){
				a[j]=b[j]^(1<<i);
			}
			n=t;
		}
	}
	cout<<s;
	return 0;
}