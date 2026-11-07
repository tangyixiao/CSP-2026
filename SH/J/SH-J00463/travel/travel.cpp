#include<bits/stdc++.h>
using namespace std;
char a[4],b[4];
int c,d;
bool tyc(char e,char f){
	int g=int(e)-64;
	int h=int(f)-64;
	if(g>=1&&g<=3){
		if(h>=1&&h<=3) return 1;
		else return 0;
	}else{
		if(h>=1&&h<=3) return 0;
		else return 1;
	}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>c;
	for(int i=1;i<=3;i++) cin>>a[i];
	cin>>d;
	for(int i=1;i<=3;i++) cin>>b[i];
	if(c==d){
		cout<<'1';
		if(a[1]==b[1]&&a[2]==b[2]){
			cout<<'1';
			if(tyc(a[3],b[3])){
				cout<<'1';
				if(int(a[3]-b[3])==1||int(a[3]-b[3])==-1) cout<<1;
				else cout<<'0';
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
	return 0;
}
