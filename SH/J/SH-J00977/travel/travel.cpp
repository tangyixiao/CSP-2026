#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel1.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	int  a=0;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		if(s1[0]==s2[0] && s1[1]==s2[1]){
			cout<<1;
			for(int i=0;i<5;i++){
				if(s1[2]==char('a'+i)){
					a=i+1;
				}
				for(int j=0;j<5;j++){
					if(s2[2]==char('a'+j)){
						if(a>=4 && a<=5 && j>=4 &&j<=5){
							cout<<1;
							if(a==j+1 || a==j-1){
								cout<<1;
							}
							else{
								cout<<0;
							}
						}
						else if(a>=1 && a<=3 && j>=1 &&j<=3){
							cout<<1;
							if(a==j+1 ||a==j-1){
								cout<<1;
							}
							else{
								cout<<0;
							}
						}
						else{
							cout<<00;
						}
					}
				}
			}
		}
		else{
			cout<<000;
		}
	}
	else{
		cout<<0000;
	}
	return 0;
	
}
