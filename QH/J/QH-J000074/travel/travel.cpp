#include<bits/stdc++.h>
using namespace std;
//预计得分100 
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	string car_box,seat,x_box,x_seat;
	cin>>car_box>>seat>>x_box>>x_seat;
	if(car_box==x_box) cout<<1;
	else{
		cout<<"0000";
		return 0;
	}
	int num1=seat[0]*10+seat[1];
	int num2=x_seat[0]*10+x_seat[1];
	if(num1==num2) cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	map<char,bool> mp1,mp2;
	mp1['A']=1;
	mp1['B']=1;
	mp1['C']=1;
	mp2['D']=1;
	mp2['F']=1;
	if((mp1[x_seat[2]]&&mp1[seat[2]])||(mp2[x_seat[2]]&&mp2[seat[2]])){
		cout<<1;
		if(x_seat[2]+1==seat[2]||seat[2]+1==x_seat[2]) cout<<1;
		else cout<<0;
	}
	else cout<<"00";
	return 0;
} 
//E消失了说是  C和D不相邻说是 
