#include<bits/stdc++.h>
using namespace std;
struct rx{
	string cx;
	string zw;
};
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	rx r,x;
	cin>>r.cx>>r.zw>>x.cx>>x.zw;
	int o=0,t=0,h=0,f=0;
	if(r.cx==x.cx){
		o=1;
		if(r.zw[0]==x.zw[0]&&r.zw[1]==x.zw[1]){
			t=1;
			if((r.zw[2]>67&&x.zw[2]>67)||(r.zw[2]<=67&&x.zw[2]<=67)){
				h=1;
				if(int(r.zw[2])-int(x.zw[2])==1||int(x.zw[2])-int(r.zw[2])==1){
					f=1;
				}
			}
		}
	}
	cout<<o<<t<<h<<f;
	return 0;
}
