#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,maxx=-1,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==n){
		for(int i=2;i<=n;i++){
			maxx=a[i]&a[i-1];
		}
		cout<<maxx;
		return 0;
	}
	if(m==1){
		cout<<0;
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				int x=a[i] & a[j];
				maxx=max(maxx,x);
			}
		}
	}
	cout<<maxx;
	return 0;
}