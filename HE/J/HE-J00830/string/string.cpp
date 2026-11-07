#include<bits/stdc++.h>
using namespace std;
int main(){
freopen("string.in","r",stdin);
freopen("string.out","w",stdout);
char b;
int n,a,cnt=0,ans=0;
int r=1;
string c[100000000]={},d[100000000]={};
cin>>n;
for(int i = 1;i<=n;i++){
	cin>>a>>b;
	 ans+=a;
	for(int j =r ;j<=r+a-1;j++){
		c[j]=b;
}
		r+=a;
}
for(int i = ans;i>=1;i--){
	int j=1;
	c[i]=d[j];
	j++;
}for(int i = 1;i<=ans;i++){
	if(c[i]!=d[i]){
		cnt++;
	}
}
cout<<cnt;
	return 0;
}
