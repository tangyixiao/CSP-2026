#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	
	int k1=(s1[0]-'0')*10+(s1[1]-'0'),k2=(s2[0]-'0')*10+(s2[1]-'0');
	if(k1==k2){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	
	map<char,int> p;
	p['A']=1;
	p['B']=1;
	p['C']=1;
	p['D']=2;
	p['F']=2;
	if(p[s1[2]]==p[s2[2]]){
		cout<<1;
	}else{
		cout<<"00";
		return 0;
	}
	
	map<char,int> q;
	q['A']=1;
	q['B']=2;
	q['C']=3;
	q['D']=4;
	q['F']=5;
	if(abs(q[s1[2]]-q[s2[2]])==1){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}
