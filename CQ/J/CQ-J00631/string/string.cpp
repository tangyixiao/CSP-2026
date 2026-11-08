#include<bits/stdc++.h>
using namespace std;
struct l{
	long long len=0;
	char l;
}list1[200005];
string l="";
long long x[26];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,m=0;
	cin>>n;
	if(n==1){
		cout<<0;
		return 0;
	}
	int i=0,k=0,j=0;
	while(n--){
		char p;
		long long len;
		cin>>len>>p;
		x[p-'a']+=len;
		if(p==list1[i].l){
			list1[i].len+=len;
		}else{
			list1[++i].l=p;
			list1[i].len=len;
			k++;
		}m+=len;
		if(len>=1e9){
			j=1;
		}
	}if(j==1){
		long long minn=2e14;
		long long maxx=0;
		int u=0;
		for(int i=0;i<26;i++){
			if(x[i]>0){
				maxx=max(maxx,x[i]);
				minn=min(minn,x[i]);
				u++;
			}
		}if(u==2){
			cout<<minn;
			return 0;
		}
		cout<<maxx-minn;
		return 0;
	}
	for(int i=1;i<=k;i++){
		for(long long j=1;j<=list1[i].len;j++){
			l+=list1[i].l;
		}
	}
	long long o=m/2;
	m--;
	long long ans=0;
	for(long long i=o;i>=0;i--){
		if(l[i]!=l[m-i]){
			ans++;
		}
	}cout<<ans;
} 
