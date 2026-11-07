#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct taker{
	string chexiang;
	string zuowei;
	string pai;
	char id;
}a[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio();
	cin.tie(0);
	for(int i=1;i<=2;i++){
		cin>>a[i].chexiang>>a[i].zuowei;
		a[i].pai=a[i].zuowei.substr(0,2);
		a[i].id=a[i].zuowei[2];
	}
	if(a[1].chexiang==a[2].chexiang) cout<<1;
	else{
		cout<<"0000";
		return 0;
	}
	if(a[1].pai==a[2].pai) cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	if((a[1].id>='A'&&a[1].id<='C'&&a[2].id>='A'&&a[2].id<='C')||(a[1].id>='D'&&a[1].id<='F'&&a[2].id>='D'&&a[2].id<='F')&&a[1].id!='E'&&a[2].id!='E') cout<<1;
	else{
		cout<<"00";
		return 0;
	}
	if((abs(a[1].id-a[2].id)==1&&a[1].id>='A'&&a[1].id<='F'&&a[2].id>='A'&&a[2].id<='F')||(abs(a[1].id-a[2].id)==2&&((a[1].id=='D'&&a[2].id=='F')||(a[1].id=='F'&&a[2].id=='E')))) cout<<1;
	else cout<<0;
	return 0;
}