#include<bits/stdc++.h>
using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	//行数 
	string line1,line2;
	line1=(line1+s1[0])+s1[1],line2=(line2+s2[0])+s2[1];
	
	//座位号
	char g1=s1[2],g2=s2[2];
	int t1=s1[2],t2=s2[2]; 
	
	bool f2=1;
	if(c1==c2) cout<<1;//判断是否在同一车厢 
	else{
		f2=0;
		cout<<0;
	}
	
	bool f1=1;
	if(line1==line2&&f2) cout<<1;//判断是否在同一行 
	else{
		f1=0;
		cout<<0;
	}
	
	bool f=1;
	if(g1<='C'&&g2<='C'&&f1) cout<<1;
	else if(g1>'C'&&g2>'C'&&f1) cout<<1;
	else{
		f=0;
		cout<<0;
	}
	
	if(abs(t1-t2)==1||g1>'C'&&g2>'C'&&f) cout<<1;
	else cout<<0; 
	
	return 0;
} 