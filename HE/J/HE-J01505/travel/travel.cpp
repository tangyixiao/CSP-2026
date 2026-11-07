#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a1,a2,ans=0;
	string b1,b2;
	cin>>a1>>b1>>a2>>b2;
	if(a1==a2){
		ans+=1000;
		if(b1[0]==b2[0]&&b1[1]==b2[1]){
			ans+=100;
			if(b1[2]<='C'&&b2[2]<='C'||b1[2]>='D'&&b2[2]>='D'){
				ans+=10;
				if(b1[2]<='C'&&b2[2]<='C'){
					if(b1[2]=='B'||b2[2]=='B') ans+=1;
				}
				else ans+=1;
			}
		}
	}
	if(!ans) cout<<"0000";
	else cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
