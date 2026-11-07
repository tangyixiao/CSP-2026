#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m,n;
	cin>>m>>n;
	int a[n];
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	sort(a,a+m);
	int p=(m+1)/2;
	cout<<a[p-1];
	return 0;
}
