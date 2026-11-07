#include<bits/stdc++.h>
using namespace std;
bool judge(string x,string y){
	return x[3]=='F'&&y[3]=='D'||x[3]=='D'&&y[3]=='F'
	||x[3]=='A'&&y[3]=='B'||x[3]=='A'&&y[3]=='C'
	||x[3]=='B'&&y[3]=='A'||x[3]=='B'&&y[3]=='C'
	||x[3]=='C'&&y[3]=='A'||x[3]=='C'&&y[3]=='B';
}
bool check(string x,string y){
	return x[3]=='F'&&y[3]=='D'||x[3]=='D'&&y[3]=='F'
	||x[3]=='A'&&y[3]=='B'
	||x[3]=='B'&&y[3]=='A'||x[3]=='B'&&y[3]=='C'
	||x[3]=='C'&&y[3]=='B';
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin >> a >> b >> c >> d;
	b = ' '+b;
	d = ' '+d;
	if(a==c) cout << 1; else cout << 0;
	if(a==c&&b[1]==d[1]&&b[2]==d[2]) cout << 1; else cout << 0;
	if(a==c&&b[1]==d[1]&&b[2]==d[2]&&judge(b,d)) cout <<1; else cout << 0;
	if(a==c&&b[1]==d[1]&&b[2]==d[2]&&check(b,d)) cout <<1; else cout << 0;
	return 0;
}
