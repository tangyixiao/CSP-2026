#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string ca,cb,sa,sb;
	cin>>ca>>sa>>cb>>sb;
	
	int a=sa[0]-'0';
	int b=sa[1]-'0';
	
	int c=sb[0]-'0';
	int d=sb[1]-'0';
	
	
	//两张车票对应的座位是否在同一节车厢
	if(ca==cb){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	//两张车票对应的座位是否在同一节车厢的同一排；
	if(ca==cb&&a==c&&b==d){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	//两张车票对应的座位是否在同一节车厢的同一排，且位于过道的同一侧；
	if(ca==cb&&a==c&&b==d&&(((sa[2]=='F'||sa[2]=='D')&&(sb[2]=='F'||sb[2]=='D'))||((sa[2]=='A'||sa[2]=='B'||sa[2]=='C')&&(sb[2]=='A'||sb[2]=='B'||sb[2]=='C')))){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	//两张车票对应的座位是否相邻。
	if(ca==cb&&a==c&&b==d&&(sa[2]-sb[2]==1||sa[2]-sb[2]==-1)&&((sa[2]!='C'&&sb[2]!='D')&&(sa[2]!='D'&&sb[2]!='C'))){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	return 0;
} 
