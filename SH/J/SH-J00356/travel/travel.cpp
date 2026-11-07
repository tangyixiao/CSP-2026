#include <bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<1;
			int r,x;
			if(s1[2]=='F'||s1[2]=='D'){
				r=2;
			}else{
				r=1;
			}
			if(s2[2]=='F'||s2[2]=='D'){
				x=2;
			}else{
				x=1;
			}
			if(r==x){
				cout<<1;
				if(x==2){
					cout<<1;
				}else if(s1[2]=='B'||s2[2]=='B'){
					cout<<1;
				}else{
					cout<<"0";
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
	fclose(stdin);
	fclose(stdout);
	return 0;
}
