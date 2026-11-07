#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main(){
	freopen("travel.in","w",stdin);
	freopen("travel.out","r",stdout);
	cin>>a>>b>>c>>d;
	int h=a[1];
	int g=c[1];
	int w=b[1];
	int m=d[1];
	int n=b[2];
	int u=d[2];
	if(h==g){
		cout<<1;
		if(w==m){
			cout<<1;
			if(b[2]=='A'||b[2]=='B'||b[2]=='C'){
				if(d[2]=='A'||d[2]=='B'||d[2]=='C'){
					cout<<1;
					if(max(n,u)-min(n,u)==1){
						cout<<1;
					}else{
						cout<<0;
					}
				}else{
					cout<<"00";
				}
			}else if(b[2]=='D'||b[2]=='F'){
				if(d[2]=='D'||d[2]=='F'){
					cout<<"11";
				}else{
					cout<<"00";
				}
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