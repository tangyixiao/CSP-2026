#include<bits/stdc++.h>
using namespace std;
int n;
long long ans;
string s,s2,s3,s4;
void f(string s){
	for(int i=s.size();i--;i>=0){
		s2+=s[i];
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);

	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		string c;
		cin>>a>>c;
		for(int j=1;j<=a;j++)s+=c;
	}
	int mid=0;
	if(s.size()%2==1)mid=s.size()/2+1;
	else mid=s.size()/2;
	int j=0,k=mid;
	for(int i=0;i<s.size()/2;i++){
		if(s[j]!=s[k]){
			ans++;
		}
		j++;
		k++;
	}
	f(s);
	if(s==s2){
		cout<<0;
		return 0;
	}
	cout<<ans;
	return 0;
}

