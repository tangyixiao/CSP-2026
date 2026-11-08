#include <bits/stdc++.h>
using namespace std;

string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	int a=s1[0]+s1[1];
	int b=s2[0]+s2[1];
	int c=s1[2];
	int d=s2[2];
	if (c1==c2){
		cout<<"1";
		if (a==b){
			cout<<"1";
			if (c==66||c==65){
				if (d==c+1||d==c-1){
					cout<<"11";
				}
				else{
					if(d==c+2){
						cout<<"10";
					}
					else{
						cout<<"00";
					}
				}
			}
			else if(c==67){
				if (d==c-1){
					cout<<"11";
				}
				else{
					if (d==c-2){
						cout<<"10";
					}
					else{
						cout<<"00";
					}
				}
			}
			else{
				if (c==68&&d==c+2){
					cout<<"11";
				}
				else if(c==70&&d==c-2){
					cout<<"11";
				}
				else{
					cout<<"00";
				}
			}
		}
		else{
			cout<<"000";
		}
	}
	else{
		cout<<"0000";
	}
	return 0;
}
