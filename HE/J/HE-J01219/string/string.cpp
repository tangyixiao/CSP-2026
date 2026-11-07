#include<bits/stdc++.h>
using namespace std;
long long sum;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin>>n;string s="";
	int a[n];char b[n];
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
		for(int j=0;j<a[i];j++){
			s+=b[i];
		}
	}
	if(s.size()%2==0){
		for(int i=0;i<s.size()/2;i++){
			if(s[i]!=s[s.size()-i-1]){
				sum++;
			}	
		}	
	}else{
		for(int i=0;i<=s.size()/2;i++){
			if(s[i]!=s[s.size()-i-1]){
				sum++;
			}	
		}		
	}
	cout<<sum;
	fclose(stdin);//abbasd
	fclose(stdout);
	return 0;
}
