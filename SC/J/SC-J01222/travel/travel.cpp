#include<bits/stdc++.h>
using namespace std;
int main(){
	//freopen("travel.in","r",stdin);
	//freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int c1,c2;
	string s1,s2;
	int f=0;
	cin>>c1>>s1>>c2>>s2;
	int x1=int(s1[0]-'0')*10+int(s1[1]-'0'),x2=int(s2[0]-'0')*10+int(s2[1]-'0');
	char y1=s1[2],y2=s2[2];
	//1
	if(c1==c2)cout<<1;
	else{
		cout<<0;
		f=1;
	}
	//2
	if(f==0&&x1==x2)cout<<1;
	else{
		cout<<0;
		f=1;
	}
	//3
	if(f==0&&(((y1=='F'||y1=='D')&&(y2=='D'||y2=='F'))||((y1=='A'||y1=='B'||y1=='C')&&(y2=='A'||y2=='B'||y2=='C')))){
		cout<<1;
	}
	else{
		cout<<0;
		f=1;
	}
	//4
	if(f==0&&((y1=='F'&&y2=='D')||(y2=='F'&&y1=='D')||(y1=='C'&&y2=='B')||(y2=='B'&&y1=='C')||(y1=='A'&&y2=='B')||(y2=='B'&&y1=='A')))cout<<1;
	else{
		cout<<0;
	}
	return 0;
} 