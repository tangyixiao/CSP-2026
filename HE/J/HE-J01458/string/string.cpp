#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a;
	char c;
	string s="";
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		cin>>a>>c;
		for(int j=0;j<a;j++){
			s+=c;
		}
	}
	int w=0;
	for(int i=0,q=s.size()-1;q!=i&&q>i;i++){
		if(s[i]!=s[q]){
			w++;
		}
		q--;
	}
	printf("%d",w);
	return 0;
}
