//8:15沈某驾到 
//8:21创建此文件
//先写吧。洛谷fc1st。
//8:29解密码居然是Trick||(或)Treat!不给糖就捣蛋！今天万圣节！ 
//8:33T1居然是17节的CR400BF-B! 
#include <bits/stdc++.h>
#define st string
using namespace std;
st c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1;
	cin>>c2>>s2;
	if(c1==c2) {
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	
	if(s1[0]==s2[0] && s1[1]==s2[1]){
		cout<<1;
	} else{
		cout<<"000";
		return 0;
	}
	//8:49判过道 
	if(s1[2]=='F') {
		if(s2[2]=='D'){
			cout<<1;
		}else{
			cout<<"00";
			return 0;
		}
	}
	else if(s1[2]=='D') {
		if(s2[2]=='F'){
			cout<<1;
		}else{
			cout<<"00";
			return 0;
		}
	}//D侧 
	else {
		if(s2[2]=='A' ||s2[2]=='B' ||s2[2]=='C'){
			cout<<1;
		}else{
			cout<<"00";
			return 0;
		}
	}//此刻已排除s1D、F，故判S2是否ABC 
	
	//8:55开始判相邻
	if(s1[2]=='F') {cout<<((s2[2]=='D')? 1:0);}
	else if(s1[2]=='D') cout<<((s2[2]=='F')? 1:0);//D侧
	else if(s1[2]=='B') cout<<((s2[2]=='A' || s2[2]=='C')? 1:0); //s1中
	else cout<<((s2[2]=='B')? 1:0);//s1侧，s2必中
	
	//8:58 T1over 
	return 0;
} 
//9:05经验证T1 4、5瓦 
//9:16fixed,100+50+35+65=250，歇会。10:17;
/*浔阳江头夜送客，枫叶荻花秋瑟瑟
主人下马客在船，举酒欲饮无管弦
醉不成欢惨将别，别时茫茫江浸月
忽闻水上琵琶声，主人忘归客不发
循声暗问弹者谁，琵琶声停语欲迟

移船相近邀相见，添酒回灯重开宴
千呼万唤始出来，犹抱琵琶半遮面
转轴拨弦三两声，未成曲调现有请
弦弦掩抑声声思，似诉平生不得志
低眉信手续续弹，说尽心中无限事
轻拢慢捻抹复挑，初为霓裳后六幺
（下见string） 
*/
