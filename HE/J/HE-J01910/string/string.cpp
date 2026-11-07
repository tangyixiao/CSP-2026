#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
  	freopen("string.out","w",stdout);
	int n,sum=0;string s,m;
	cin>>n;
	for(int i=1;i<=n;i++){
		int l;char a;
		cin>>l>>a;
		for(int i=s.size()+1;i<=s.size()+l;i++)s[i]=a;
		if(m!=s){
			sum+=l;
			m=s; 
		}
	}cout<<s;
	fclose(stdin);
 	fclose(stdout); 
	return 0;
} 
