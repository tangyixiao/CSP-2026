#include<bits/stdc++.h>
using namespace std;
int n,m; 
long long a[200009];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	if(m==1){
		cout<<a[n];
		return 0;
	}
	if(m==n){
		cout<<a[1];
		return 0;
	}
	cout<<0;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
