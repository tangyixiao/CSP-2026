#include<bits/stdc++.h>
using namespace std;
struct node{
	string t_x,t_s;
}r,x; 
bool is_same_c(char x,char y){
	return (x=='F'&&y=='D') || (x=='D'&&y=='F') || ( x=='A'&&(y=='B'||y=='C') || x=='B'&&(y=='A'||y=='C')  || x=='C'&&(y=='B'||y=='A') );
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>r.t_x>>r.t_s>>x.t_x>>x.t_s;
	if(r.t_x==x.t_x){
		printf("1");
		if(r.t_s[0]==x.t_s[0]&&x.t_s[1]==r.t_s[1]){
			printf("1");
			if(is_same_c(r.t_s[2],x.t_s[2])){
				printf("1");
				if(r.t_s[2]=='C'||r.t_s[2]=='D') printf("1");
				else if(r.t_s[2]=='A'&&x.t_s[2]=='B' || r.t_s[2]=='B'&&x.t_s[2] ||r.t_s[2]=='C'&&x.t_s[2]=='B') printf("1");
				else printf("0");
			}
			else printf("00");
		}
		else printf("000");
	}
	else printf("0000");
	return 0;
}
