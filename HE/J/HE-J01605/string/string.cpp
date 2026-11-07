#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s="";
	long long n,a;
	char c;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		cin>>a>>c; 
		for(int j=0;j<a;j++){
			s+=c;
		} 
	}
	long long v=s.size();
	long long all=0,k=v-1;
	for(int i=0;i<v;i++){
		c=s[k];
		if(s[i]!=c){
			all++;
		}
		k--;
	}
	cout<<all/2;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
