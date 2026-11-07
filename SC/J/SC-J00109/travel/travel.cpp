#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>c>>b>>d;
	if(a==b) {
		cout<<1;
		if(c[0]==d[0]&&c[1]==d[1]){
			cout<<1;
			if(!((c[2]>='D')^(d[2]>='D'))){
				cout<<1;
				int na=c[2]-'A';
				int nb=d[2]-'A';
				if(abs(na-nb)==1) cout<<1;
				else cout<<0;
			}	
			else{
				cout<<"00";
				return 0;
			}
		}
		else cout<<"000";
	}
	else cout<<"0000"; 
	return 0;
} 