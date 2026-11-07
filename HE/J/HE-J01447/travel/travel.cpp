#include<bits/stdc++.h>

using namespace std;

int main(){
	//注释！！！！！！！！！！！！！！！！！！！！！！！ 
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string R_che,X_che;//车厢
	string R_seat,X_seat;//座位号
	
	cin>>R_che>>R_seat>>X_che>>X_seat;
	
	//1、是否在同一个车厢
	//2、满足1，是否在同一排(前两位数相同) 
	//3、满足1和2，是否在过道同一侧 
	//4、满足1、2和3，是否相邻
	
	if(R_che==X_che){//1
		cout<<1;
		if(R_seat[0]==X_seat[0] && R_seat[1]==X_seat[1]){//2
			cout<<1;
			bool R_df,X_df;//他们是否都在DF一侧 
			R_df=((R_seat[2]=='D')||(R_seat[2]=='F'));
			X_df=((X_seat[2]=='D')||(X_seat[2]=='F'));
			if(R_df==X_df){//都在或都不在DF一侧
				cout<<1;
				int m=R_seat[2]-X_seat[2];
				if(m*m==1){
					cout<<1;
					return 0;
				}
				cout<<0;
				return 0;
			}
			cout<<"00";
			return 0;
		}
		cout<<"000";
		return 0;
	}
	cout<<"0000";
	return 0;

} 
