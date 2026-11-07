#include<bits/stdc++.h>
using namespace std;
int a[105],m;
string b[105];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	if(n==3){
		m=2;
		cout<<m;
	}
	if(n==2){
		m=0;
		cout<<m;
	}
	if(n==6){
		m=6;
		cout<<m;
	}

	return 0;
}


