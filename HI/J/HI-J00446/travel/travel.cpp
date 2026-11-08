#include<bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int n,m; 
	string w,s;
	cin>>n>>w>>m>>s;
	if(s[2]=='F')s[2]='E';
	if(w[2]=='F')w[2]='E';
	if(n==m){
		cout<<1;
		if(s[0]==w[0]&&s[1]==w[1]){
			cout<<1;
			if(int('C')>=int(s[2])&&int('C')>=int(w[2])||int(s[2])>=int('D')&&int(w[2])>=int('D')){
				cout<<1;
				
			if(int(s[2])==int(w[2])+1||int(s[2])==int(w[2])-1){
				cout<<1;
			}
			else cout<<'0';
		}
		else cout<<"00";
	}
	else{
			cout<<"000";
		}
}
	else cout<<"0000";
	
	return 0;
}
