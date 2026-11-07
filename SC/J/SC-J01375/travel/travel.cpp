#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string c_1,c_2,x_1,x_2;
signed main(){
	cin.tie(0);
	cout.tie(0);
	/**
	 * 打开评测开关！
	 * 打开评测开关！
	 * 打开评测开关！
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 * 打开评测开关
	 */
#define  _TO_JUDGE_On_SEVer 1
#if _TO_JUDGE_On_SEVer
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
#endif
	cin>>c_1>>c_2>>x_1>>x_2;
	//车厢 位置 / 车厢 位置
	if(c_1!=x_1){
		cout<<"0000";
		return 0;
	}
	cout<<"1";
	ll _c_2_num_=(c_2[0]-'0')*10+(c_2[1]-'0');
	ll _x_2_num_=(x_2[0]-'0')*10+(x_2[1]-'0');
	if(_c_2_num_!=_x_2_num_){
		cout<<"000";
		return 0;
	}
	cout<<"1";
	bool pass_c_AC='A'<=c_2[2] && c_2[2]<='C';
	bool pass_x_AC='A'<=x_2[2] && x_2[2]<='C';
	bool _AC_=pass_c_AC&&pass_x_AC;
	bool _DF_=(c_2[2]=='D'&&x_2[2]=='F')||(c_2[2]=='F'&&x_2[2]=='D');
	if( !(_AC_||_DF_) ){
		cout<<"00";
		return 0;
	}
	cout<<"1";
	if(_DF_){
		cout<<"1";
		return 0;
	}
	bool _S_AC_=(c_2[2]=='A'&&x_2[2]=='C')||(c_2[2]=='C'&&x_2[2]=='A');
	if(!_S_AC_){
		cout<<"1";
		return 0;
	}
	cout<<"0";
	return 0;
}