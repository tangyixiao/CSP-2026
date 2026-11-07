#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 != c2)	cout << "0000";
	else{
		//在同一节车厢
		if(s1.substr(0,2) != s2.substr(0,2)) {
			//不在同一排 
			cout << "1000"; 
		}
		else{
			//在同一排 
			char seat1 = s1[2],seat2 = s2[2];
			if(seat1>seat2)	swap(seat1,seat2);
			if(seat1>='A'&&seat1<='C'&&seat2>='D'&&seat2<='F')
				//不在过道同一侧 
				cout << "1100";
			else{
				//在过道同侧
				if(seat1=='D'&&seat2=='F')
					//相邻
					cout << "1111";
				else if(seat2-seat1==1)
					//相邻
					cout << "1111";
				else
					//不相邻 
					cout << "1110";
			}
		}
	}
	return 0;
} 
