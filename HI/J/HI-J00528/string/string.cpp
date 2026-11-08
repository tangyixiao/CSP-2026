#include<bits/stdc++.h>
using namespace std;
string s;
string tis1;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int a,n;
	char m;
	cin>>a;
	for(int i=1;i<=a;i++){
		cin>>n>>m;
		for(int j=0;j<n;j++){
			s+=m;
		}	
	}
	int z=s.size();
	for(int i=0;i<=z;i++){
		tis1+=s[z-1-i];
	}
	for(int i=0;i<=z;i++){
		if(s==tis1){
			cout<<0;
			return 0;
		}
	}
	int tis2=0;
	while(1){
		int i=0;
		if(s[i]!=tis1[i]){
			tis1[i]=s[i];
			tis2++;
		}
		i++;
		for(int i=0;i<=z;i++){
			if(s[i]==tis1[i]){
				cout<<tis2;
				return 0;
			}
		}
		
	}
	
	return 0;
}
