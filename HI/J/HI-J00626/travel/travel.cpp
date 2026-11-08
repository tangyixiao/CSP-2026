#include<bits/stdc++.h>
using namespace std;
struct st{
	int cx;
	string zh;	
}a[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a[1].cx>>a[1].zh;
	cin>>a[2].cx>>a[2].zh;
	if(a[1].cx==a[2].cx){
		if(a[1].zh[0]==a[2].zh[0] and a[1].zh[1]==a[2].zh[1]){
			if(a[1].zh[2]+a[2].zh[2]=='F'+'D')cout<<"1111";
			else if(a[1].zh[2]+a[2].zh[2]>='A'+'B' and (a[1].zh[2]!='D' and a[2].zh[2]!='D' and a[1].zh[2]+a[2].zh[2]<='B'+'C')){
				if((a[1].zh[2]+a[2].zh[2])%2==1)cout<<"1111";
				else cout<<"1110";
			}else cout<<"1100";
		}else cout<<"1000";
	}else cout<<"0000";
	return 0;
}

