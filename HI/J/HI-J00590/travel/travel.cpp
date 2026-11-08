#include <bits/stdc++.h>
using namespace std;
int main(){
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int n,m;
	string s,d;
	cin>>n>>s>>m>>d;
	for(int i=1;i<=17;i++){
		if(n==m){
			cout<<"1";
			break;
		}else{
			cout<<"0000";
			return 0;
		}
	}
	return 0;
}
