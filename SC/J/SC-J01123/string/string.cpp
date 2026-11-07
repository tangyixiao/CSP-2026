#include<bits/stdc++.h>
using namespace std;
int n;
long long b,ans,a,ma=-1,mid;
char t;
string s,l,r;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>t;
		b+=a;
		ma=max(ma,a);
		for(int j=1;j<=a;j++){
			s+=t;
		}
	}
	mid=b/2+(b%2==1);
	if(b%2==0){
		for(int i=0;i<=mid-1;i++){
			l+=s[i];
		}
		for(int i=mid;i<=b-1;i++){
			r=s[i]+r;
		}
		for(int i=0;i<=l.size()-1;i++){
			if(l[i]!=r[i])ans++;
		}
	}else{
		for(int i=0;i<=mid-2;i++){
			l+=s[i];
		}
		
		for(int i=mid;i<=b-1;i++){
			r=s[i]+r;
		}
		for(int i=0;i<=l.size()-1;i++){
			if(l[i]!=r[i])ans++;
		}
	}
	cout<<ans;
	return 0;
}