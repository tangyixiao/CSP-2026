#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define space putchar(' ');
#define enter putchar('\n');
using namespace std;
ll read();
void write(ll x);
string c1,s1,c2,s2;
ll ans1,ans2;
char l1,l2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    cin>>c1>>s1>>c2>>s2;
    ans1=(s1[0]-'0')*10+s1[1]-'0';
    l1=s1[2];
    ans2=(s2[0]-'0')*10+s2[1]-'0';
    l2=s2[2];
    if(c1!=c2) puts("0000");
    else if(ans1!=ans2) puts("1000");
    else if(!((l1<='C'&&l2<='C')||(l1>='D'&&l2>='D'))) puts("1100");
    else if(abs(l1-l2)!=1) puts("1110");
    else puts("1111");
	return 0;
}
ll read(){
	int c;
	ll op=1,cnt=0;
	c=getchar();
	while(c<'0'||'9'<c){
		if(c=='-') op*=-1;
		c=getchar();
	}
	while('0'<=c&&c<='9'){
		cnt=cnt*10+c-'0';
		c=getchar();
	}
	return cnt*op;
}
void write(ll x){
	if(x<0){
		putchar('-');
		x=-x;
	}
	if(x>=10) write(x/10);
	putchar(x%10+'0');
}
