#include<bits/stdc++.h>
using namespace std;
int a,b;
string r,x;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>a>>r>>b>>x;
	if(a==b){
		cout<<1;
	}else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	string s,g;
	s=r.substr(0,2);
	g=x.substr(0,2);
	if(s==g){
		cout<<1;
	}else{
		cout<<0<<0<<0;
		return 0;
	}
	string n,m;
	n=r.substr(2,1);
	m=x.substr(2,1);	
	if(n>="A" and n<="C"){
		if(m>="A" and m<="C"){
			cout<<1;
		}else{
			cout<<0<<0;
			return 0;
		}
	}else{
		if(m>="D" and m<="F"){
			cout<<11;
			return 0;
		}else{
			cout<<0<<0;
			return 0;
		}
	}
	if(n=="A"){
		if(m=="B"){
			cout<<1;
			return 0;
		}
		if(m=="C"){
			cout<<0;
			return 0;
		}
    }
    else if(n=="B"){
    	if(m=="A"){
    		cout<<1;
    		return 0;
		}
		if(m=="C"){
			cout<<1;
			return 0;
		}
	}
	else if(n=="C"){
		if(m=="A"){
			cout<<0;
			return 0;
		}
		if(m=="B"){
			cout<<1;
			return 0;
		}
	}else{
		cout<<0;
	}
	return 0;
}
