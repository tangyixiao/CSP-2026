#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
inline int read(){
	int res = 0,f = 1; char ch = getchar();
	while (!isdigit(ch)){if (ch == '-') f = -1; ch = getchar();}
	while (isdigit(ch)){res = res * 10 + (ch - '0'); ch = getchar();}
	return res * f;
}
inline void spread(char &c,int &x){
	char ch1 = getchar(),ch2 = getchar(),ch3 = getchar();
	x = (ch1 - '0') * 10 + (ch2 - '0'); c = ch3;
	return;
}
int c1,z1,c2,z2;
char f1,f2;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	c1 = read(); spread(f1,z1);
	c2 = read(); spread(f2,z2);
//	cout << z1 << " " << z2 << endl;
	if (c1 == c2) cout << 1;
	else cout << 0;
	if (z1 == z2 && c1 == c2) cout << 1;
	else cout << 0;
	if (((f1 <= 'C' && f2 <= 'C') || (f1 > 'C' && f2 > 'C')) && (z1 == z2 && c1 == c2)) cout << 1;
	else cout << 0;
	if (f1 > f2) swap(f1,f2);
	if (((f1 == 'A' && f2 == 'B') || (f1 == 'B' && f2 == 'C') || (f1 == 'D' && f2 == 'F')) && (z1 == z2 && c1 == c2)) cout << 1;
	else cout << 0;
	//8:51:40
	return 0;
}