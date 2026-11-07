#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	string a,e;
	char b,c,d,f,g,h;
	cin>>a>>b>>c>>d>>e>>f>>g>>h;
	if(a==e){
		cout<<1;
		if(c==g){
			cout<<1;
			if(((d>='A'&&h<='C')&&(h>='A'&&d<='C'))||((d>='D'&&d<='F'&&d!='E')&&(h>='D'&&h<='F'&&h!='E')))
			{
				cout<<1;
				if((d=='B'&&(h=='A')||(h=='C'))||(h=='B'&&(d=='A')||(d=='C')))cout<<1;
				else if((d=='D'&&h=='F')||(h=='D'&&d=='F'))cout<<1;
				else cout<<0;
			}else{
				cout<<0<<0;
			}
		}else{
			cout<<0<<0<<0;
		}
		}else{
			cout<<0<<0<<0<<0;
		}
	return 0;
}
