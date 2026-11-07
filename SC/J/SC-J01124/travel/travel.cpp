#include<bits/stdc++.h>
using namespace std;

string c1,s1,c2,s2;
map<char,int> ju;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ju['A']=1,ju['B']=1,ju['C']=1,ju['D']=2,ju['E']=2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<'1';
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<'1';
			int x=ju[s1[2]],y=ju[s2[2]];
			if(x==y){
				cout<<'1';
				if(abs(s1[2]-s2[2])==1){
					cout<<'1';
				}else{
					cout<<'0';
				}
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	
	return 0;
}