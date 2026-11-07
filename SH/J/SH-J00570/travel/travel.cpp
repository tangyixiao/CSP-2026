#include<bits/stdc++.h>
using namespace std;
#define int long long
string a1,a2,b1,b2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>b1>>a2>>b2;
	int c1=0,c2=0,p1=0,p2=0,tp1=0,tp2=0;
	a1=' '+a1;
	a2=' '+a2;
	b1=' '+b1;
	b2=' '+b2;
	for(int i=1;i<a1.size();i++){
		c1=c1*10+(a1[i]-'0');
	}
	for(int i=1;i<a2.size();i++){
		c2=c2*10+(a2[i]-'0');
	}
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	cout<<1;
	for(int i=1;i<b1.size();i++){
		p1=p1*10+(b1[i]-'0');
		if(b1[i+1]>='A'&&b1[i+1]<='F'){
			if(b1[i+1]=='F')tp1=5;
			else tp1=b1[i+1]-'A'+1;
			break;
		}
	}
	for(int i=1;i<b2.size();i++){
		p2=p2*10+(b2[i]-'0');
		if(b2[i+1]>='A'&&b2[i+1]<='F'){
			if(b2[i+1]=='F')tp2=5;
			else tp2=b2[i+1]-'A'+1;
			break;
		}
	}
//	cout<<'\n';
//	cout<<p1<<" "<<p2<<'\n';
//	cout<<tp1<<" "<<tp2<<'\n';
	if(p1!=p2){
		cout<<"000";
		return 0;
	}
	cout<<1;
	if((tp1<=3&&tp2>3)||(tp2<=3&&tp1>3)){
		cout<<"00";
		return 0;
	}
	cout<<1;
	if(abs(tp1-tp2)==1)cout<<1;
	else cout<<0;
}
