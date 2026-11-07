#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n;
	long long m;
	long long a[3000];
	long long y=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>y){
			m=y;
		}
	}
	cout<<m;
	return 0;
}
