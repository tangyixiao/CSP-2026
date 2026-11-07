#include <bits/stdc++.h>
using namespace std;
string ac,bc;
string apai,bpai;
char alie,blie;
string s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>ac;
	cin>>s1;
	cin>>bc;
	cin>>s2;	
	for(int i=0;i<2;i++) apai+=s1[i];
	alie=s1[2];
	for(int i=0;i<2;i++) bpai+=s2[i];
	blie=s2[2];
	cout<<(ac==bc);
	cout<<(ac==bc && apai==bpai);
	cout<<(ac==bc && apai==bpai && ((alie<='C' && blie<='C') || (alie>'C' && blie>'C')));
	cout<<(ac==bc && apai==bpai && ((alie<='C' && blie<='C') || (alie>'C' && blie>'C')) && abs(alie-blie)==1);
	return 0;
}
