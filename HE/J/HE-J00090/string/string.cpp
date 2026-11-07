#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200010;
ll n,a[N],ans,cnt,sum;
char c[N];
void solve(){
	string s;
	for(int i=1; i<=n; i++){
		if(c[i]==c[i+1]){
			cnt++;
		}
	}if(cnt==n-1){
		cout<<0<<endl;
		return ;
	}else{
		for(int i=1; i<=n; i++){
			for(int j=1; j<=a[i]; j++){
				s+=c[j];
			}
		}ll len=s.length();
		for(int i=0; i<len; i++){
			if(s[i]!=s[len-i+1]){
				ans++;
			}else{
				continue;
			}
		}cout<<ans<<endl;
		return ;
	}return ;	
}int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(nullptr);
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>a[i]>>c[i];
	}solve();
	return 0;
}

/*
haohanxingkongli zishengnidebeiying
xinheyijingjiechengbing jiyihuaguoleidi
xiangxiangnenghuidaoguoqu zhonghuicunzaiwoxindi
suirantaobi taxiaoshizaimengli
richudehuangjing zaiciganjuedaoni
fengsonglainidehuxi yuesedaoyingzheqiji
yuanlainicongweiliqu momoshouhuzaizheli
wushengwuxing ruxingsuixing
wobuzaimimang sinianshiweiyidexingnang
mantiandexingguang youyikeshinideyuanwang
qianfangdelvbuzaigudanmanchang tiankongxianiwobuzaishouwang
qingshenggechang zaiwoshenpang
richudehuangjing zaiciganjuedaoni
fengsonglainidehuxi yuesedaoyingzheqiji
yuanlainicongweiliqu momoshouhuzaizheli
wushengwuxing ruxingsuixing
wobuzaimimang sinianshiweiyidexingnang
mantiandexingguang youyikeshinideyuanwang
qianfangdelvbuzaigudanmanchang tiankongxianiwobuzaishouwang
qingshenggechang zaiwoshenpang
hu~~~~~~~~
*/
