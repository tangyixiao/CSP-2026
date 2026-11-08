#include <bits/stdc++.h>
using namespace std;
bool chexiang(int a,int b){
	return a==b;
}
bool tongyipai(int a1,int b1,int a,int b){
	if(!chexiang(a1,b1)) return 0;
	return a==b;
}
bool tongyice(int a1,int b1,int a2,int b2,int a,int b){
	if(!tongyipai(a1,b1,a2,b2)) return 0;
	return (a>=1 and a<=3 and b>=1 and b<=3) or (a>=4 and a<=5 and b>=4 and b<=5);
}
bool xl(int a1,int b1,int a2,int b2,int a,int b){
	if(!tongyice(a1,b1,a2,b2,a,b)) return 0;
	return abs(a-b)==1;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int ch1=0,ch2=0,ph1=0,ph2=0;
	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	for(int i=0;c1[i]!='\0';i++){
		ch1=ch1*10+(c1[i]-'0');
	}
	for(int i=0;c2[i]!='\0';i++){
		ch2=ch2*10+(c2[i]-'0');
	}
	string p1=s1.substr(0,2),p2=s2.substr(0,2);
	for(int i=0;p1[i]!='\0';i++){
		ph1=ph1*10+(p1[i]-'0');
	}
	for(int i=0;p2[i]!='\0';i++){
		ph2=ph2*10+(p2[i]-'0');
	}
	string t1=s1.substr(2,3),t2=s2.substr(2,3);
	cout<<chexiang(ch1,ch2)<<tongyipai(ch1,ch2,ph1,ph2)<<tongyice(ch1,ch2,ph1,ph2,t1[0]-'A'+1,t2[0]-'A'+1)<<xl(ch1,ch2,ph1,ph2,t1[0]-'A'+1,t2[0]-'A'+1);
	return 0;
} 
