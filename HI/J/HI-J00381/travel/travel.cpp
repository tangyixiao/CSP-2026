#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d,e = "",f = "";
	cin>>a>>b>>c>>d;
	e = b[0] + b[1];
	f = d[0] + d[1];
	int x,y;
	x = b[2] - 'A' +1;
	if(x == 6) x--;
	y = d[2] - 'A' + 1;
	if(y == 6) y--;
	if(a == c){
		cout<<1;
	}else{
		cout<<0;
	}if(a == c && e == f){
		cout<<1;
		
	}else{
		cout<<0;
	}if(a == c && e == f && (x <= 3 && y <= 3 || x > 3 && y > 3)){
		cout<<1;
	}else{
		cout<<0;
	}if(a == c && e == f && (x <= 3 && y <= 3 || x > 3 && y > 3) && (x - y == 1 || x - y == -1)){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}
