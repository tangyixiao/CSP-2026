#include<bits/stdc++.h>
using namespace std;
bool hw(string s){
	string s1;
	s1=s;
	reverse(s.begin(),s.end());
	if(s1==s){
		return true;
	}
	return false;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int a[n+5];
	char c[n+5];
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	string s="";
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			s+=c[i];
		}
	}
	if(hw(s)==true){
		cout<<"0";
		return 0;
	}
	if(n==2){
		cout<<min(a[1],a[2]);
		return 0;
	}
	int k=s.size();
	cout<<k/2;
	return 0;
}
