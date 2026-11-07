#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
map<char,int> m,n;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	m['A']=1;
	m['B']=1;
	m['C']=1;
	m['D']=2;
	m['F']=2; 
	n['A']=1;
	n['B']=2;
	n['C']=3;
	n['D']=4;
	n['F']=5;
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<1;
		if(b[1]==d[1]){
			cout<<1;
			if(m[b[2]]==m[d[2]]){
				cout<<1;
				if(n[b[2]]+1==n[d[2]]||n[b[2]]==b[d[2]]+1){
					cout<<1;
				}
				else{
					cout<<0;
				}
			}
			else {
				for(int i=0;i<2;i++)cout<<0;
			}
		}
		else {
			for(int i=0;i<3;i++)cout<<0;
		}
	}
	else {
		for(int i=0;i<4;i++)cout<<0;
	}
	cout<<endl;
	return 0; 
}
