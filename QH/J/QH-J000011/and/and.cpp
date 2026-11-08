#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","w",stdin);
	freopen("and.out","r",stdout);
	int n,m;
	cin>>n>>m;
	int x[n];
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	sort(x,x+n,greater<int>());
	cout<<x[m-1];
	fclose(stdin);
	fclose(stdout);
} 
