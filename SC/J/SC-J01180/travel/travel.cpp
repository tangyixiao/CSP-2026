#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2,x,y;
	string s1,s2;
	char s_c1,s_c2,s_l1,s_l2;
	cin>>c1>>s1>>c2>>s2;
	for(int i=0;i<3;i++){
		if(i<2){
			s_l1+=s1[i];
		}else{
			s_c1=s1[i];
		}
	}
	for(int i=0;i<3;i++){
		if(i<2){
			s_l2+=s2[i];
		}else{
			s_c2=s2[i];
		}
	}
	x=s_c1;
	y=s_c2;
	if(c1==c2){
		cout<<1;
		if(s_l1==s_l2){
			cout<<1;
			if(((x<=67)&&(y<=67))||((x>67)&&(y>67))){
				cout<<1;
				if((x-y==1)||(y-x==1)){
					cout<<1;
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