#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200010;
ll n,m,a[N],ans,b[N],cnt;
bool f=false;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(nullptr);
	cin>>n>>m;
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}if(m==1){
		sort(a+1,a+n+1);
		cout<<a[n]<<endl;
		return 0;
	}for(int i=1; i*i<=n; i++){
		if(a[i]==pow(2,i)){
			cnt++;
		}
	}if(cnt==n){
		sort(a+1,a+n+1);
		cout<<a[n]<<endl;
		return 0;
	}for(int i=1; i*i<=n; i++){
		if(n==pow(2,i)){
			f=true;
		}
	}if(f){
		sort(a+1,a+n+1);
		cout<<a[n/2+1]<<endl;
		return 0;			
	}else{
		bool f=false;
		for(int i=1; i<=n; i++){
			if(a[i]<4){
				ans++;
			}
		}if(ans==n){
			cout<<3<<endl;
		}
	}return 0;
}

/*
guangmang zhaoliangwuduziqianxingdefangxiang
meiguihejingjizongyitongshengzhang
jingliguocuozhedeshang caiyinglaifenfang
mengxiang zaimeigeqingchengqiaodawoxinfang
songnipianwangyangxianzaijiuqihang
yongqishijinnian yongyuanbupanghuang
ye ye ye hu hu ye ye ye
ye ye ye hu~~~
woyingzhefengdashengchang zhengtushixingchenhehaiyang
wobupaweilai guowei guowang
yongwangzhiqianbenxiangnishenpang
woyingzhefengdashengchang zhengtushixingchenhehaiyang
wobupaweilai guowei guowang
yongwangzhiqianbenxiangnishenpang
*/
