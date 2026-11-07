#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],x=0,y=1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		for(int q=i+1;q<n-1;q++){
			if(a[i] and a[q]>a[x] and a[y]){
				x=i;
				y=q;
			}
		}
	}
	if(a[x]>a[y]) cout<<a[y] and a[x];
	else cout<<a[x] and a[y];
}