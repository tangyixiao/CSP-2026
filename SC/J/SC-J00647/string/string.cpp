#include<bits/stdc++.h> 
using namespace std;
char s[1000000],s1[1000000];
long long an[1000000],b[1000000],l[1000000],b1[1000000],l1[1000000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,ans=0,t=0;
	char a;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>b[i]>>a;
		b1[n-i+1]=b[i];
		s[i]=a;
		s1[n-i+1]=a;
	}
	int js=1,js1=1,q=1;
	while(js<=n && js1<=n){

		if(s[js]!=s1[js1]){
    	    ans+=min(b[js],b1[js1]);
			}
    	    if(b[js]>b1[js1]){
    	    	b[js]-=b1[js1];
    	    	js1+=1;
    	    	continue;
			}
			if(b1[js1]>b[js]){
    	    	b1[js1]-=b[js];
    	    	js+=1;
    	    	continue;
			}
			if(b1[js1]==b[js]){
				js+=1;
				js1+=1;
				continue;
			}
			
	}
	cout<<ans/2;
	fclose(stdin);
	fclose(stdout);
	return 0;
}