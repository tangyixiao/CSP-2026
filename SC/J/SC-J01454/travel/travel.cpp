#include<bits/stdc++.h>
using namespace std;
int main(){
	string C1,S1,C2,S2;
	int ans[5]={0,0,0,0,0};
	cin>>C1>>S1>>C2>>S2;
	if(C1[0]==C2[0] and C1[1]==C2[1]){
		ans[1]=1;
		if(S1[0]==S2[0] and S1[1]==S2[1]){
			ans[2]=1;
			if((S1[2]<='C' and S2[2]<='C') or (S1[2]>'C' and S2[2]>'C')){
				ans[3]=1;
				if(abs(S1[2]-S2[2])==1) ans[4]=1;
			}
		}
	}
	for(int i=1;i<=4;i++) cout<<ans[i];
	return 0;
}