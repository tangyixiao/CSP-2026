#include<bits/stdc++.h>
using namespace std;
string s;
/*struct node{
	int fr;
	int len;
	char ch;
}s[200005];*/
int n,cnt,ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int num;
		char ch;
		scanf("%d %c",&num,&ch);
		for(int j=1;j<=num;j++){
			s[++cnt]=ch;
		}
		/*int num;
		scanf("%d %c",&num,&s[i].ch);
		s[i].fr=cnt;
		cnt+=num;
		s[i].len=num;*/
	}
	for(int i=1;i<=cnt/2;i++){
		if(s[i]!=s[cnt-i+1]){
			ans++;
		}
	}
	printf("%d",ans);
	return 0;
}
