#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2; 
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> c1 >> s1 >> c2 >> s2 ;
	string linea="11",lineb="11";
	int t=0,s=0,m=0;
	char ha=s1[2],hb=s2[2];
	linea[0]=s1[0];
	linea[1]=s1[1];
	lineb[0]=s2[0];
	lineb[1]=s2[1];
	if(c1==c2){
		cout << 1;
		if(linea==lineb){
			m=1;
			if((ha<='C' && ha>='A' && hb>='D' && hb <='E') || (hb<='C' && hb>='A' && ha>='D' && ha <='E')){
				t=0;
				s=0;
			}else {
				if((ha=='A' && hb=='C') || (hb=='A' && ha=='C'))t=0,s=1;
				else t=1,s=1;
			}
			
			
		}
		else m=0;
    }else cout << 0;
	cout <<m<<s<<t;
	return 0; 
} 
