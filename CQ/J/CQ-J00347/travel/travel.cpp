#include<bits/stdc++.h> 
using namespace std;
#define endl '\n'
string c1,s1,c2,s2;
int p[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		p[1]=1;
		string t1=s1.substr(0,2);
		string t2=s2.substr(0,2);
		if(t1==t2){
			p[2]=1;
			char se1=s1[2],se2=s2[2];
			if(('A'<=se1&&se1<='C'&&'A'<=se2&&se2<='C')||(se1=='D'&&se2=='F'||se1=='F'&&se2=='D')){
				p[3]=1;
				if((se1=='A'&&se2=='B'||se1=='B'&&se2=='A')||(se1=='B'&&se2=='C'||se1=='C'&&se2=='B')||(se1=='D'&&se2=='F'||se1=='F'&&se2=='D')) p[4]=1;
			}
		}
	}
	string ans="";
	for(int i=1;i<=4;i++){
		ans+=(char)(p[i]+'0');
	}
	cout<<ans;
	return 0;
}
