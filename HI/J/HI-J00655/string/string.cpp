#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s;
	for(int i=1;i<=n;i++){
		long long a;
		char c;
		cin>>a>>c;
		for(long long i=1;i<=a;i++){
			s+=c;
		}
	}
	long long h=0;
	int j=s.size()-1;
	for(long long i=0;i<s.size()/2;i++){
		if(s[i]!=s[j]){
			h++;
		}
		j--;
	}
	cout<<h;
	return 0;
}
