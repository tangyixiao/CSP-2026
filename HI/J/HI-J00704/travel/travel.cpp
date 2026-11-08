//? 两张车票对应的座位是否在同一节车厢；
//? 两张车票对应的座位是否在同一节车厢的同一排；
//? 两张车票对应的座位是否在同一节车厢的同一排，且位于过道的同一侧；
//? 两张车票对应的座位是否相邻。
#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c,c2,s1,s2;
	cin>>c>>s1>>c2>>s2;
	if(c==c2){
		cout<<1;
	}else{
		cout<<0;
	}
	if(s1[1]==s2[1]&&s1[0]==s2[0]&&c==c2){
		cout<<1;
	}else{
		cout<<0;
	}
	if(s1[1]==s2[1]&&s1[0]==s2[0]&&c==c2&&s1[2]<='A'&&s2[2]<='A'&&s1[2]>='C'&&s2[2]>='C'||s1[2]<='D'&&s2[2]<='D'&&s2[2]>='F'&&s1[2]>='F'){
		cout<<1;
	}else{
		cout<<0;
	}
	if(s1[1]==s2[1]&&s1[0]==s2[0]&&c==c2&&s1[2]<='A'&&s1[2]>='C'&&s2[2]<='A'&&s2[2]>='C'||s1[2]<='D'&&s1[2]>='F'&&s2[2]<='D'&&s2[2]>='F'){
		if(s1[2]+'1'==s2[2]-'1'||s1[2]-'1'==s2[2]+'1'&&s1[2]>='C'&&s2[2]>='C'||s1[2]=='D'&&s2[2]=='F'||s1[2]=='F'&&s2[2]=='D'){
			cout<<1;
		}else{
			cout<<0;
			return 0;
		}
	}else{
		cout<<0;
	}
	return 0;
}
