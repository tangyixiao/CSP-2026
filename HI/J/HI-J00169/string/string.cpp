#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int a;
	cin>>a;
	string s1="";
	for(int i=1;i<=a;i++){
		int k;
		cin>>k;
		char c;
		cin>>c;
		for(int j=1;j<=k;j++){
			s1=s1+c;
		}
	}
	int ans=0;
	for(int i=0;i<=(s1.size()-1)/2;i++){
		int j=i+(s1.size()-1-(2*i));
		if(s1[i]!=s1[j]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
