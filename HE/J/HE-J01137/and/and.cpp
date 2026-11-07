#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int n,m;
int h[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>h[i];
	}
	int res=0,res2=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			res=h[i] & h[j];
			res2=res;
			res=max(res,res2);
		}
	}
	cout<<res;
	return 0;
}
