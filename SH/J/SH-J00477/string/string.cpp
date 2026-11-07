#include<bits/stdc++.h> 
using namespace std;
long long s,n,cnt=0,sum=0;
char a;
string b;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>s;
	for(int i=1;i<=s;i++){
		cin>>n>>a;
		sum+=n;
		for(int o=1;o<=n;o++){
			b+=a;
		}
		
	}


	for(int i=0;i<b.size();i++){
		if(b[i]!=b[sum-i-1]){
			b[i]=b[sum-i-1];
			cnt++;
		}
	}
	cout<<cnt;
	
	return 0;
}
