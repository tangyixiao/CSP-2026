#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;	
	if(c1==c2){//同一节车厢 
		cout<<"1";
		string s1_="",s2_="";
		s1_=s1_+s1[0];
		s1_=s1_+s1[1];
		s2_=s2_+s2[0];
		s2_=s2_+s2[1];
//		cout<<endl<<s1_<<"  "<<s2_; 
		if(s1_==s2_){//同一排座位 
			cout<<"1";
			char c_1=s1[2],c_2=s2[2];
			if((c_1=='A'&&c_2=='B')||(c_1=='A'&&c_2=='C')||(c_1=='B'&&c_2=='C')||(c_1=='D'&&c_2=='F')||(c_2=='A'&&c_1=='B')||(c_2=='A'&&c_1=='C')||(c_2=='B'&&c_1=='C')||(c_2=='D'&&c_1=='F')){
				cout<<"1";
				if((c_1=='A'&&c_2=='B')||(c_1=='B'&&c_2=='C')||(c_1=='D'&&c_2=='F')||(c_2=='A'&&c_1=='B')||(c_2=='B'&&c_1=='C')||(c_2=='D'&&c_1=='F')){
					cout<<"1";
				}else{
					cout<<"0";
				}
			}else{
				cout<<"00";
			}
		
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	
	
	return 0;
}
/*
02 01C 02 01A
*/
/*
判断是否在同一车厢：c1==c2(如果不在同一节车厢:0000)
判断是否在同一排：s1_==s2_(s1_是s1前两位，s2_同理(如果不在同一排)) 
判断是否在同一侧：(ABC,DF) ：AB,AC,BA,BC,CA,CB,DF,FD 
判断是否相邻：AB,BA,BC,CB,DF,FD
*/
