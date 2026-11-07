#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	string c1="",s1="",c2="",s2="";
	cin>>c1>>s1>>c2>>s2;
	char a1,a2;
	int jjs;
	a1=c1[0];
	a2=c2[0];
	if(a1==a2){
		a1=c1[1];
		a2=c2[1];
		if(a1==a2){
			a1=s1[0];
			a2=s2[0];
			if(a1==a2){
				a1=s1[1];
				a2=s2[1];
				if(a1==a2){
					a1=s1[2];
					a2=s2[2];
					if(a1=='D' || a1=='F') jjs++;
					if(a2=='D' || a2=='F') jjs++;
					if(jjs==2 || jjs==0){
						if(abs(a2-a1)==1){
							cout<<"1111";
						}else{
							cout<<"1110";
						}
					}else{
						cout<<"1100";
					}
				}else{
					cout<<"1000";
				}
			}else{
				cout<<"1000";
			}
		}else{
			cout<<"0000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
}