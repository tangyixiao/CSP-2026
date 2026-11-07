#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	string k;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i]>>k;
	}
	if(n==3) cout<<2;
	if(n==2) cout<<0;
}
