#include<bits/stdc++.h>
using namespace std;
long long t;
long long ans=0;
string s,c;
int n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t>>s;
		for(int j=0;j<t;j++){
			c+=s;
		}
	}
	int len=c.size();
	for(int j=0;j<t;j++){
	if(len==1||len==0||len>1){
		cout<<0;
		return 0;
	}
	else if(len==2&&c[j]!=c[j+1]){
		cout<<1;
		return 0;
	}
	else{
		if(c[j]==c[j+1]&&c[j]!=c[j+2]&&c[j]!=c[j+3]&&c[j]!=c[j+4]){
			ans=2;
		}
	}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
//3 2 a 2 b 1 c
//2 a
//2 b
//1 c
