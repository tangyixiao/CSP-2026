//9:20开始
#include <bits/stdc++.h>
using namespace std;
int n,t;
char c;
int p1,p2;
vector <char> v;
//走暴力 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d %c",&t,&c);
		for(int j=1;j<=t;j++)
			v.push_back(c);	
	}
	long long sum=0;
	for(p1=0,p2=v.size()-1;p1<=p2;p1++,p2--){
		if(v[p1]!=v[p2])sum++;
	}
	printf("%lld",sum);
} 
//9:31 #5、6卡崩
//9:31 #3TLE
//100+50+35+65=250pts 
//9:39决定卡常 

/*(上接travel)
大弦嘈嘈如急雨，小弦切切如私语
嘈嘈切切错杂弹，大珠小珠落玉盘

间关莺语花地滑，幽咽流泉水下滩
冰泉冷涩弦凝绝，凝绝不通声间歇
别有幽愁暗恨生，此时无声胜有声
银瓶乍破水浆迸，铁骑突出刀枪鸣
曲终收拨当心画，四线一声如裂帛 
东船西坊悄无言 ，唯见江心秋月白 

沉吟放拨插弦中，整顿衣裳起敛容 
自言本是京城女，家在虾蟆陵下住
十三学得琵琶成，名数教坊第一部
曲罢常教善才服，妆成每被秋娘妒

（下见and） 
*/
