#include <bits/stdc++.h>
using namespace std;
int a1,b1,ans[5]={0};
string a2,b2;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>a2>>b1>>b2;
	if(a1==b1){
		ans[1]=1;
		if(a2[1]==b2[1]){
			ans[2]=1;
			if(a2[2]<='C'&&b2[2]<='C'){
				ans[3]=1; 
				if(a2[2]+1==b2[2]||a2[2]==b2[2]+1){
					ans[4]=1;
				}else{
					ans[4]=0;
				}
			}else if(a2[2]>'C'&&b2[2]>'C'){
				ans[3]=1; 
				ans[4]=1;
			}
		}else{
			ans[2]=0;
		}
	}else{
		for(int i =1;i<=4;i++){
			cout<<ans[i];
		}
		return 0;
	}
		for(int i =1;i<=4;i++){
			cout<<ans[i];
		}
	return 0;
}