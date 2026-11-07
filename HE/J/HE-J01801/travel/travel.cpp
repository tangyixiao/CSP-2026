#include<bits/stdc++.h>
using namespace std;
int n,m;
string a,b;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>n>>a>>m>>b;
	if(n==m){
		cout<<1;
	}
	else{
		cout<<0;
	}
	
	if(a[1]==b[1]&&a[2]==b[2]){
		cout<<1;
	}
	else{
		cout<<0;
	}
	cout<<11;
	return 0;
}
