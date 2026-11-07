#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	int a,ans=0;
	int b[20010]={0};
	string c;
	cin >>a;
	for(int i=1;i<=a;i++){
		cin>>b[i];
		cin >>c[i];
	}
		
	for(int j=1;j<=a;j++){
		for(int r=1;r<=b[j];r++)
			s+=c[j];
	}
	int l=s.size();
	for(int t=0;t<=l/2;t++){
		if(s[t]!=s[l-t-1]){
			ans+=1;	
		
		}

		
	}
	cout <<ans;

	return 0;
}