#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int a1,b1,a2,b2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	a1=(c1[0]-'0')*10+(c1[1]-'0');
	b1=(s1[0]-'0')*100+(s1[1]-'0')*10+(s1[2]-'A');
	a2=(c2[0]-'0')*10+(c2[1]-'0');
	b2=(s2[0]-'0')*100+(s2[1]-'0')*10+(s2[2]-'A');
	// cout<<a1<<" "<<b1<<" "<<a2<<" "<<b2<<'\n';
	if(a1!=a2) cout<<"0000";
	else{
		cout<<"1";
		if(b1/10!=b2/10) cout<<"000";
		else{
			cout<<"1";
			if((b1%10<=2 && b2%10>=3) || (b1%10>=3 && b2%10<=2)){
				cout<<"0";
				cout<<"0";
			}
			else{
				cout<<"1";
				if(abs(b1%10-b2%10)==1) cout<<"1";
				else cout<<"0";
			}
		}
	}
	return 0;
}
