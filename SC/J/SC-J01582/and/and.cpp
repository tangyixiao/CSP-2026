#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	unsigned int n=2e5,m=2e5;
	cin>>n>>m;
	unsigned long long a[n];
	for(unsigned int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	cout<<a[n-m];
}