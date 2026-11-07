#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,cnt=0,cnt1=0;
	char s[100005];
	cin>>n;
	while(n--){
		int a;
		char c;
		cin>>a>>c;
		for(int i=cnt;i<cnt+a;i++){
			s[i]=c;
		}
		cnt+=a;
	}
	for(int i=0,j=cnt-1;i<j;i++,j--){
		if(s[i]!=s[j]){
			cnt1++;
		}
	}
	cout<<cnt1;
	return 0;
}
