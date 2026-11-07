#include<bits/stdc++.h> 
using namespace std;
string c1,s1,c2,s2;
int f=1;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		for(int i=0;i<=1;i++){
			if(s1[i]!=s2[i]){
				f=0;
				break;	
			}
		}if(f==1){
			cout<<1;
			if((int)s1[2]<68&&(int)s2[2]<68||(int)s1[2]>67&&(int)s2[2]>67){
				cout<<1;
				if((s1[2]=='C'&&s1[2]=='D')||(s2[2]=='C'&&s1[2]=='D')||(abs((int)s1[2]-(int)s2[2])>=2)){
					cout<<"0";
				}else{
					cout<<1;
				}
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}
	else{
		cout<<"0000";
	}		
	return 0;
}