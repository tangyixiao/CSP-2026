#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2,s1,s2;
	char a1,a2;
	cin>>c1>>s1>>a1>>c2>>s2>>a2;
	if(c1==c2){
		cout<<"1";
		if(s1==s2){
			cout<<"1";
			if(((a1=='A'||a1=='B'||a1=='C')&&(a2=='A'||a2=='B'||a2=='C'))||((a1=='D'||a1=='E')&&(a2=='D'||a2=='E'))){
				cout<<"1";
				if(a1+1==a2||a1-1==a2){
					cout<<"1";
				}
				else{
					cout<<"0";
				}
			}
			else{
				cout<<"00";
			}
		}
		else{
			cout<<"000";
		}
	}
	else{
		cout<<"0000";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
