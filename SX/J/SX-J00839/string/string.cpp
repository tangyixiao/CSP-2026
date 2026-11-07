#include<bits/stdc++.h>
using namespace std;
const long long int N=2e8+5;
char s[N];
char s2[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long int n,f=0,a,cnt=0,sum=0;
	char mm,m;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>m;
		if(i==1){
			mm=m;
		}if(mm!=m){
			f=1;
		}
		for(int i=cnt;i<=cnt+a-1;i++){
			s[i]=m;
		}cnt=cnt+a;
	}
	if(f==0){
		cout<<0;
		return 0;
	}
 for(int i=0;i<cnt;i++){
		s2[i]=s[cnt-i-1];
	}
	for(int i=0;i<cnt;i++){
		if(s2[i]!=s[i])sum++;
	}cout<<sum/2;
	return 0;
}