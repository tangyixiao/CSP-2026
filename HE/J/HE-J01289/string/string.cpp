#include <bits/stdc++.h>
using namespace std;
int n,sum;
int n1[200005];
string s[200005];
string s1;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>n1[i]>>s[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n1[i];j++){
			s1+=s[i];
		}
	}
//	cout<<s1;
	for(int i=0;i<s1.size()/2;i++){
		int i1=s1.size()-i-1;
		if(s1[i]!=s1[i1]){
			sum++;
		}
	}
	cout<<sum;
	return 0;
}
