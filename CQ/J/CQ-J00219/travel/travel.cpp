#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	bool flag=true;
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	int k1=(s1[0]-'0')*10+(s1[1]-'0');
	int k2=(s2[0]-'0')*10+(s2[1]-'0');
	char t1=s1[2];
	char t2=s2[2];
	
	if(c1==c2&&flag){
		cout<<1;	
	}
	else{
		cout<<0;
		flag=false;
	}
	
	if(k1==k2&&flag){
		cout<<1; 
	}
	else{
		cout<<0;
		flag=false;
	}

	if('A'<=t1&&t1<='C'&&'A'<=t2&&t2<='C'&&flag){
		cout<<1;
	} 
	else if('D'<=t1&&t1<='F'&&'D'<=t2&&t2<='F'&&flag){
		cout<<1;
	}
	else{
		cout<<0;
		flag=false;
	}
	
	if(abs(t1-t2)==1&&flag){
		if((t1=='C'&&t2=='D')||(t2=='C'&&t1=='D')){
			cout<<0;
			flag=false;
		}
		else{
			cout<<1;
		}
	}
	else{
		cout<<0;
		flag=false;
	}
	return 0;
}
