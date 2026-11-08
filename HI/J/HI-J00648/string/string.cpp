#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a;
	int cnt=0;
	char b;
	string s="";
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d %c",&a,&b);
		for(int j=1;j<=a;j++){
			s.push_back(b);
		}
	}
	string s1=s;
	reverse(s1.begin(),s1.end());
	for(int i=0;i<=s.size()-1;i++){
		if(s[i]!=s1[i]){
			cnt++;
		}
	}
	cout<<cnt/2;
	return 0;
}
