#include<bits/stdc++.h>
using namespace std;
int a,b;
string x,y;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>x>>b>>y;
	bool flag = false;
	if(a == b){
		cout<<1;
		flag = true;
	}
	else cout<<0;
	if(flag && (x[0] == y[0] && x[1] == y[1])){
		 flag = true;
		 cout<<1;
	}
	else{
		cout<<0;
		flag = false;
	}
	if(flag && ((x[2] <= 'C' && y[2] <= 'C') || (x[2] >='D' && y[2] >='D'))){
		cout<<1;
	}
	else{
		cout<<0;
		flag = false;
	}
	if(flag && (abs(x[2]-y[2]) == 1 || (x[2] == 'D' && y[2] == 'F') || (x[2] == 'F' && y[2] == 'D'))){
		cout<<1;
	}
	else cout<<0;
	return 0;
}
