#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	cout<<1;
	string pai1=s1.substr(0,2);
	string pai2=s2.substr(0,2);
//	cout<<pai1<<" "<<pai2<<"\n";
	if(pai1!=pai2){
		cout<<"000";
		return 0;
	}
	cout<<1;
	char h1=s1[2];
	char h2=s2[2];
//	cout<<hao1<<" "<<hao2<<"\n";
	if((h1<='C'&&h2>'C')||(h2<='C'&&h1>'C'))cout<<0;
	else cout<<1;
	if(abs(h1-h2)==1&&!((h1=='C'&&h2=='D')||(h2=='C'&&h1=='D')))cout<<1;
	else cout<<0;
	return 0;
} 
