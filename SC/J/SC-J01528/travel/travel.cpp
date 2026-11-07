#include<bits/stdc++.h>
#define ll long long
using namespace std;

int a,b;
string c,d; 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>c>>b>>d;
	if(a!=b){
		cout<<"0000";
		return 0;
	}
	cout<<"1";
	if(c[0]!=d[0]||c[1]!=d[1]){
		cout<<"000";
		return 0;
	}
	cout<<"1";
	if((c[2]=='A'&&(d[2]!='B'||d[2]=='C'))||(c[2]=='B'&&(d[2]!='A'||d[2]=='C'))||(c[2]=='C'&&(d[2]!='A'||d[2]=='B'))){
		cout<<"00";
		return 0;
	}
	if((c[2]=='D'&&d[2]!='F')||(c[2]=='F'&&d[2]!='D')){
		cout<<"00";
		return 0;
	}
	cout<<"1";
	if(abs(int(c[2]-d[2]))==1)cout<<"1";
	else cout<<"0";
	return 0;
}