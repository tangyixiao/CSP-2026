#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    char s[200001];
    double a[200001];
    long long n,m,b=0,c=0,d=0,ans=0,l=0,q=0;
    cin>>n;
	m=n;
    while(n){
        cin>>a[n];
        b+=a[n];
        cin>>s[n];
    	n--;
	}
    for(int i=1;c<=b/2;i++){
        c+=a[i];

		while(d<c){
		 d+=a[m];
            if(s[i]!=s[m]&&d<=c){
			ans+=a[m];
			a[i]-=a[m];
		}
			m--;
			
		}
        if(s[i]!=s[m]){
        	ans+=a[i];
        	a[m]-=a[i];
		}

	}
	cout<<ans;
	return 0;
}