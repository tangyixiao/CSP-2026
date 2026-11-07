#include<iostream>
#include<algorithm>
using namespace std;
long long a[100000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);	
	int n,m;
	long long zd;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,greater<int>());
	zd=a[0];
	for(int i=1;i<m;i++){
		zd=zd & a[i];
	}
	cout<<zd<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}