#include<bits/stdc++.h>
using namespace std;
long long x,y,xx,yy;
string a,b,c,d;
char n,m;
bool q,qq,qqq,qqqq;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin >> a >> b >> c >> d;
	x = (a[0] - '0') * 10 + (a[1] - '0');
	y = (c[0] - '0') * 10 + (c[1] - '0');
	xx = (b[0] - '0') * 10 + (b[1] - '0');
	yy = (d[0] - '0') * 10 + (d[1] - '0');
//	cout << x << " " << xx << " " << y << " " << yy << '\n';
	n = b[2];m = d[2];
	if(x == y){
		q = 1;
	}
	if(x == y && xx == yy){
		qq = 1;
	}
	if(x == y && xx == yy){
		if(n == 'F' || n == 'D'){
			if(m == 'F' || m == 'D'){
				qqq = 1;
			}
		}
		if(n == 'A' || n == 'B' || n == 'C'){
			if(m == 'A' || m == 'B' || m == 'C'){
				qqq = 1;
			}
		}
	}
	if(qqq == 1){
		if(xx == yy && (n == m + 1 || m == n + 1)){
			qqqq = 1;
		}
	}
	cout << q << qq << qqq << qqqq;
	return 0;
} 
