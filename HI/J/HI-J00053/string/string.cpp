#include<bits/stdc++.h>
using namespace std;
int n,cnt=0,dnt=0;
long long a[954188];
char c[541889];
string s[54188];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(int j=0;j<a[i];j++){
			s[cnt]=c[i];
			cnt++;
		}
	}for(int i=0;i<cnt;i++){
		if(s[i]!=s[cnt-1-i]){
			dnt++;
			s[i]=s[cnt-1-i];
		}
	}cout<<dnt;
	return 0;
}
