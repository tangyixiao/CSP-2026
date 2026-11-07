#include<bits/stdc++.h>
#define ll long long
using namespace std;
char a[10][10];
ll read(){
	ll _a=0,_ne=1;
	char _c=getchar();
	while(!isdigit(_c)){
		if(_c=='-')_ne=-1;
		_c=getchar();
	}
	while(isdigit(_c)){
		_a=(_a<<3)+(_a<<1)+(_c^48);
		_c=getchar();
	}
	return _a*_ne;
}
void write(ll _a){
	if(_a<0){
		putchar('-');
		_a=-_a;
	}
	if(_a>9)write(_a/10);
	putchar(_a%10+'0');
}
bool f(char x,char y){
	if(x<='C'&&y<='C')return 1;
	if(x>='D'&&y>='D')return 1;
	return 0;
}
bool g(char x,char y){
	if(x>y)swap(x,y);
	if((x=='A'&&y=='B')||(x=='B'&&y=='C')||(x=='D'&&y=='F'))return 1;
	else return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a[1]+1>>a[2]+1>>a[3]+1>>a[4]+1;
	if(a[1][1]==a[3][1]&&a[1][2]==a[3][2])cout<<"1";
	else{
		cout<<"0000";
		return 0;
	}
	if(a[2][1]==a[4][1]&&a[2][2]==a[4][2])cout<<"1";
	else{
		cout<<"000";
		return 0;
	}
	if(f(a[2][3],a[4][3]))cout<<"1";
	else{
		cout<<"00";
		return 0;
	}
	if(g(a[2][3],a[4][3]))cout<<"1";
	else cout<<"0";
	return 0;
}
