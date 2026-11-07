#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m;
long long a[N];
long long mx=-1e9,mxx;
int xy,y;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int k=1;k<m;k++){
		sort(a+1,a+1+n);
		mx=-1e9;
		if(k!=1){
			n--;
		}
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				int x=a[i]&a[j];
				if(mx<x){
					mx=x;
					xy=i;
					y=j;
				}
			}
		}
//		cout<<a[xy]<<" "<<a[y]<<"\n";
		mxx=mx;
		a[xy]=mx;
		a[y]=1e9;
	}
	cout<<mxx;
	return 0;
}