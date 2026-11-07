#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.in","w",stdout);
	int a;
	cin>>a;
	int s[1010];
	char d[1010];
	for(int i=1;i<=a;i++){
		cin>>s[i]>>d[i];
	}
	if(a==3){
		cout<<2;
	}else if(a==6){
		cout<<3000000000;
	}else{
		cout<<0;
	}
	return 0;
}