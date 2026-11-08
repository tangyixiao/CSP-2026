#include <bits/stdc++.h>
using namespace std;
string s1,s2;
int c1,c2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=1||c1!=16&&c2!=1||c2!=16){
		if(c1==c2){
			cout<<1;
			int cnt=0;
		for(int i=0;i<=1;i++){
		if(s1[i]==s2[i]){
			cnt++;
			}
		}
		if(cnt==2){
			cout<<1;
			if(s1[3]=='A'||s1[3]=='B'||s1[3]=='C'&&s2[3]=='A'||s2[3]=='B'||s2[3]=='C'){
			cout<<1;
		}
		else if(s1[3]=='D'||s1[3]=='F'&&s2[3]=='D'||s2[3]=='F'){
			cout<<1;
		}
		if(s1[3]=='A'&&s2[3]=='B'){
			cout<<1;
			}
		else if(s1[3]=='B'&&s2[3]=='C'){
			cout<<1;
			}
		else if(s1[3]=='D'&&s1[3]=='F'){
			cout<<1;
			}
			
			
		}
		else cout<<0;
		}
		
}
	
	
	return 0;
} 
