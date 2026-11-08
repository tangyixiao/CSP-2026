#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct L{
	string c,s;
}xr,xx;
bool f(string a,string b){//校对车厢号 
	if(a == b) return 1;
	return 0;
}
bool f1(string x,string y){//校对座位排 
	bool k = 0;
	for(int i = 0;i < x.size() - 1;i++){
		if(x[i] == y[i]) k = 1;
		else k = 0;
	}
	return k;
}
bool f2(string x,string y){//校对座位侧
	bool k = 0;	
	if(((x[2] >= 'A' && x[2] <= 'C') && (y[2] >= 'A' && y[2] <= 'C')) || ((x[2] == 'D' && x[2] == 'F') && (y[2] == 'D' && y[2] == 'F'))) k = 1;
	return k;
}
bool f3(string x,string y){//校对座位是否相邻 
	bool k = 0;	
	if((x[2] - 1 == y[2]) || (x[2] + 1 == y[2])) k = 1;
	if((x[2] == 'C' && y[2] == 'D') || (y[2] == 'C' && x[2] == 'D')) k = 0;
	return k;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> xr.c >> xr.s >> xx.c >> xx.s;
	cout << f(xr.c,xx.c) << f1(xr.s,xx.s) << f2(xr.s,xx.s) << f3(xr.s,xx.s);
	return 0;
}

