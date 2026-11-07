#include<bits/stdc++.h>
using namespace std;
long long n,sum=0;
string s;
int main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	s+='0';
	for( int i=1; i<=n; i++ ){
		long long m;
		string f;
		cin>>m>>f;
		for( int i=1; i<=m; i++  ) s+=f;
	}
	for( int i=1; i<=s.size()/2; i++ ){
		if(s[i]!=s[s.size()-i]){
			sum++;
		}
	}
	cout<<sum;
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
