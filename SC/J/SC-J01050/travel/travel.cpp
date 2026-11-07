/*c1是小r的车厢号,s1是小r的座位号 
c2是小x的车厢号,s2是小x的座位号 
a两张车票对应的座位是否在同一节车厢
b两张车票对应的座位是否在同一节车厢的同一排
c两张车票对应的座位是否在同一节车厢的同一排且位于过道的同一侧
d两张车票对应的座位是否相邻
string 字符串下标从0开始！！！！！ 
*/
#include<bits/stdc++.h> 
using namespace std;
string c1,s1,c2,s2;
bool a,b,c,d;
int main(){
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) a=1;
	else{
		cout<<"0000";
		return 0; 
	}
	if((s1[0]+s1[1])==(s2[0]+s2[1])) b=1;
	else {
		cout<<"1000";
		return 0;
	}
	if(s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C') c=1;
	else if (s1[2]>='D'&&s1[2]<='F'&&s2[2]>='D'&&s2[2]<='F') c=1;
	else{
		cout<<"1100";
		return 0;
	} 
	if(s1[2]++==s2[2]||s1[2]--==s2[2]) d=1;
	else {
	cout<<"1110";
	return 0;
	}
	cout<<a<<b<<c<<d;
	return 0;
}