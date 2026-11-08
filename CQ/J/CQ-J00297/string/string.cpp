#include<bits/stdc++.h>
using namespace std;
long long l;
long long x;
char y;
string s;
long long cnt=0;
long long i=1;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>l;
	for(i;i<=l;i++){
		cin>>x>>y;
		for(int j=1;j<=x;j++){
			s[cnt]=y;
			cnt++;
		}
	}
	int ans=0;
	i=1;
	for(int j=0;j<=cnt/2;j++){
		if(s[j]!=s[cnt-i]){
			ans++;
		}
		i++;
	}
	cout<<ans;
	return 0;
}
/*
3
2 a
2 b
1 c

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
