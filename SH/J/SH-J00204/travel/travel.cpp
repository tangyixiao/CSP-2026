#include<bits/stdc++.h>
using namespace std;
bool a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string ca,cb,sa,sb;
	cin>>ca>>sa>>cb>>sb;
	int pa = (sa[0]-'0')*10+(sa[1]-'0');
	int pb = (sb[0]-'0')*10+(sb[1]-'0');
	bool a=sa[2]<='C',b=sb[2]<='C';
	if(sa[2] == 'F') sa[2]='E';
	if(sb[2] == 'F') sb[2]='E';
	if(ca!=cb) cout<<"0000"<<endl;
	else if(pa!=pb) cout<<"1000"<<endl;
	else if(a!=b) cout<<"1100"<<endl;
	else if(sa[2]-sb[2] != -1&&sa[2]-sb[2] != 1) cout<<"1110"<<endl;
	else cout<<"1111"<<endl;
	return 0;
}

