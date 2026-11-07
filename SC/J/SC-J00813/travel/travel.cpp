#include<bits/stdc++.h>
using namespace std;
string sa,sb,ca,cb;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>ca>>sa>>cb>>sb;
	if(ca==cb) printf("1");
	else printf("0");
	if(ca==cb&&sa[0]==sb[0]&&sa[1]==sb[1]) printf("1");
	else printf("0");
	if(ca==cb&&sa[0]==sb[0]&&sa[1]==sb[1]&&((sa[2]>='A'&&sa[2]<='C'&&sb[2]>='A'&&sb[2]<='C')||(sa[2]>='D'&&sa[2]<='F'&&sb[2]>='D'&&sb[2]<='F'))) printf("1");
	else printf("0");
	if(ca==cb&&sa[0]==sb[0]&&sa[1]==sb[1]&&abs(sa[2]-sb[2])==1&&(sa[2]+sb[2])!=('C'+'D')) printf("1");
	else printf("0");
	return 0;
}