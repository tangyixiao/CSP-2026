#include<bits/stdc++.h>
using namespace std;
char s[3],c[4],st[3],ct[4];
int a[2];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	for(int i=1;i<=2;i++)cin>>s[i];
	for(int i=1;i<=2;i++)cin>>c[i];
	cin>>c[3];
	a[1]=c[3]-'A';
	for(int i=1;i<=2;i++)cin>>st[i];
	for(int i=1;i<=2;i++)cin>>ct[i];
	cin>>ct[3];
	a[2]=ct[3]-'A';
	for(int i=1;i<=2;i++){
		if(s[i]!=st[i]){
			cout<<0;
			cout<<0;
			cout<<0;
			cout<<0;
			return 0;
		}
	} 
	cout<<1;
	for(int i=1;i<=2;i++){
		if(c[i]!=ct[i]){
			cout<<0;
			cout<<0;
			cout<<0;
			return 0;
		}
	}
	cout<<1;
	if((a[1]<=2&&a[2]<=2)||(a[1]>2&&a[2]>2)){
		cout<<1;
		if(abs(a[1]-a[2])==1)cout<<1;
		else cout<<0;
	}
	else {
		cout<<0;
		cout<<0; 
	}
	return 0;
}
