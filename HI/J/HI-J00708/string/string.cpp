#include<bits/stdc++.h>
using namespace std;
char sum;
long long s[100000000];
int a,b,c,w;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>a;
	for(int i=1;i<=a;i++){
		cin>>b;
		cin>>sum;
		for(int q=0;q<b;q++){
			s[c]=sum;
			c++;
		} 
	}
	for(int i=0;i<c/2;i++){
		if(s[i]!=s[c-i-1])w++; 
	}
	cout<<w;
	return 0;
}
