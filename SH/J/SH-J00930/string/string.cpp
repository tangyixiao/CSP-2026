#include<bits/stdc++.h>
using namespace std;
int n,a[200005];
long long sum;
string s[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	if(n==1){
		cin>>a[0]>>s[0];
		cout<<0;
		return 0;
	}
	for(int i=0;i<n;i++){
		cin>>a[i]>>s[i];
	}
	int ans=0;
	for(int i=0;i<n-1;i++){
		if(a[i]!=a[i+1])ans=1;
	}
	if(ans==0){
		for(int i=0;i*2<n;i++){
			if(s[i]!=s[n-i-1])sum++;
		}
		sum*=a[1];
		cout<<sum;
		return 0;
	}
	int L=0,R=n-1;
	while(L<R){
		if(s[L]!=s[R])sum++;
		a[L]--;
		a[R]--;
		if(a[L]==0)L++;
		if(a[R]==0)R--;
	}
	cout<<sum;
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
}
