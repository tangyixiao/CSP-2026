#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<1;
			int x=s1[2]-'A';
			int y=s2[2]-'A';
			if((x==3&&y==5)||(y==3&&x==5)){
				cout<<1;
				cout<<1;
			}
			else{
				if(x<=2&&y<=2){
					cout<<1;
					if(((x-y)==1)||((x-y)==-1)){
						cout<<1;
					}
					else{
						cout<<0;
					}
				}
				else{
					cout<<0;
					cout<<0;
				}
			}
		}
		else{
			cout<<0;
			cout<<0;
			cout<<0;
		}
	}
	else{
		cout<<0;
		cout<<0;
		cout<<0;
		cout<<0;
	}
	return 0;
}
