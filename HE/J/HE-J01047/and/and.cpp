#include <bits/stdc++.h>
using namespace std;

int a[10005];
int change(int n,int m){
	int b;
	for(int i=0;i<n;i++){
		for(int j=1;j<n;j++){
			for(int k=0;k<m-1;k++)
			b=s[i] and s[i+j+k];
		}
	}
	return b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int b=n and m;
	cout<<b;
	return 0;
}
