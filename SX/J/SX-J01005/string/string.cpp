#include<bits/stdc++.h>
using namespace std;
int n,a,b,minn;
char c;
char s1[1000000005],s2[100000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--){
		cin>>a;
		cin>>c;
		for(int i=b;i<b+a;i++){
			s1[i]=c;
		}
		b+=a;
	}
	for(int i=0;i<b;i++){
		s2[i]=s1[b-i-1];
	}
	for(int i=0;i<floor(b/2.0);i++){
		if(s1[i]!=s2[i]) minn++;
	}
	cout<<minn;
	return 0;
}