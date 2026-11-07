#include<bits/stdc++.h>
using namespace std;
const int maxn=1e9+10;
int n;
char s[maxn];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",n);
	int x=0;
	for(int i=1;i<=n;i++){
		int m;
		scanf("%d",m);
		for(int j=1;j<=m;j++){
			cin>>s[x+j];
		}
		x+=m;
	}
	char s1[maxn];
	int x1=x;
	for(int i=1;i<=x;i++){
		s1[i]=s[x1];
		x1--;
	}
	int ans=0;
	for(int i=1;i<=x;i++){
		if(s1[i]!=s[i]) ans++;
	}
	printf("d",ans);
	
	return 0;
} 
