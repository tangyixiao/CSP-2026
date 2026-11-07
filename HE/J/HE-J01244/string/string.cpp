#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	char c;
	int n,i,a;
	cin>>n;
	for(int j=1;j<=n;i++){
		cin>>a>>c;
		for(int k=1;k<=a;k++){
			s[i]=c;
			i++;                                                                                                         
		}
	}
	int f=1;
	for(int j=1;j<i;j++){
		if(s[i]!=s[i+1]){
			f=0;
		}
	}
	if(f==1)cout<"0";
	
}
