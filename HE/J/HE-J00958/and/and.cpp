#include <iostream>
#include <cstdio>
using namespace std;
long long u[200001];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>u[i];
	}
	cout<<u[n-1];
	fclose(stdin);
	fclose(stdout);
	return 0;
}

