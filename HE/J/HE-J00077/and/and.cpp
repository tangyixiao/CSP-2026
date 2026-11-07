#include <iostream>
#include <stdio.h>
using namespace std;
int main(){

	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,num,m,a[10005];
	cin>>n>>m;
	num=n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		num=num*3;
	}
	cout<<num;
	return 0;
//	fclose("and.in",stdin);
//	fclose("and.out",stdout);
}
