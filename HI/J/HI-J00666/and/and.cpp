#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a=0;
	for(int i=1;i<=n;i++){
		int b;
		cin>>b;
		if(b>a)a=b;
	}
	cout<<a;
	return 0;
}

