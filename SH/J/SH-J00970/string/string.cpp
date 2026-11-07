#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a;
		cin>>c;
		for(int j=1;j<=a;j+=1){
			s+=c;
		}
	}

	long long cnt=0;
	long long len=s.size()/2;
	long long clen=s.size();
	for(long long i=0;i<len;i++){

		if(s[i]!=s[clen-i-1]){

			cnt++;
		}
	}
	cout<<cnt;
	return 0;
} 
