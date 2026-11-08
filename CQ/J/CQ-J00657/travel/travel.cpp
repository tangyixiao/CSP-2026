#include <bits/stdc++.h>
using namespace std;
string c1/*R的车厢号*/,s1/*R的座位号*/,c2/*X的车厢号*/,s2/**X的座位号*/;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	//初步判断就是个模拟，-J T1 果然还是不难的
	//白紧张了 
	cin>>c1>>s1>>c2>>s2;
	//1.两张车票对应的座位是否在同一节车厢
	//车厢号必须相同才在同一个车厢 
	if(c1==c2){
		cout<<"1"; 
	} 
	else{
		//如果不在同一车厢，自然后面的所有都不可能满足 
		cout<<"0000";
		return 0; 
	}
	//2.两张车票对应的座位是否在同一节车厢的同一排
	//共18排，有排号，排号相同则在同一排 
	//处理排号，是座位号的前两位数字
	if(s1[0]==s2[0]&&s1[1]==s2[1]){
		cout<<"1";
	}
	else{
		//不在同一排后面两个同样不会满足
		cout<<"000";
		return 0; 
	} 
	//3.两张车票对应的座位是否在同一节车厢的同一排，且位于过道的同一侧
	char f1,f2;
	if(s1[2]=='F'||s1[2]=='D'){
		f1='0';
	} 
	else{
		f1='1';
	}
	if(s2[2]=='F'||s2[2]=='D'){
		f2='0';
	} 
	else{
		f2='1';
	}
	if(f1==f2){
		//在同一侧
		cout<<"1"; 
	}
	else{
		//不在同一侧无法相邻
		cout<<"00";
		return 0; 
	}
	//4.两张车票对应的座位是否相邻
	if(abs(int(s1[2])-int(s2[2]))==1){
		//座位号相邻，仅当前面的都满足且座位号的字母差的绝对值为1
		//题目说了没有两个座位是同一个座位的情况
		cout<<"1"; 
	}
	else{
		cout<<"0";
	}
	return 0;
}
