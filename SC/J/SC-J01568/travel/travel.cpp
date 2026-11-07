#include<bits/stdc++.h>
using namespace std;
char r,x;
int cr,sr,cx,sx;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","W",stdout);
	cin>>cr>>sr>>r>>cx>>sx>>x;
	if(cr!=cx){
		cout<<"0000";
	}else{
		if(sr!=sx){
			cout<<"1000";
		}else{
			if(((r=='A'||r=='B'||r=='C')&&(x=='A'||x=='B'||x=='C'))||((r=='D'||r=='F')&&(x=='D'||x=='F'))){
				if((r==x+1||r==x-1)&&((r!='C'&&x!='D')||(r!='D'&&x!='C'))){
					cout<<"1111";
				}else{
					cout<<"1110";
				}
			}else{
				cout<<"1100";
			}
		}
	}
	return 0;
}