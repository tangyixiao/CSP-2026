#include <bits/stdc++.h>
using namespace std;
using ll = long long;
//I love ccf very much,more than other thing.
int main(){
	//I love ccf very much,more than other thing.
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int c1,c2,x1,y1,x2,y2;
	string s1,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	x1 = 10 * (s1[0] - '0') +(s1[1] - '0');
	y1 = s1[2] - 'A' + 1;
	x2 = 10 * (s2[0] - '0') +(s2[1] - '0');
	y2 = s2[2] - 'A' + 1;
	if(c1 == c2){
		cout << 1;
		if(x1 == x2){
			cout << 1;
			if((y1 >= 4 && y2 >= 4)||(y1 <= 3 && y2 <= 3)){
				cout << 1;
				if(abs(y1 - y2) == 1){
					cout << 1;
				}else{
					cout << 0;
				}
			}else{
				cout <<"00";
			}
		}else{
			cout << "000";
		}
	}else{
		cout << "0000";
	}
	return 0;
	//I love ccf very much,more than other thing.
}
/*
求CCF让我RP++
Luogu:__Dhc666__
uid:?(谁会记这玩意?)

(别看这个)链接:http://192.168.114.124/collect/download/kGpe3ZPbzFtqgjlQiQwU
解压密码:Trick||Treat!(不给糖就捣蛋)

cmd:
fc [文件1] [文件2]

下面是游记:

8:30 入考场，发现自己的J和S考场座位号一样(雷霆解压密码)

9:06 ACt1~~(t1水题,对于HCM来说这题太简单了)~~;

9:23 t2骗分(感觉在哪见过)

9:25 t3长得那么像背包?

9:37 t3貌似不能用DP:(

9:41 貌似想出t2正解

10:04 t2搞不出来，尝试骗分

10:30 t2>=50pts;开始t3骗分:)

11:14 t3>=50pts;

11:16 开始t4骗分

11:19 发现这次ccf给了1GB的空间:)

11:30 不能上厕所了,估分200+;

11:34 1=有问题吗??????

11:45 想上Luogu代码大赏

11:48 t4没骗到

11:50 发现t2忘写freopen了

11:55 交卷了

11:57 t4交上了!!!:)

*/
//freopen("travle.in","r",stdin);
//freopen("travle.out","w",stdout);
//I love ccf very much,more than other thing.