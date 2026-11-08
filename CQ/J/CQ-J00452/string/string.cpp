#include<bits/stdc++.h>
using namespace std;
int a[20005];
char c[20005];
int main(){
//	freopen("string.in","r",stdin);
//	freopen("string.out","w",stdout);
	int n,sum=0;
	string x;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	for(int i=1;i<=sum;i++){
		x[i]=c[i];
	}
	cout<<x;
	cout<<2;
	return 0;
}
