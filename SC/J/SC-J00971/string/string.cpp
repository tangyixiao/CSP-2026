#include<bits/stdc++.h>
using namespace std;
string word[200005];
long long val[200005];
long long n;
string last;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>val[i]>>word[i];
		for(long long j=1;j<=val[i];j++){
			last+=word[i];
		}
	}
	long long l=0,r=last.length()-1,mid=(last.length())/2,ans=0;
	if(last.length()%2!=0){
		while(l<mid&&r>mid){
			if(last[l]!=last[r])ans++;
			l++,r--;
		}
	}else{
		while(l<=mid&&r>=mid){
			if(last[l]!=last[r])ans++;
			l++,r--;
		}
	}
	cout<<ans;
	return 0;
}