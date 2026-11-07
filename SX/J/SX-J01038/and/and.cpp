#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	int n,m,a[n+2]={},j,w=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[n];
	}
	for(int i=1;i<=n;i++){
		for(int k=i;k<=n;k++){
			j=a[i]&a[k];
			if(j>w) w=j;
		}
	}
	cout<<w;
	return 0;
}