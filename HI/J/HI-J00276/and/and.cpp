#include<bits/stdc++.h>

using namespace std;

int n,m;
int shu[200005];

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>shu[i];
	}
	sort(shu,shu+n);
	cout<<shu[n-1];
	return 0;
} 
