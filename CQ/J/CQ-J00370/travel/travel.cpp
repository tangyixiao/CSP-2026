#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a[0]==c[0]&&a[1]==c[1]){ cout<<'1';
		if(b[0]==d[0]&&b[1]==d[1]){
			cout<<'1'; int id1=5,id2=5;
			if(b[2]!='F') id1=b[2]-'A'+1;
			if(d[2]!='F') id2=d[2]-'A'+1;
			if((id1<=3&&id2<=3)||(id1>3&&id2>3)){ cout<<'1';
				if(abs(id1-id2)==1) cout<<'1';
				else cout<<'0';
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
	return 0;
} 
