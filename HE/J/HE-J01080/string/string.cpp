#include<bits/stdc++.h> 
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n;
	cin>>n;
	int a;
	char c;
	string s="";
	for(int i=0;i<n;i++){
		cin>>a>>c;
		for(int j=0;j<a;j++){
			s+=c;
		}
	}
	long long l=s.size();
	long long ans=0;
	for(long long i=0;i<l/2;i++){
		if(s[i]!=s[l-1-i]){
			ans++;
		}
	}
	cout<<ans;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
