#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>c1>>s1>>c2>>s2;
//	cout<<"first:";
	if(c1==c2){
		cout<<1;
	}
	else{
		cout<<"0000";
		return 0;
	}
//	cout<<"\n";
	char t1=s1[2],t2=s2[2];
	int l1=0,l2=0;
	for(int i=0;i<2;i++){
		l1=l1*10+s1[i]-'0';
		l2=l2*10+s2[i]-'0';
	}
//	cout<<"second:";
	if(l1==l2){
		cout<<1;
//		cout<<"\n";
	} 
	else{
		cout<<0;
//		cout<<"\n";
	}
//	cout<<"third:";
	if(l1==l2){
		if((t1>='A'&&t1<='C')&&(t2>='A'&&t2<='C')){
			cout<<1; 
		} 
		else if((t1>='D'&&t1<='F')&&(t2>='D'&&t2<='F')){
			cout<<1;
		}
		else cout<<0;
//		cout<<"\n";
	}
	else{
		cout<<0;
//		cout<<"\n";
	}
//	cout<<"fourth:";
	if(l1==l2){
		if((t1+1==t2&&t1!='C')||(t2+1==t1&&t2!='C'))
			cout<<1;
		else cout<<0;
	}
	else cout<<0;
	return 0;
} 