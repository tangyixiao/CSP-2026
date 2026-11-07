#include<bits/stdc++.h>
using namespace std;

int n;
long long a[200005];
char c[200005];
long long ans=0;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int l=1,r=n;
	long long lcnt=0,rcnt=0;
	while(l<r){
		if(a[l]-lcnt<a[r]-rcnt){
			if(c[l]!=c[r])ans+=a[l]-lcnt;
			rcnt+=a[l]-lcnt;
			lcnt=0;
			l++;
		}else if(a[l]-lcnt>a[r]-rcnt){
			if(c[l]!=c[r])ans+=a[r]-rcnt;
			lcnt+=a[r]-rcnt;
			rcnt=0;
			r--;
		}else{
			if(c[l]!=c[r])ans+=a[r]-rcnt;
			lcnt=0;
			rcnt=0;
			l++;r--;
		}
	}
	
	cout<<ans;
	return 0;
}
