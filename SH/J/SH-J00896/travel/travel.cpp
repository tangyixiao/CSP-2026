#include<bits/stdc++.h>
#define int long long
using namespace std;
string a,b,c,d;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<1;
		if(b[0]+b[1]==d[0]+d[1]){
			cout<<1;
			char q=b[2],w=d[2];
		//	cout<<q<<" "<<w;01
			if(q<='C'&&w<='C'||q>='D'&&w>='D'){
				cout<<1;
				if(abs((int)q-(int)w)==1){
					cout<<1;
				}
				else cout<<0;
			}
			else{
				string m="00";
				cout<<m;
			}
		}
		else{
			string n="000";
			cout<<n;
		}
	}
	else{
		string l="0000";
		cout<<l;
	}
	return 0;
} 
