#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct s{
	ll num;
	char type;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i].num>>a[i].type;
	bool b=1;
	for(int i=0;i<n-1;i++){
		if(a[i].type!=a[i+1].type){
			b=0;
			break;
		}
	}
	if(b==1){
		cout<<0;
		return 0;
	}
	string s="";
	for(int i=0;i<n;i++){
		for(int j=0;j<a[i].num;j++)s+=a[i].type;
	}
	int ans=0;
	for(int i=0;i<(s.size()+1)/2;i++){
		if(s[i]!=s[s.size()-i-1])ans++;
	}
	cout<<ans;
	return 0;
} 
