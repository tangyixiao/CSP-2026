#include<iostream>
#include<string>
using namespace std;
string s1,s2;
int n;
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		long long cnt;
		char c;
		cin>>cnt>>c;
		for(int j=1;j<=cnt;j++){
			s1=c+s1;
			s2=s2+c;
		}
	}
	if(s1==s2){
		cout<<0;
		return 0;
	}
	ans=s1.size()/2;
	cout<<ans;
	return 0;
} 