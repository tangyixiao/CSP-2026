#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a;
	string c,b,yh;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++){
		b+=c;}
	}
	for(int i=0;i<b.length();i++){
		yh+=b[i];
	}
	if(yh==b){
	cout<<0;}
	return 0;
}
