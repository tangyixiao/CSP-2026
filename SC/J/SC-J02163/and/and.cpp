#include<bits/stdc++.h>
using namespace std;
int n,m;
int p[200005],num=-1;
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	sort(p,200005);
	for(int i=0;i<n;i++){
		cout<<p[i];
	}
	return 0;
}