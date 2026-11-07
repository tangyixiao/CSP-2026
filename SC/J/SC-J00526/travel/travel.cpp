#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
string a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>a>>b>>c>>d;
	long long bc=0,dc=0;
	for(int i=0;i<3;i++){
		if(b[i]>='0'&&b[i]<='9'){
			bc=bc*10+b[i]-'0';
		}
		if(d[i]>='0'&&d[i]<='9'){
			dc=dc*10+d[i]-'0';
		}
	}
//	cout<<bc<<endl;
//	cout<<dc<<endl;
	if(a==c){
		cout<<1;
		if(bc==dc){
			cout<<"1";
		}
		else{
//			cout<<bc<<endl;
//			cout<<dc;	
			cout<<"000";
			return 0;
		}
		if(b[2]<='C'&&d[2]<='C'||b[2]>='D'&&d[2]>='D'){
			cout<<1;
		}
		else{
			cout<<"00";
			return 0;
		}
		int now=abs(b[2]-d[2]);
//		cout<<b[2]<<" "<<d[2]<<endl;
//		cout<<"now:"<<now<<endl;
		if(now==1){
			cout<<"1";
		}
		else{
//			cout<<"now:"<<now<<endl;
			cout<<"0";
		}
	}
	else{
		cout<<"0000";
		return 0;
	}
	return 0;
} 