#include<bits/stdc++.h> 
using namespace std;
int m,n,a=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int q[n];
	
	for(int i=1;i<=n;i++){
		cin>>q[i];
		if(q[i]>a) a=q[i];
	}
	cout<<a;
	return 0;
	fclose(stdin);
	fclose(stdout);
}
