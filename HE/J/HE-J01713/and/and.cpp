#include<bits/stdc++.h>;
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a[200000],max;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int x=1;x<=n;x++){
		max=(a[x] & a[x+1]);
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
