#include<bits/stdc++.h>
using namespace std;
int Rc,Cc;
string Rs,Cs;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>Rc>>Rs>>Cc>>Cs;
	if(Rc==Cc){
		cout<<1;
		if(Rs[0]==Cs[0]&&Rs[1]==Cs[1]){
			cout<<"1";
			if((Rs[2]<='C'&&Cs[2]<='C')||(Rs[2]>'C'&&Cs[2]>'C')){
				cout<<"1";
				if((Rs[2]+1==Cs[2]||Rs[2]-1==Cs[2])&&((Rs[2]!='C'&&Cs[2]!='D')||(Rs[2]!='D'&&Cs[2]!='C'))){
					cout<<"1";
				}else cout<<"0";
			}else cout<<"00";
			
		}
		else cout<<"000";
	}else {
		cout<<"0000";
	}
	
	
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
