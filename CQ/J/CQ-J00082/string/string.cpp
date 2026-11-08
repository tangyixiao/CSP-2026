#include<bits/stdc++.h>
using namespace std;
long long n,a,cnt1=1,cnt2=0;
char c;
string s,s1,s2;
long long zm[10005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			s[cnt1]=c;
			cnt1++;		
		}
			
	}
	cnt1--;
	for(int i=1;i<=cnt1/2;i++){
		s1[i]=s[i];
	}		
	if(cnt1%2==0){
		long long z=1;
		for(int i=cnt1;i>=cnt1/2+1;i--){
			
			s2[z]=s[i];
			z++;
		}
	}
	if(cnt1%2!=0){
		long long zz=1;
		for(int i=cnt1;i>=cnt1/2+2;i--){
			
			s2[zz]=s[i];
			zz++;
		}
	}	
	
	for(int i=1;i<=cnt1/2;i++){
		
		if(s1[i]!=s2[i]){
			cnt2++;	
		}		
	}
	cout<<cnt2;
	return 0;
}
