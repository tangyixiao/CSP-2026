#include<bits/stdc++.h>
#define ll int64_t
#define endl '\n'
using namespace std;
string c1,s1,c2,s2;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2) cout<<"0000";
	else{
		if(s1.substr(0,2)!=s2.substr(0,2)) cout<<"1000";
		else{
			cout<<"11";
			if((s1[2]>='A' && s1[2]<='C' && s2[2]>='A' && s2[2]<='C') || (s1[2]>='D' && s1[2]<='F' && s2[2]>='D' && s2[2]<='F')){
				cout<<'1';
				if(abs(ll(s1[2]-s2[2]))==1) cout<<'1';
				else cout<<'0';
			}
			else cout<<"00";
		}
	}
	return 0;
}
/*
自三峡七百里中，两岸连山，略无阙处。重岩叠嶂，隐天蔽日。自非亭午夜分，不见曦月。
风烟俱净，天山共色。从流飘荡，任意东西。自富阳至桐庐一百余里，奇山异水，天下独绝。
水皆缥碧，千丈见底。游鱼细石，直视无碍。急湍甚箭，猛浪若奔。
元丰六年十月十二日夜，解衣欲睡，月色入户，欣然起行。念无与为乐者，遂至承天寺寻张怀民。怀民亦未寝，相与步于中庭。
庭下如积水空明，水中藻，荇交横，盖竹柏影也。何夜无月，何处无竹柏，但少闲人如吾两人者耳。
渡远荆门外，来从楚国游。山随平野尽，江入大荒流。月下飞天镜，云生结海楼。仍怜故乡水，万里送行舟。
*/