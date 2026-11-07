#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,ans;
struct period{
	int length;
	char kind;
} p[200050];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin.tie(0);
	cout.tie(0);
	scanf("%lld",&n);
	//cout<<"I love cici";
	for(int i=1;i<=n;i++){
		cin>>p[i].length>>p[i].kind;
	}
	int head=0,tail=0,hp,tp,hre,tre;
	char hto,tto;
	hp=1,hto=p[1].kind,hre=p[1].length;
	tp=n,tto=p[n].kind,tre=p[n].length;
	while(hp<=tp){
		int mid;
		int flag=0;
		if(hre>tre) mid=tre,flag=2;
		else if(tre>hre) mid=hre,flag=3;
		else if(hre==tre)mid=hre,flag=1;
		if(hto!=tto) ans+=mid;
		if(flag==1){
			hp++;
			hto=p[hp].kind;
			hre=p[hp].length;
			tp--;
			tto=p[tp].kind;
			tre=p[tp].length;
		}else if(flag==2){
			hre=hre-tre;
			tp--;
			tto=p[tp].kind;
			tre=p[tp].length;
		}else if(flag==3){
			tre=tre-hre;
			hp++;
			hto=p[hp].kind;
			hre=p[hp].length;
		}
	}
	cout<<ans;
	return 0;
}