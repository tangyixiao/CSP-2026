#include<bits/stdc++.h>
using namespace std;
int ta=0,tb=0,tc=0,td=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>c>>b>>d;
	if(a!=b){
		cout<<ta<<tb<<tc<<td;
		return 0;
	}
	ta=1;
	if(c[0]!=d[0]||c[1]!=d[1]){
		cout<<ta<<tb<<tc<<td;
		return 0;
	}
	tb=1;
	if(d[2]<c[2]){
		swap(d[2],c[2]);
	}
	if(c[2]<'D'&&d[2]>'C'){
		cout<<ta<<tb<<tc<<td;
		return 0;
	}
	tc=1;
	if(d[2]-c[2]!=1){
		cout<<ta<<tb<<tc<<td;
		return 0;
	}
	td=1;
	cout<<ta<<tb<<tc<<td;
	return 0;
}
