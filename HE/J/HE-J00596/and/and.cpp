#include<bits/stdc++.h>
using namespace std;
long long ans=0;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
freopen("string.in","r",stdin);
freopen("string.out","w",stdout);
int n;
cin>>n;
string s1="";
char p;
for(int i=1;i<=n;i++){
	int   a;
	cin>>a;
	
	cin>>p;
	for(int j=1;j<=a;j++){
		s1+=p;
	}
	
}
long long  l=0,r=s1.size()-1;
while(l<r){
	if(s1[l]!=s1[r]){
		ans++;
	}
	l++;
	r--;
}
cout<<ans;
	return 0;
	
}
