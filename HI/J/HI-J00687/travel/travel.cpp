#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int n1,r1,n2,r2;
char t1,t2;
int main(){
	ios::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	n1=c1[0]*10+c1[1];
	n2=c2[0]*10+c2[1];
	r1=s1[0]*10+s1[1];
	r2=s2[0]*10+s2[1];
	t1=s1[s1.size()-1];
	t2=s2[s2.size()-1];
	cout<<(n1==n2?1:0);
	cout<<(r1==r2 && n1==n2?1:0);
	cout<<(((t1<='C' && t2<='C')||(t1>='D' && t2>='D')) && r1==r2 && n1==n2?1:0);
	cout<<(((abs(t1-t2)==1) || (abs(t1-t2)==2 && t1=='D' && t2=='F')) && ((t1<='C' && t2<='C')||(t1>='D' && t2>='D')) && r1==r2 && n1==n2?1:0);
	return 0;
}
