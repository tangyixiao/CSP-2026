#include<bits/stdc++.h>
using namespace std;
//did老师~ 我还记得你~~~
//巴蜀中学，啊！！！！！！
int s[10];
int p(int aa){
	for(int i=1;i<=4;i++) cout<<s[i];
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a >>b >>c >>d;
	int n=1,m=2;
	for(int i=1;i<=4;i++) s[i]=1;
	for(int i=0;i<n;i++){
		if(a[i]!=c[i]){
			s[1]=0,s[2]=0,s[3]=0,s[4]=0;
			p(1);
			return 0;
		}
	}
	for(int i=0;i<n;i++){
		if(b[i]!=d[i]){
			s[2]=0,s[3]=0,s[4]=0;
			p(1);
			return 0;
		}
	}
	if(b[2]=='A' || b[2]=='B' || b[2]=='C'){
		if(d[2]=='B' || d[2]=='C' || d[2]=='A') s[3]=1;
		else {
			s[3]=0,s[4]=0;
			p(1);
			return 0;
		}
	}
	else{
		if(d[2]=='D' || d[2]=='F') s[3]=1;
		else {
			s[3]=0,s[4]=0;
			p(1);
			return 0;
		}
	}
	if(b[2]=='A' && d[2]=='B') s[4]=1;
	else if(b[2]=='B' &&(d[2]=='C' || d[2]=='A')) s[4]=1;
	else if(b[2]=='C' && d[2]=='B') s[4]=1;
	else if(b[2]=='D' && d[2]=='F') s[4]=1;
	else if(b[2]=='F' && d[2]=='D') s[4]=1;
	else s[4]=0;
	p(1);
	//fuck ccf/fuck did/fuck everything
	//我要上迷惑！
	//100分
	return 0;
}

