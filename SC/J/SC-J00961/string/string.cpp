#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int a[200000];
	char b[200000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
	}
	string s;
	for(int i=0;i<n;i++){
		while(a[i]--){
			s.push_back(b[i]);
		}
	}
	string first_half="",second_half="";
	for(int i=0;i<s.size()/2;i++){
		first_half.push_back(s[i]);
		second_half.push_back(s[i+s.size()-2]);
	}
	reverse(second_half.begin(),second_half.end());
	int ans=0;
	for(int i=0;i<first_half.size();i++){
		if(second_half[i]!=first_half[i]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
