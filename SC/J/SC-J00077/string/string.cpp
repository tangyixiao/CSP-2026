#include<bits/stdc++.h>
using namespace std;
int n;
unsigned long long a[2000005];
char s[2000005];
unsigned long long ans;
string str;
unsigned long long tot;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s[i];
		for(int j=1;j<=a[i];j++) str+=s[i];
		tot+=a[i];
	}
	int kkk=tot/2;
	for(int i=0;i<=kkk-1;i++){
		if(str[i]==str[tot-1-i]) continue;
		else if(str[i]!=str[tot-1-i]) {
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b8*/