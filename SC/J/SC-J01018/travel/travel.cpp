#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2 || c1=="01" || c1=="16" || c2=="01" || c2=="16"){
		cout<<"0000";
		return 0;
	}
	else
		cout<<1;
	for(int i=0;i<2;i++){
		int n=int(s1[i]);
		int m=int(s2[i]);
		if(n!=m){
			cout<<"000";
			return 0;
		} 
	}
	cout<<1;
	if((s1[2]=='F' && s2[2]=='D') || (s2[2]=='F' && s1[2]=='D'))
		cout<<1;
	else if((s1[2]=='C' && s2[2]=='B') || (s2[2]=='C' && s1[2]=='B'))
		cout<<1;
	else if((s1[2]=='A' && s2[2]=='B') || (s1[2]=='B' && s2[2]=='A'))
		cout<<1;
	else if((s1[2]=='C' && s2[2]=='A') || (s1[2]=='A' && s2[2]=='C'))
		cout<<1;
	else{
		cout<<"00";
		return 0;
	}
	int n=int(s1[2]);
	int m=int(s2[2]);
	int k=abs(n-m);
	if(k==1) cout<<1;
	else cout<<0;
	return 0;
}