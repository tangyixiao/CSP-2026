#include<bits/stdc++.h>
using namespace std;
int a[10005];
string c[10005];
int main (){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin<<n;
	
	for (int i=1;i<=n;i++){
		cin>>a[i];
		cin>>c[i];
		
	}
	string S;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];i++){
			S+=c[i];
		}
		
	}
	int ans;
	int len=s.size;
	for(int i=0; i<len;i++){
		if(s[1+i]!=s[len-i]){
			ans++;
		}
	}
	cout<<ans;
	return 0£» 
}


