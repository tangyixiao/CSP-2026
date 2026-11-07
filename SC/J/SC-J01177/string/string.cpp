#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s,x,y;
	long long n,c=0,sum=0;
	cin>>n;
	int a;
	char b;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		c+=a;
		for(int j=1;j<=a;j++){
			s+=b;
		}
	}
	if(c%2){
		for(int i=1;i<=c/2;i++){
			if(s[c/2-i]!=s[c/2+i]){
				sum++;
			}
		}
	}
	else {
		for(int i=0;i<=c/2;i++){
			if(s[c/2-i]!=s[c/2+i+1]){
				sum++;
			}
		}
	}
	cout<<sum;
	return 0;
}