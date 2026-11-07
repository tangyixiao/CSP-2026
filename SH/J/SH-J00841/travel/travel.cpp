#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;//c1,c2表示小R,小X的车厢号 |s1,s2表示小R,小X的座位号
struct node{
	int line;
	int seat;
};
bool q1,q2,q3,q4;
int main(){
	freopen("travel.in","r",stdin);
	cin>>c1>>s1>>c2>>s2;
	//处理座位号
	node r,x; 
	r.line=int(s1[1]-'0');
	r.line+=int((s1[0]-'0')*10);
	x.line=int(s2[1]-'0');
	x.line+=int((s2[0]-'0')*10);
	r.seat=(s1[2]-'A')+1;
	x.seat=(s2[2]-'A')+1;
	//判断 
	freopen("travel.out","w",stdout); 
	//同车厢 
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	cout<<"1";
	//同行 
	if(r.line!=x.line){
		cout<<"000";
		return 0;
	}
	cout<<"1";
	//DF座 
	if(r.seat+x.seat==10){
		cout<<"11";
		return 0;
	}
	//ABC座 
	if((r.seat)<=3&&(x.seat<=3)){
		cout<<"1";
		//相邻 
		int n=r.seat-x.seat;
		if((n==1)||(n==-1)){
			cout<<"1";
			return 0;
		}
		cout<<"0"; 
		return 0;
	}
	cout<<"00";
	return 0;
} 
