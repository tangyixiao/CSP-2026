#include<bits/stdc++.h>
using namespace std;

//? 两张车票对应的座位是否在同一节车厢；
//? 两张车票对应的座位是否在同一节车厢的同一排；
//? 两张车票对应的座位是否在同一节车厢的同一排，且位于过道的同一侧；
//? 两张车票对应的座位是否相邻。

////输入
//输入的第一行包含四个字符串 c1, s1, c2, s2，分别表示小 R 的车票上的车厢号、座位
//号，以及小 X 的车票上的车厢号、座位号。 

////输出
//输出一行一个长度为 4 的 01 字符串，分别表示四个问题的答案，其中 1 代表是，
//0 代表否。 

string c1,s1,c2,s2;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1 == c2) 
	    cout<<1;
	else {
	    cout<<"0000";
	    return 0;
    }
	if(s1[0] == s2[0] && s1[1] == s2[1]) 
	    cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	if(((s1[2] == 'A'||s1[2] == 'B'||s1[2] == 'C') && (s2[2] == 'A'||s2[2] == 'B'||s2[2] == 'C')) ||
	    ((s1[2] == 'F'||s1[2] == 'D') && (s1[2] == 'D'||s1[2] == 'F')))
	    cout<<1;
	else{
		cout<<"00";
		return 0;
	}
	if(s1[2] - s2[2] == 1||s1[2] - s2[2] == -1)
	    cout<<1;
	else
	    cout<<0;
	return 0;
} 
