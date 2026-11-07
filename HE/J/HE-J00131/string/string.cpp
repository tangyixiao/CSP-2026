#include<bits/stdc++.h>
using namespace std;
int a[272560];
char c[272560];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int nnn; cin>>nnn;if(nnn==1) cout<<0;
	else if(nnn==2){
		int a1,b1; char c1,d1;
		cin>>a1>>c1>>b1>>d1;
		string s="";
		for(int i=1;i<=a1;i++) s+=c1;
		for(int i=1;i<=b1;i++) s+=d1;
		int i=0,j=a1+b1-1,cnt=0;
		while(i<j){
			if(s[i]!=s[j]) cnt++;
			i++,j--;
		} cout<<cnt<<endl;
	}
	else {
		string s="";int j1=0;
		for(int i=2;i<=nnn;i++){
			cin>>a[i]>>c[i]; j1+=a[i];
			for(int j=1;j<=a[i];j++){
				s+=c[i];
			}
		} j1--;
		int i1=0,cnt=0;
		while(i1<=j1){
			if(s[i1]!=s[j1]){
				cnt++; 
			} i1++,j1--;
		}
		cout<<cnt<<endl;
	}
	
	return 0;
}
/*
《璀璨冒险人》
这个世界是什么模样？走过山水一程梦一场？ 
那迎风呐喊的海浪！要多久？多久才会遇上？
冒险的人是否会感伤？终其璀璨一生谁收藏？
那深埋心里的愿望，要多久？多久才会登场？
沿途一身泥泞跌撞的是我 认同缓行不回头的更是我
就让一路曲折 每一道伤口 洗净我的脆弱！
原来：
	咽回去的泪 才能淹没了脆弱
	你发誓更勇敢 一生与梦相拥
	还想要继续么？要逆风不退啊！
	让璀璨住进你眼眸
别怕：
	未来的模样辜负 曾经的凝望
	有多少理想 就有多少次传唱
	那沿途的风浪 也不过就这样
	这一路光景 有你在身旁！
他们说：
	要越过前方风沙必须低着头
他们说：
	要绕过蜿蜒的河才能往前走
他们说：
	烫要放手，太远必须换路口
如果：
	得不到人们认同那就不算拥有
没人能够：
	定义谁的一生应该怎么活
没人能够：
	决定谁的天空是什么颜色
没人：
	未梦就先懂
只是：
	单纯相信着：
		背向光的英雄，每张轮廓：出自平凡的沉默……
*/ 
