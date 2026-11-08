#include <bits/stdc++.h>
using namespace std;
#define Ios ios_base
string c1,s1,c2,s2,ans;
int main(){
Ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
//15分钟才切掉第一题 
freopen("travel.in","r",stdin);
freopen("travel.out","w",stdout); 
		
cin>>c1>>s1>>c2>>s2;
if(c1==c2) ans+='1';
else {
	cout<<"0000";
	return 0;
}//同一车厢。 
		
if(s1[0]==s2[0]&&s1[1]==s2[1]) ans+='1';
else {
    cout<<"1000";
	return 0;
}//同一排 

if((s1[2]<='C'&&s2[2]<='C')||(s1[2]>='D'&&s2[2]>='D')) ans+='1';
else{
	cout<<"1100";
	return 0;
}//同一侧 

if((int)abs(s1[2]-s2[2])==1){
	ans+='1';
}
else{
	cout<<"1110";
	return 0;
}

cout<<ans;
return 0;
}
//会赢的
//#define思路 由于所有的问题都需要前一个问题的答案是1，所以如果前一个问题是0，后面的也全部输出0。  
//Trick||Treat!
//两张车票对应的座位是否在同一节车厢；
//两张车票对应的座位是否在同一节车厢的同一排；
//两张车票对应的座位是否在同一节车厢的同一排，且位于过道的同一侧；
//两张车票对应的座位是否相邻
