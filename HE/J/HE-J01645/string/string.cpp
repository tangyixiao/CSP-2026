#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
long long a[MAXN];
char ch[MAXN]; 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>ch[i];
	}
	int chnum=0,num=0;
	for(int i=1;i<=n;i++){
		if(a[i]==a[1]) num++;
		if(ch[i]==ch[1]) chnum++;
	}
	if(chnum==n) cout<<0;
	else if(num==n){
		long long ans=0;
		for(int i=1;i<=n/2;i++){
			if(ch[i]!=ch[i-n]) ans+=a[i]; 
		}
		cout<<ans;
	}
	else{
		cout<<n/2;
	}
	return 0;
}
