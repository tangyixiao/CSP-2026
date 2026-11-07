#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c) cout<<1;
	else cout<<0;
	
	int n = (b[0]-'0')*10+(b[1]-'0');
	int m = (d[0]-'0')*10+(d[1]-'0');
	
	if(a==c&&n==m) cout<<1;
	else cout<<0;
	
	char p = b[2],q = d[2];
	bool l1=0,r1=0,l2=0,r2=0;
	if(p>='A'&&p<='C') l1 = 1;
	else r1 =1;
	if(q>='A'&&p<='C') l2 = 1;
	else r2 = 1;
	
	if((p=='C'&&q=='D')||(p=='D'&&q=='C')) cout<<0;
	else if(a==c&&n==m&&(l1==l2||r1==r2)) cout<<1;
	else cout<<0;
	
	if((p=='C'&&q=='D')||(p=='D'&&q=='C')) cout<<0;
	else if(a==c&&n==m&&(abs(p-q) == 1&&(l1==l2||r1==r2))) cout<<1;
	else cout<<0;
	return 0;
}
