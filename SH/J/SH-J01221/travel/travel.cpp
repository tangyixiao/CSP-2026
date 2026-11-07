#include <bits/stdc++.h>
using namespace std;
//struct node{
///	string rc,rz,xc,xz;
//};
//node tra[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	//小 R 的车票上的车厢号、座位号，以及小 X 的车票上的车厢号、座位号
	cin>>c1>>s1>>c2>>s2;
	if (c1 == c2){
		cout<<1;//1.两张车票对应的座位是否在同一节车厢
		int flag = 0;
		for (int i = 0;i < s1.size()-1;i++){
			if (s1[i] != s2[i]){
				flag = 1;
			}
		}
		if (flag == 0){
			cout<<1;//2.两张车票对应的座位是否在同一节车厢的同一排
			char t1 = s1[2],t2 = s2[2];
			//3.两张车票对应的座位是否在同一节车厢的同一排，且位于过道的同一侧
			if ((t1 == 'D' || t1 == 'F') && (t2 == 'D' || 'F')){
				cout<<"11";//4.两张车票对应的座位是否相邻
				//break;
			}else if ((t1 == 'A' && t2 == 'B') || (t1 == 'B' && t2 == 'A') || (t1 == 'B' && t2 == 'C') || (t1 == 'C' && t2 == 'B')){
				cout<<"11";
				//break;
			}else if ((t1 == 'A' && t2 == 'C') || (t1 == 'C' && t2 == 'A')){
				cout<<"10";
				//break;
			}else{
				cout<<"00";
			}
			
		}else{
			cout<<"000";
			//break;
		}
	}else{
		cout<<"0000";
		//break;
	}
	
}
