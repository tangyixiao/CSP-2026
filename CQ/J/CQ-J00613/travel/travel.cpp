#include<bits/stdc++.h>
using namespace std;

int c_1,c_2;
string s_1,s_2;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c_1>>s_1>>c_2>>s_2;
	if(c_1==c_2){
		cout<<1;
		if(s_1[0]==s_2[0]&&s_1[1]==s_2[1]){
			cout<<1;
			char x=s_1[2],y=s_2[2];
			if((x<='C'&&y<='C')||(x>'C'&&y>'C')){
				cout<<1;
				if(x==y+1||y==x+1){
					cout<<1;
				}else{
					cout<<"0\n";
					return 0; 
				}
			}else{
				cout<<"00\n";
				return 0;
			}
		}else{
			cout<<"000\n";
			return 0;
		}
	}else{
		cout<<"0000\n";
		return 0;
	}
	
	return 0; 
}
