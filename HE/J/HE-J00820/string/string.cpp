#include<bits/stdc++.h>

using namespace std;
long long n,b;
char a[2005];
long long cnt;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string str;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>b>>a[i];
		for(int j=1;j<=b;j++){
			str+=a[i];
		}
	}
	for(int i=0;i<str.size();i++){
		if(i>str.size()-i-1)break;
		
		if(str[i]==str[str.size()-i-1])continue;
		else cnt++;
		
	}
	cout <<cnt;
	return 0;
}
