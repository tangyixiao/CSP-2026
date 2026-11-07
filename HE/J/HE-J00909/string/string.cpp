#include<bits/stdc++.h>
using namespace std;
const int N=2e5+7;
long long a[N],n;
char s[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s[i];
		//cout<<a[i]<<" "<<s[i]<<'\n';
	}
	int li=0,ri=0,i=0,j=n+1;
	long long ans=0;
	while(i<j){
		if(li==0){
			li=a[++i];
		}
		if(ri==0){
			ri=a[--j];
		}
		//cout<<li<<" "<<ri<<"\n";
		if(i<j&&li>=ri){
			if(s[i]!=s[j])ans+=ri;
			li-=ri;ri-=ri;
			
		}
		else if(i<j){
			if(s[i]!=s[j])ans+=li;
			ri-=li;li-=li;
			
		}
	}
	cout<<ans;
	return 0;
}
