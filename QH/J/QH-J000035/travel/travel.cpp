#include<bits/stdc++.h>
using namespace std;
map<char,int>mp;//{{'A',1},{'B',1},{'C',1},{'D',2},{'F',2}};
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	int n,m;
	string a,b;
	cin>>n>>a>>m>>b;
	int u=1,c=1,k=1,e=1;
	if(n!=m){
		u=0;
	} 
	mp['A']=1;
	mp['B']=1;
	mp['C']=1;
	mp['D']=2;
	mp['F']=2;
	char o=a[a.size()-1],p=b[b.size()-1];
	a[a.size()-1]=' ';
	b[a.size()-1]=' ';
	if(!u||a!=b){
		c=0;
	}
	if(!c||(mp[o]!=mp[p])){
		k=0;
	}
	if(o=='F'){
		o='E';
	}
	if(p=='F'){
		o='E';
	}
	if(!k||abs(o-p)!=1){
		e=0;
	}
	cout<<u<<c<<k<<e;
	return 0;
} 
