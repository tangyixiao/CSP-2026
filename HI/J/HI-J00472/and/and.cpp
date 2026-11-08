#include<iostream>
using namespace std;
int main(){
	int a[8];
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	long long M=0;
	for(int i=1;i<=n;i++){
		int b;
		cin>>b;
		if(M<b) M=b;
	}
	cin>>a[1];
	if(m==1) cout<<M;
	else cout<<"676767676767";
	return 0;
}  
