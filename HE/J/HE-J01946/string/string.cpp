#include<bits/stdc++.h>
using namespace std;
int main(){
	//feropen("string.in","r","std.in");
	//feropen("string.out","w","std.out");
	string s;
	int n,a,x;
	char c;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=0;j<a;j++){
			s[i-1+j]=c;
		}
	}
	for(int i=0;i<n;i++){
		if(s[i]!=s[n-1-i]){
			x++;
		}
	}
	cout<<x;
	//fclose(std.in);fclose(std.out);
	return 0;
}
