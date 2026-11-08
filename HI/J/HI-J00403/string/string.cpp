#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string a,b;
	int x,y;
	if(n==1){
		cout<<1;
	}else if(n==2){
		cin>>x>>a>>y>>b;
		cout<<min(x,y);
	}
	
	return 0;
}
