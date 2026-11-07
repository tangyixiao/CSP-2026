#include<bits/stdc++.h>
using namespace std;

int a,b;  // 车厢号 
string a1,b1;  // 座位号
bool ans1,ans2,ans3,ans4; // 答案 
/*
两张车票对应的座位是否在同一节车厢；
两张车票对应的座位是否在同一节车厢的同一排；
两张车票对应的座位是否在同一节车厢的同一排，且位于过道的同一侧；
两张车票对应的座位是否相邻。
*/
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>a1>>b>>b1;
	ans1 = (a==b);
	if(ans1){
		ans2 = (a1.substr(0,2) == b1.substr(0,2));
	} 
	if(ans1 && ans2){
		if((a1[2]<='C' && b1[2]<='C') || (a1[2]>='D' && b1[2]>='D')){
			ans3 = 1;
		} else{
			ans3 = 0; 
		}
	}
	if(ans3){
		if(a1[2]<='C' && b1[2]<='C' && abs(a1[2] - b1[2])==1){
			ans4 = 1;
		}else if (a1[2]>='D' && b1[2]>='D'){
			ans4 = 1;
		}
	} 
	cout<<ans1<<ans2<<ans3<<ans4<<endl;
	return 0;
}
