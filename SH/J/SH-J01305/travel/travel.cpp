#include<bits/stdc++.h>
using namespace std;
char x;
int c1,s1,ss1,c2,s2,ss2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>x;
	c1+=(int)(x-'0')*10;
	cin>>x;
	c1+=(int)(x-'0');
	cin>>x;
	s1+=(int)(x-'0')*10;
	cin>>x;
	s1+=(int)(x-'0');
	cin>>x;
	ss1+=(int)(x-'A');
	cin>>x;
	c2+=(int)(x-'0')*10;
	cin>>x;
	c2+=(int)(x-'0');
	cin>>x;
	s2+=(int)(x-'0')*10;
	cin>>x;
	s2+=(int)(x-'0');
	cin>>x;
	ss2+=(int)(x-'A');
	if(c1==c2){
		cout<<"1";
		if(s1==s2){
			cout<<"1";
			if((ss1<=2&&ss2<=2)||(ss1>=3&&ss2>=3)){
				cout<<"1";
				if((ss1==0&&ss2==1)||(ss1==1&&ss2==0)||(ss1==1&&ss2==2)||(ss1==2&&ss2==1)||(ss1==3&&ss2==5)||(ss1==5&&ss2==3)){
					cout<<"1";
				}else{
					cout<<0;
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
