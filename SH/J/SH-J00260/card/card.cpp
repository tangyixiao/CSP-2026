#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	string s="";
	int cnt[500005];
	for(int i=1;i<=n;i++){
		char c;
		cin>>c;
		if(s.find(c)==string::npos){
			s+=c;
		}
		else{
			s.erase(0,i-s.find(c)+1);
		}
		cnt[c-'0']++;
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[m]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
