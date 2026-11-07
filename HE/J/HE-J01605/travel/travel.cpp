#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) {
		cout<<"1";
		string se1="",se2="";
		for(int i=0;i<2;i++){
			se1+=s1[i];
		}
		for(int i=0;i<2;i++){
			se2+=s2[i];
		}	
		int on,tw;
		if(se1==se2){
			cout<<"1";
			se1=s1[2];
			se2=s2[2];
			if(se1[0]>='D'){
				on=2;
			}else{
				on=1;
			}
			if(se2[0]>='D'){
				tw=2;
			}else{
				tw=1;
			}
			if(on==tw){
				cout<<"1";
				if(on==1){
					if(se1[0]>se2[0]){
						if(se1[0]-se2[0]==1){
							cout<<"1";
						} else{
							cout<<"0";
						}
					}else{
						if(se2[0]-se1[0]==1){
							cout<<"1";
						}else{
							cout<<"0";
						}
					}
				}else{
					cout<<"1";
				}
			}else{
				cout<<"00";
				return 0;
			}
		}else{
			cout<<"000";
			return 0;
		}	
	}else{
		cout<<"0000";
		return 0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
