#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	string s;
	cin>>n;
	for(int i=1;i<=n;i++){
		long long a;
		string c;
		cin>>a>>c;
		a--;
		string b=c;
		while(a--){
			c+=b;
		}
		s+=c;
	}
	long long cnt=0;
	long long l=0,r=s.size()-1;
	while(l<=r){
		if(s[l]!=s[r])cnt++;
		l++;
		r--;
	}
	cout<<cnt;
	return 0;
	fclose(stdin);
	fclose(stdout);
} 
