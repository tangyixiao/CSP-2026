#include <bits/stdc++.h>
using namespace std;
//int read(){
//	int x=0,f=1;
//	char ch=getchar();
//	while(!(ch>='0' and ch<='9')){
//		if(ch=='-') f=-1;
//		ch=getchar();
//	}
//	while(ch>='0' and ch<='9'){
//		x=x*10+(ch-'0');
//		ch=getchar();
//	}
//	return x*f;
//}
string c1,s1,c2,s2;
int a,b,c,d;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("","r",stdin);
	freopen("","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	a=((c1==c2)?1:0);
	b=((a==1 and s1[0]==s2[0] and s1[1]==s2[1])?1:0);
	c=((a==1 and b==1 and ((s1[2]=='A' or s1[2]=='B' or s1[2]=='C') and (s2[2]=='A' or s2[2]=='B' or s2[3]=='C') or ((s1[2]=='F' or s1[2]=='D') and (s2[2]=='F' or s2[2]=='D'))))?1:0);
	d=((a==1 and b==1 and c==1 and(char(s1[2]+1)==s2[2] or char(s2[2]+1)==s1[2]))?1:0);
	cout<<a<<b<<c<<d;
	return 0;
}
