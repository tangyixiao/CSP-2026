#include<iostream>
using namespace std;
int a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,b;
	cin>>n>>b;
	for(int i = 1;i <= n;i++){
		cin>>a[i];
	}
	cout<<a[n-b+1];
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
