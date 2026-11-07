#include<bits/stdc++.h>
using namespace std;
int n;
long long a[200010],sum=0,ans=0;
char c[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	string s1,s2;
	int flag=sum%2;
	for(int i=2;i<=n;i++){
		a[i]+=a[i-1];
	}if(flag==0){
		for(int i=1;a[i]<=sum/2;i++){
		    for(int j=1;j<=a[i]-a[i-1];j++){
			    s1+=c[i];
		    }
	    }  
	    for(int i=n;a[i]>sum/2;i--){
		    for(int j=1;j<=a[i]-a[i-1];j++){
			    s2+=c[i];
		    }
	    }
	    for(int i=0;i<sum/2;i++){
		    if(s1[i]!=s2[i]){
			    ans++;
		    }
	    }
	}else{
		for(int i=1;a[i]<=sum/2+flag;i++){
			if(a[i+1]>=sum/2+flag){
				for(int k=1;k<sum/2+flag-a[i];k++){
					s1+=c[i];
				}
				break;
			}
		    for(int j=1;j<=a[i]-a[i-1];j++){
			    s1+=c[i];
		    }
	    }  
	    for(int i=n;a[i]>sum/2+flag;i--){
	    	if(a[i-1]<=sum/2+flag){
				for(int k=1;k<=a[i]-(sum/2+flag);k++){
					s2+=c[i];
				}
				break;
			}
		    for(int j=1;j<=a[i]-a[i-1];j++){
			    s2+=c[i];
		    }
	    }
	    for(int i=0;i<sum/2;i++){
		    if(s1[i]!=s2[i]){
			    ans++;
		    }
	    }
	}
	printf("%lld",ans);
	return 0;
}