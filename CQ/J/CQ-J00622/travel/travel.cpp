#include<bits/stdc++.h>
using namespace std;
string c1,c2,c3,c4;
int ans[10];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>c2>>c3>>c4;
	if(c1==c3){
		ans[1]=1;
		if((c2[0]==c4[0])&&(c2[1]==c4[1])){
			ans[2]=1;
			if((c2[2]<='C'&&c4[2]<='C')||(c2[2]>'C'&&c4[2]>'C')){
				ans[3]=1;
				int r=c2[2],x=c4[2];
				if(abs(r-x)==1){
					ans[4]=1;
				}else{
					ans[4]=0;
				}
			}else{
				ans[3]=0;
			}
		}else{
			ans[2]=0;
		}
	}else{
		ans[1]=0;
	}
	for(int i=1;i<=4;i++){
		cout<<ans[i];
	} 
	return 0;
}
