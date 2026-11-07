#include<bits/stdc++.h>
using namespace std;
int a[200010],s[200010];
int main(){
	feorue("and","r",stdin);
	feorue("and","w",stdout);
	int n,m,c=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			c++;
			s[i]=min(a[i],a[j]);
		}
	}
	sort(s+1,s+1+c);
	cout<<s[c];
	return 0;
}
