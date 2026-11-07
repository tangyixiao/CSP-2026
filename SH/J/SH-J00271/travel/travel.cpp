#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	int num1=(int)a[0]-'0';
	int num2=(int)a[1]-'0';
	int num3=(int)c[0]-'0';
	int num4=(int)c[1]-'0';
	if (num1==num3 && num2==num4){
		cout<<1;
	}
	else{
		cout<<"0000";
		return 0;
	}
	int num5=(int)b[0]-'0';
	int num6=(int)b[1]-'0';
	int num7=(int)d[0]-'0';
	int num8=(int)d[1]-'0';
	if (num5==num7 && num6==num8){
		cout<<1;
	}
	else{
		cout<<"000";
		return 0;
	}
	char zf1=b[2];
	char zf2=d[2];
	if (zf1=='D' && zf2=='F'){
		cout<<"11";
		return 0;
	}
	if (zf1=='A' && zf2=='B' || zf1=='A' && zf2=='C' || zf1=='B' && zf2=='C'){
		cout<<1;
	}
	else if (zf2=='A' && zf1=='B' || zf2=='A' && zf1=='C' || zf2=='B' && zf1=='C'){
		cout<<1;
	}
	else{
		cout<<"00";
		return 0;
	}
	if (zf1=='A' && zf2=='B' || zf1=='B' && zf1=='C'){
		cout<<1;
	}
	else{
		cout<<"0";
	}
	return 0;
} 
