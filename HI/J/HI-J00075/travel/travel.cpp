#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	string g,h;
	cin>>a>>g>>b>>h;
	if(a==b){
		cout<<1;
		string x,y;
		x+=g[0];
		x+=g[1];
		y+=h[0];
		y+=h[1];
		if(x==y){
			cout<<1;
			char n,m;
			string k,z;
			n+=g[2];
			m+=h[2];
			if(n=='D'||n=='F')k+=n;
			else z+=n;
			if(m=='D'||m=='F')k+=m;
			else z+=m;
			if(k.size()==2||z.size()==2){
				cout<<1;
				if((n=='A'&&m=='B')||(n=='B'&&m=='A'))cout<<1;
				else if((n=='B'&&m=='C')||(n=='C'&&m=='B'))cout<<1;
				else if((n=='C'&&m=='D')||(n=='D'&&m=='C'))cout<<1;
				else if((n=='D'&&m=='F')||(n=='F'&&m=='D'))cout<<1;
				else cout<<0;
			}
			else cout<<"00";
			
			
			
		}
		else cout<<"000";
		
	}
	else cout<<"0000";
	return 0;
} 
