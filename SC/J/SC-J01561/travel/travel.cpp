//T1
//apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple apple
//Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple Apple
//APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE APPLE
//Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo Pingguo
//97 112 112 108 101  97 112 112 108 101  97 112 112 108 101  97 112 112 108 101  97 112 112 108 101  97 112 112 108 101  97 112 112 108 101  97 112 112 108 101  97 112 112 108 101  97 112 112 108 101  97 112 112 108 101  97 112 112 108 101  97 112 112 108 101  97 112 112 108 101  97 112 112 108 101  97 112 112 108 101  97 112 112 108 101  97 112 112 108 101  97 112 112 108 101

#include<bits/stdc++.h>
#define ll long long
using namespace std;
string a,b,c,d;
ll a1,a2,a3,a4;
int main(){
	freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
	
	cin>>a>>b>>c>>d;
	//swap(a,b),swap(c,d),swap(a,c),swap(b,d),swap(a,d),swap(b,c);
	if(a==c){
		a1=1;
		ll x=0,y=0;
		x=b[0]*1331+b[1];
		y=d[0]*1331+d[1];
		//cout<<x<<" "<<y<<">> \n";
		if(x==y){
			a2=1;
			char k,l;
			k=b[2],l=d[2];
			ll k1=k-'A'+1,l1=l-'A'+1;
			if(((k1<=3)&&(l1<=3))||((k1>=4)&&(l1>=4))){
				a3=1;
				//wei shen me bian hao shi ABCDF!!??
				if((k1<=3&&l1<=3&&abs(k1-l1)==1)||(k1>=4&&l1>=4)){
					a4=1;
				}else{
					a4=0;
				}
			}else{
				a3=0;
			}
		}else{
			a2=0;
		}
	}else{
		a1=0;
	}
	cout<<a1<<a2<<a3<<a4;
	return 0;
}






















































































































































// ru guo ni kan dao le zhe li, na me gong xi ni, zhe li shen me dou mei you.
// 676767676767676767676767676767676767676767676767676767676767676767676767676767676767676767676767676767