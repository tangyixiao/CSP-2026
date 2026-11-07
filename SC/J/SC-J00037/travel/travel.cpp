#include<bits/stdc++.h>
using namespace std;
string a[5];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=1;i<=4;i++)cin>>a[i];
	if(a[1]==a[3])cout<<1;
	else{
		cout<<"0000";
		return 0;
	}
	bool f=false;
	for(int i=0;i<=1;i++){
		if(a[2][i]!=a[4][i])f=true;
	}
	if(f){
		cout<<"000";
		return 0;
	}
	else cout<<1;
	char x=a[2][2],y=a[4][2];
	if(x>y)swap(x,y);
	if((x=='A'||x=='B'||x=='C')&&(y=='D'||y=='F')){
		cout<<"00";
		return 0;
	}
	else cout<<1;
	if((x=='A'&&y=='B')||(x=='B'&&y=='C')||(x=='D'&&y=='F')){
		cout<<1;
	}
	else cout<<0;
	return 0;
}