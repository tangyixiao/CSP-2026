#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN=2e5+105;
int a[MAXN],c[MAXN];
int n; 
int ans=0;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int l=1,r=0;
	for(int i=1;i<=n;i++){
		char x;
		cin>>a[i]>>x;
		c[i]=x-'a'+1;
		r+=a[i];
	}
int mid1=(l+r)/2,mid2=(l+r+1)/2;
    int s=1;
	int t=n;
    while(l<mid1&&r>mid2){
    	if(s==t){
    	 	break;
		}
    else if(a[s]>a[t]){
    		a[s]-=a[t];
    		l+=a[t];
    		r-=a[t];
    		if(c[s]!=c[t])ans+=a[t];
    		t--;
		}
		 else if(a[s]==a[t]){
		 	l+=a[s],r-=a[t];
		 	if(c[s]!=c[t])ans+=a[t];
		 	s++,t--;
		 }
		else if(a[s]<a[t]){
		a[t]-=a[s];
		l+=a[s],r-=a[s];
		if(c[s]!=c[t])ans+=a[s];
		s++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
