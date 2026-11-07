#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;

int n,a[N];

string s;
long long cnt;
bool ishuiwen(string s,int l){
	for(int i=0;i<=l/2;i++){
		if(s[i]==s[l-1-i]){
		
			continue;
		}
		else return false;
	}
	return true;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		char c;
		cin>>a[i]>>c;
		for(int j=1;j<=a[i];j++){
			s+=c;
		
		}
	}
	
	
	int l=s.size();
	if(ishuiwen(s,l)){
		printf("0");
		return 0;
	}
	for(int i=0;i<=l/2;i++){
		if(s[i]!=s[l-1-i]) cnt++;
	}
	printf("%d",cnt);
	return 0;
}
