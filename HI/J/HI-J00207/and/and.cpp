#include <bits/stdc++.h>
using namespace std;
int a[10000000]={};
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	cout<<a[n-1];
	fclose(stdin);
	fclose(stdout);
	return 0;
}
