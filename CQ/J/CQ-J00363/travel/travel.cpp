#include<bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	else if(s1[0]!=s2[0]||s1[1]!=s2[1]){
		cout<<"1000";
		return 0;
	}
	else if((s1[2]-'A'+1<=3&&s2[2]-'A'+1>=4)||(s2[2]-'A'+1<=3&&s1[2]-'A'+1>=4)){
		cout<<"1100";
		return 0;
	}
	else if(abs((s1[2]-'A'+1)-(s2[2]-'A'+1))!=1){
		cout<<"1110";
		return 0;
	}
	else{
		cout<<"1111";
		return 0;
	}
	return 0;
}
/*AK我吃一吨huang_hym！！！（一个退役OIer的最后一餐)*/
//chenchaoxin is a big gay
//ccx lfy 99
//         亡                亡          亡 
//我是     口     人 ，去    口  ，不    口  ，滚~~~~~ 
//       月贝凡            月贝凡      月贝凡
//古诗词翻译：隐（赢）者自怡悦 ： winner can be happy by theirselves

