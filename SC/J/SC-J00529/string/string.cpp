#include<bits/stdc++.h>
using namespace std;
long long n;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		char y;
		cin>>x>>y;
		for(int i=1;i<=x;i++){
			s+=y;
		}
	}
	long long len=s.size();
	int cnt=0;
	//cout<<len;
	for(int i=0;i<(len+1)/2-1;i++){
		if(s[i]!=s[len-1-i]){
			//cout<<s[i]<<" "<<s[len-1-i]<<endl;
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
/*

3  
2 a 
2 b 
1 c 
aabbc
01234
*/