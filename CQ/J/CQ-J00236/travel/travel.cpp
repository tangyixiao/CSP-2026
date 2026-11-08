#include<iostream>
using namespace std;
char c1[3],c2[3],s1[4],s2[4];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	cout<<(c1[0]==c2[0]&&c1[1]==c2[1]);
	cout<<((c1[0]==c2[0]&&c1[1]==c2[1])&&(s1[0]==s2[0]&&s1[1]==s2[1]));
	cout<<((c1[0]==c2[0]&&c1[1]==c2[1])&&(s1[0]==s2[0]&&s1[1]==s2[1])&&((s1[2]=='D'||s1[2]=='F')==(s2[2]=='F'||s2[2]=='D')));
	cout<<((s1[0]==s2[0]&&s1[1]==s2[1])&&(c1[0]==c2[0]&&c1[1]==c2[1])&&((s1[2]-s2[2]==1||s1[2]-s1[2]==1)&&(!((s1[2]=='C'&&s2[2]=='D')||(s1[2]=='D'&&s2[2]=='C')))));
	return 0;
}
//100
/*
//~0824,ee,wo ts xq wg wo freopen zf mo xp, ta wj dj le.
//		fa xm zi ji wh ji bj zi le.
//		jq wo ve yu wf uv pk hd xp dm kc ih xn zo wf?
//09:07,t1 yz dm kg aa.
//		1024MiB,gz le.
//09:12,t2 yz dm nj aa.
//09:42,t2 TLE,wo tn ti zo t3 qu le.
//09:50,t3 wj qr bu hv,wh ji fu xi le aa!
//		xm zd kd ui gd t2.
//10:00,66 cqbz zd kc ui. yk yu tk li gj rc aa!
//10:18,t2 bu hv gd yh li 3 hd yc 5000ms 
//		xm zd zo t4
//		t4 ui da mo ni ? wo ts xt yc AK le ba
//		snickers-1
//10:54,wo ph bm de ll ge rf yi jk kd ui mo yu le 
//11:01,wj ug t4,go rj go bu ln yh li.
//11:07,DevCpp bg kv le us xp code. 
//11:09.t4 hd ui bu hv xp.
//		0n1y 5o m1nute??
//11:12,wo de ts yi vi zd ju uz?
//11:35,t4 yh li 1 go le
//11:38,t4 ui k <- so yz de pd 
//		jt wh
//11:42,teacher uo 45 vi hz bu ng uh ce so?
//		vf li t3,t4
//11:44,kd ui bd lj.
//11:51,teacher yz go ld ti xk bu yc jm zi mu lu
//11:53,cqbz ys de ui 10 dd i5-10500 @3.10 GHz
//11:56,17 xn ui ww gr ji ?
//CSP-J 2026 RP++ 
//jing ri chang ying zai shou , he shi fu zhu cang long
*/
