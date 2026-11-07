#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s;
	for(int i=1;i<=n;i++){
		int a;
		string c;
		cin>>a>>c;
		for(int i=0;i<a;i++){
			s+=c;
		}
	}
	int len=s.size();
	int ans=0;
	for(int r=0;r<len/2;r++){
		int l=len-r-1;
		if(s[r]!=s[l]){
			ans++;
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
