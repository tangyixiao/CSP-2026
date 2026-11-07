#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int pos[6]={1,2,3,4,0,5};
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a[0]!=c[0]||a[1]!=c[1]){
		cout<<"0000";
		return 0;
	}
	cout<<1;
	if(b[0]!=d[0]||b[1]!=d[1]){
		cout<<"000";
		return 0;
	}
	cout<<1;
	if((pos[b[2]-'A']<=3&&pos[d[2]-'A']>3)||(pos[b[2]-'A']>3&&pos[d[2]-'A']<=3)){
		cout<<"00";
		return 0;
	}
	cout<<1;
	if(abs(pos[b[2]-'A']-pos[d[2]-'A'])==1) cout<<1;
	else cout<<0;
	return 0;
} 
