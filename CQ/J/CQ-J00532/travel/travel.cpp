#include<bits/stdc++.h>
using namespace std;
string a,b,c,d,e,f;
string nk={'A','B','C'};
string ny={'D','F'};
int ans=0,cnt=0,k=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>a>>b>>c>>d;
	if(a==c) cout<<"1";
	else{
		cout<<"0000";
		return 0;	
	} 
	e=b[0]+b[1];
	f=d[0]+d[1];
	if(e==f) cout<<"1";
	else{
		cout<<"000";
		return 0;
		}
	if(((b[2]==nk[0]||b[2]==nk[1]||b[2]==nk[2])&&(d[2]==nk[0]||d[2]==nk[1]||d[2]==nk[2]))||((b[2]==ny[1]&&d[2]==ny[0])||(d[2]==ny[1]&&b[2]==ny[0]))){
		cout<<"1";
		int n=abs(b[2]-d[2]);
		if(n==1 && (b[2]!=nk[2]||b[2]!=ny[0])) cout<<"1";
		else{
			if((b[2]==ny[0]&&d[2]==ny[1])||(d[2]==ny[0]&&b[2]==ny[1])) cout<<"1";
			else cout<<"0";	
				}
			}
			else cout<<"00";
	return 0;
} 
