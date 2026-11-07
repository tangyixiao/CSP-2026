#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int w[100005];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	w['A']=1;
	w['B']=1;
	w['C']=1;
	w['D']=2;
	w['F']=2;
	if(a==c){
		cout<<"1";
	}
	else cout<<"0";
	if(a==c&&b[0]==d[0]&&b[1]==d[1]){
		cout<<"1";
	}
	else cout<<"0";
	if(a==c&&b[0]==d[0]&&b[1]==d[1]&&w[b[2]]==w[d[2]]){
		cout<<"1";
	}
	else cout<<"0";
	if(a==c&&(((b[1]==d[1]-1||b[1]==d[1]+1||b[1]==d[1]+9||b[1]==d[1]-9)&&b[2]==d[2])||(b[0]==d[0]&&b[1]==d[1]&&(b[2]==d[2]-1||b[2]==d[2]+1)&&w[b[2]]==w[d[2]]))){
		cout<<"1";
	}
	else cout<<"0";
	fclose(stdin);
	fclose(stdout);
	return 0;
}
