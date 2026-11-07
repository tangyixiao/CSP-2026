#include<bits/stdc++.h>
using namespace std;
	int n;
	string s;
	int j;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--){
		int x;
		char y;
		cin>>x>>y;
		for(int i=1;i<=x;i++){
			s[j]=y;
			j++;
		}
	}
	int c=0;
	for(int i=0;i<j/2;i++){
		if(s[i]!=s[j-1-i]){
			c++;
			
		}
	}
	cout<<c;
	return 0;
}
