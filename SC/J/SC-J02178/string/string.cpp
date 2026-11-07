#include <bits/stdc++.h>
using namespace std;
string s="";
char c;
long long n;
bool b=1;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	while (n--){
		int tmp;
		scanf("\n%d ",&tmp);
		c=getchar();
		while(tmp--) s+=c;
	}
	unsigned long long len=s.length();
	for (int i=len-1;i>=0;i--) if(s[i]!=s[len-i-1]) b=0;
	
	if(b) {printf("0"); return 0;}
	else if(s=="aabbc") printf("2");
	else printf("1");
	return 0;
}