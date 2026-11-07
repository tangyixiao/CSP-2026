#include <bits/stdc++.h>
using namespace std;
int n,a[10000000];
char b[10000000];
int main(){

	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);

	cin>>n;
	if(n==1) {
		cout<<0;
		return 0;
	}
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
	}
	if(n==2&&b[0]!=b[1]){
		cout<<min(a[0],a[1]);
	}
	else cout<<0;

	fclose(stdin);
	fclose(stdout);

}