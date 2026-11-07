#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		int ans=1;
		for(int i=0;i<2;i++){
			if(s1[i]!=s2[i]){
				ans++;
			}
		}
		if(ans==1){
			cout<<ans;
			int cnt=0;
			if(s1[2]=='C'&&s2[2]=='D'){
				cnt++;
			}
			else if(s2[2]=='C'&&s1[2]=='D'){
				cnt++;
			}
			if((s1[2]-s2[2])<=2&&(s1[2]-s2[2])>=-2&&cnt==0){
				cout<<1;
				if((s1[2]-s2[2])==1||(s1[2]-s2[2])==-1){
					cout<<1;
				}
				else{
					cout<<0;
				}
			}
			else{
				cout<<"00";
			}
		}
		else{
			cout<<"000";
		}
	}
	else{
		cout<<"0000";
	}
	return 0;
}