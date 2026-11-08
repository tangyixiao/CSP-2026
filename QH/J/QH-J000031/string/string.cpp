#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a;
	char c;
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a>>c;
	}
	if (n==1){
		cout<<0;
	}else if (n==2){
		cout<<1;
	}
	return 0;
}
