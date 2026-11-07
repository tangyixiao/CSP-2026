#include<bits/stdc++.h> 
#include<cstdio>
using namespace std;
vector<char>a;
char s;
int x,q,z,ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
cin>>x;

for(int i=1;i<=x;i++){
cin>>q>>s;z+=q;
	for(int j=1;j<=q;j++)a.push_back(s);
	}
	
	for(int i=0;i<=z/2;i++)if(a[i]!=a[z-i-1])ans++;
	if(a[z/2]!=a[z/2-1]&&z%2==0)ans--;
cout<<ans;
	return 0;
}