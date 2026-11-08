#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w",stdout);
	longlong a[100005];
	string b[100005], c[100005];l
	int n, m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int t=0;
	for(int i=0;i<n;i++){
		while(a[i]==0){
			b[i][t]=a[i]%2;
			a[i]/2;
			t++;
		}
		for(int j=b[i].size()-1;j>=0){
			c[i]+=b[i][j];
		}
	}
	
	
	return 0;
},
