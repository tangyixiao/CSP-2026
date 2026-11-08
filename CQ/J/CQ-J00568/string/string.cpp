#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,a[200005],ans,sum,flag=1;
char s[200005];
string n10;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s[i];
		if(a[i]>500)flag=0;
		sum+=a[i];
	}
	if(n<=1)cout<<0;
	else if(n<=2){
		if(s[1]==s[2]){
			cout<<0;
		}
		else cout<<min(a[1],a[2]);
	}
	else if(n<=10){
		n10+=' ';
		for(int i=1;i<=n;i++){
			for(int j=1;j<=a[i];j++){
				n10+=s[i];
			}
		}
		for(int i=1;i<=(sum+1)/2;i++){
			if(n10[i]!=n10[sum-i+1])ans++;
		}
		cout<<ans;
	}
	else if(n<=2000){
		if(flag){
			n10+=' ';
			for(int i=1;i<=n;i++){
				for(int j=1;j<=a[i];j++){
					n10+=s[i];
				}
			}
			for(int i=1;i<=(sum+1)/2;i++){
				if(n10[i]!=n10[sum-i+1])ans++;
			}
			cout<<ans;
		}
		else{
			
		}
	}
	else{
		if(flag){
			n10+=' ';
			for(int i=1;i<=n;i++){
				for(int j=1;j<=a[i];j++){
					n10+=s[i];
				}
			}
			for(int i=1;i<=(sum+1)/2;i++){
				if(n10[i]!=n10[sum-i+1])ans++;
			}
			cout<<ans;
		}
		else{
			
		}
	}
	return 0;
}

