#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,t;
	cin>>n>>t;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<a[t];
	return 0;
} 
