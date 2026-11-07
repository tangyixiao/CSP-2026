#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	int n,ssize=0,ans=0;
	string s;
	cin>>n;
	for(int i=0;i<n;i++){
		int tmp;
		char tmpc; 
		cin>>tmp>>tmpc;
		for(int j=ssize;j<ssize+tmp;j++)s[j]=tmpc;
		ssize+=tmp;
	}for(int i=0;i<ssize/2;i++){
		if(s[i]!=s[ssize-i-1]){
			ans++;
		}
	}cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}//知道有更高深的做法... 但还是选择了桶装 

























































/*
碎碎念： 
什么叫你n1e5完事er后还把ai设成1e9，你是人吗！！！！
 
妈的那1e14是他妈给人做的吗ccf,Crushy Cruck Fuck















滚木滚木滚木
滚木滚木滚木
滚木滚木滚木
滚木滚木滚木 
小彩蛋： 
出列！！！！！ 
几遍啦！
三遍啦！
得寸进尺啊！
还什么真的很帅...
真...白勺彳艮刂巾！！！！！！！
*/ 
/*
It's Fun To Stay In The Y.M.C.A!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
Meglovania ForEver!!!!
YOLO
You Only Lives Once/




你们知道二次元，可爱，嗜血，金发可以用来形容谁吗--------小堂吉诃德（划掉）迪奥 





















P+3Cl=加热=>PCl3 
三氯化磷...世界上压根就没有这样的氧化剂！！！！ 















Trick!?Treat!!
*/
