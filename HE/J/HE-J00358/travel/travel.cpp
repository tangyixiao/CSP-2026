#include<bits/stdc++.h>
using namespace std;
int cnt=4,a,b;
string q,e;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>q>>b>>e;
	for(int i=1;i<=1;i++){
		if(a==b){
			cout<<1;
			cnt--;
		}else{
			break;
		}
		if(q[0]==e[0]&&q[1]==e[1]){
			cout<<1;
			cnt--;
		}else{
			break;
		}
		int n=q[2]-'0'-16,m=e[2]-'0'-16;
		if(n<=3&&m<=3||n>=4&&m>=4){
			cout<<1;
			cnt--;
		}else{
			break;
		}
		if(abs(n-m)==1){
			cout<<1;
			cnt--;
		}
	}
	for(int i=1;i<=cnt;i++){
		cout<<0;
	}
	return 0;
} 
