#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>c>>b>>d;
	if(a==b){
		cout<<1;
	}
	else{
		cout<<"0000";
		return 0;
	}
	bool flag=1;
	for(int i=0;i<2;i++){
		if(c[i]!=d[i]){
			flag=0;
			break;
		}
	}
	if(flag){
		cout<<1;
	}
	else{
		cout<<"000";
		return 0;
	}
	if('A'<=c[2]&&c[2]<='C'&&'A'<=d[2]&&d[2]<='C'){
		cout<<1;
		if(c[2]+1==d[2]||c[2]-1==d[2]){
			cout<<1;
		}
		else{
			cout<<0;
		}
	}
	else if('D'<=c[2]&&c[2]<='F'&&'D'<=d[2]&&d[2]<='F'){
		cout<<"11";
	}
	else{
		cout<<"00";
		return 0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
