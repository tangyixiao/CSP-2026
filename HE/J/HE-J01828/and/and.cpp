#include<iostream>
#include<cmath>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n];
	int da=0;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			da=max(da,a[i]&a[j]);
		}
	}
	cout<<da;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
