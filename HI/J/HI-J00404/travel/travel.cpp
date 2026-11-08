#include<bits/stdc++.h>
using namespace std;
int e[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	cin>>a;
	char c[4],d[4];
	cin>>c[0]>>c[1]>>c[2];
	cin>>b;
	cin>>d[0]>>d[1]>>d[2];
	int cc = 0,dd = 0;
	if(a != b) {
		cout<<"0000";
		return 0;
	}
	cc = (c[0]-48)*10+(c[1]-48);
	dd = (d[0]-48)*10+(d[1]-48);
	if(cc != dd){
		cout<<"1000";
		return 0;
	}
	if(((c[2]-68)<0&&(d[2]-68)>=0)||((d[2]-68)<0&&(c[2]-68)>=0)){
		cout<<"1100";
		return 0;
	}
	if(abs((c[2]-1+1)-(d[2]-1+1))>1){
		cout<<"1110";
		return 0;
	}
	cout<<"1111";
	return 0;
}

