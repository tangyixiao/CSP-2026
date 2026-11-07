#include<bits/stdc++.h>
using namespace std;
string  x[1000000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,c=0,v=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		string b;
		cin>>a>>b;
		x[i]=b;
		if(x[i-1]==b){
			v++;
		}
		c=c+a;
	}
	if(v==n-1){
		cout<<0;
		return 0;
	}
	else if(c%2!=0)c--;
	cout<<c/2;
	return 0;
}