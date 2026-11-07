#include<bits/stdc++.h>
#define ll long long

using namespace std;

int a1,b1,a2,b2;
char s1,s2;

bool check1(){
	bool fg1 = 0,fg2 = 0;
	if((s1 == 'A' || s1 == 'B' || s1 == 'C')&&(s2 == 'A' || s2 == 'B' || s2 == 'C')) fg1 = 1;
	if((s1 == 'F' || s1 == 'D')&&(s2 == 'F' || s2 == 'D')) fg2 = 1;
	if(fg1 || fg2) return 1;
	else return 0;
}

bool check2(){
	if((s1=='A'&&s2=='B')||(s1=='B'&&s2=='C')||(s1=='D'&&s2=='F')) return 1;
	else return 0;
}

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
//	ios::sync_with_stdio(false);
//	cin.tie(0);cout.tie(0);
	cin >> a1;
	scanf("%d%c",&a2,&s1);
	cin >> b1;
	scanf("%d%c",&b2,&s2);
	if(a1 == b1) cout << 1;
	else cout << 0;
	if(a1 == b1 && a2 == b2) cout << 1;
	else cout << 0;
	if(a1 == b1 && a2 == b2 && check1()) cout << 1;
	else cout << 0;
	if(a1 == b1 && a2 == b2 && check1() && check2()) cout << 1;
	else cout << 0;
	return 0;
}