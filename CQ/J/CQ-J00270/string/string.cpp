#include<bits/stdc++.h>
using namespace std;
int main(){
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	long long n,a,ans=0;
	char c;
	cin>>n;
	string p;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(long long i=1;i<=a;i++){
			p+=c;
		}
	}
	string s;
	long long cnt=p.size();
	for(int i=cnt-1;i>=0;i--){
			s+=p[i];		
	}
	if(p==s){
		cout<<"0";
	}else{
		for(long long i=0;i<cnt/2;i++){
			if(p[i]!=p[cnt-1-i]){
				ans++;	
			}
		}	
	}
	cout<<ans;
	return 0;
}
