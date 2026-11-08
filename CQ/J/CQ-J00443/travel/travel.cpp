#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool ok=1;
//水题 
bool lr(char ch){return ch<='C';}
int val(char ch){
	int ret=ch-'A';
	if(ch=='F')ret--;
	return ret;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
//	freopen("travel.in","r",stdin);
//	freopen("travel.out","w",stdout);
//	freopen("travel.in","w",stdin);
//	freopen("travel.out","r",stdout);
//	freopen("travel.in","w",stdout);
//	freopen("travel.out","r",stdin);
//	freopen("travel.in","r",stdout);
//	freopen("travel.out","w",stdin);
//	feropen
//	freoprn
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2)ok=0;
	cout<<ok;
	if(s1.substr(0,2)!=s2.substr(0,2))ok=0;
	cout<<ok;
	if(lr(s1[2])!=lr(s2[2]))ok=0;
	cout<<ok;
	if(abs(val(s1[2])-val(s2[2]))!=1)ok=0;
	cout<<ok;
	return 0;
}/*
梦 
	天黑下去的时候，塔楼上飞来一颗紫色的光星。
	站在广场上的人们都惊叹起来，而这时，一位穿紫衣的少女径直向塔楼下的广场走去。
	少女一抬掌，同样的光星便从她手心飞出。
	这时广场上走来几个人，而少女刚扔出一颗光星。
	“不会被他们发现了吧？”
	她定睛看到一个同学，他似乎看到了她。
	她追上去把他截住。
	“你也来学魔法吧。” 
	他只是笑笑，然而他脚下的地砖开始发光。 
	然而人们只是觉得这是场烟花秀罢了。他们是不会相信魔法的。
	少女手中一闪，便拿出一份卷轴，她看了看，又急匆匆地收好。
	她想，如果今天能突破瓶颈，该多好。
	少女的手掌心出现了几道金色纹路。她试着用魔力冲破那道屏障，然而又失败了。
	她召唤出一颗光星，这颗光星的边缘竟然是金色的！
	只是，它有个紫色的核心。
作者：我是真的想续的。太hyw了。 
*/
