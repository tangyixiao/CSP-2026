#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
char ans[10];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	for(int i=1;i<=4;i++){
		ans[i]='0';
	}
	if(c1[0]==c2[0] and c1[1]==c2[1]){
		ans[1]='1';
		if(s1[0]==s2[0] and s1[1]==s2[1]){
			ans[2]='1';
			if(s1[2]<='C' and s1[2]>='A' and s2[2]<='C' and s2[2]>='A'){
				ans[3]='1';
				if(abs(s1[2]-s2[2])==1){
					ans[4]='1';
					for(int i=1;i<=4;i++){
						cout<<ans[i];
					}
				}
				else {
					for(int i=1;i<=4;i++){
						cout<<ans[i];
					}
				}
			}
			else if(s1[2]<='F' and s1[2]>='D' and s2[2]<='F' and s2[2]>='D'){
				ans[3]='1';
				ans[4]='1';
				for(int i=1;i<=4;i++){
					cout<<ans[i];
				}
			}
			else{
				for(int i=1;i<=4;i++){
					cout<<ans[i];
				}
			}
		}
		else{
			for(int i=1;i<=4;i++){
				cout<<ans[i];
			}
		}
	}
	else{
		for(int i=1;i<=4;i++){
			cout<<ans[i];
		}
	}
	return 0;
}
