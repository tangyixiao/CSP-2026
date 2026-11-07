#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int x1,y1;
	string x2,y2;
	cin>>x1>>x2>>y1>>y2;
	if(x1==y1){
		cout<<"1";
		if(x2[0]==y2[0]&&x2[1]==y2[1]){
			cout<<"1";
			char t1=x2[2];
			char t2=y2[2];
			if((t1=='A'||t1=='B'||t1=='C')&&(t2=='A'||t2=='B'||t2=='C')){
				cout<<"1";
			}
			else if((t1=='D'||t1=='F')&&(t2=='D'||t2=='F')){
				cout<<"1";
			}
			else cout<<"0";
			int x=abs(t1-t2);
			if(x==1){
				if(t1=='C'&&t2=='D'){
					cout<<"0";
				}
				else cout<<"1";
			}
			else if(t1=='D'&&t2=='F'){
				cout<<"1";
			}
			else cout<<"0";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}
