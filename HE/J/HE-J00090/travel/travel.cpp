#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string c1,s1,c2,s2;
void solve(){
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		if(s1[0]==s2[0] and s1[1]==s2[1]){
			if((s1[2]=='A' and s2[2]=='B') or (s1[2]=='B' and s2[2]=='C') or (s1[2]=='A' and s2[2]=='C') or (s1[2]=='D' and s2[2]=='F') or (s1[2]=='B' and s2[2]=='A') or (s1[2]=='C' and s2[2]=='A') or (s1[2]=='B' and s2[2]=='A') or (s1[2]=='F' and s2[2]=='D')){
				if((s1[2]=='A' and s2[2]=='B') or (s1[2]=='B' and s2[2]=='C') or (s1[2]=='D' and s2[2]=='F') or (s1[2]=='B' and s2[2]=='A') or (s1[2]=='C' and s2[2]=='B') or (s1[2]=='F' and s2[2]=='D')){
					cout<<1111;
					return ;
				}else{
					cout<<1110;
					return ;
				}
			}else{
				cout<<1100;
				return ;
			}
		}else{
			cout<<1000;
			return ;
		}
	}else{
		cout<<"0000";
		return ;
	}return ;
}int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(nullptr);
	solve();
	return 0;
}

/*
shanfengchuierguo zhetiaoluduoquzhe
toudingfanxingzaishanshuo erwuyingdesuhuo
yemeiyouliuxingzhuiluo huaiyidangchudezhizhuo bietuisuo huwo~~~
nianshaoqingkuangguo yecengjingpanghuangshicuo youniyouwo
zaichangzheshouge wulunhuannanheluopo shenpangshinibuhuijimo
xinzhongjianxinnaguangming xieshouzouchunining
zheyiluniwogongqianxing
jingwangbicideyanjing jianshoucikeyueding
zhonghuizaiciyunitongxing
zhonghuiyunitongxing yunitongxing wooo~~~
zhonghuiyunitongxing yunitongxing tongxing
xinzhongjianxinnaguangming xieshouzouchunining
zheyiluniwogongqianxing
jingwangbicideyanjing jianshoucikeyueding
zhonghuizaiciyunitongxing
*/
