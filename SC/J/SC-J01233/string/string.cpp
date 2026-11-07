#include<bits/stdc++.h>
using namespace std;
string c,s="",x="",x1="";
long long a,len,m,n,sum,sum1;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			s+=c;
		}
	}
	len=s.size();
	if(len%2==0){
		m=len/2;
		for(int i=m-1;i>=0;i--){
		    x+=s[i];
	    }
	    for(int i=m;i<len;i++){
		    if(x[i-m]!=s[i]){
			    sum++;
		    }
    	}
	    for(int i=len-1;i>=m;i--){
	    	x1+=s[i];
	    }
	    for(int i=0;i<m;i++){
    		if(x[i]!=s[i]){
	    		sum1++;
	    	}
    	}
	}
	else{
		m=len/2+1;
		for(int i=m-1;i>=0;i--){
		    x+=s[i];
	    }
	    for(int i=m-1;i<len;i++){
		    if(x[i-m]!=s[i]){
			    sum++;
		    }
    	}
	    for(int i=len-1;i>=m-1;i--){
	    	x1+=s[i];
	    }
	    for(int i=0;i<m;i++){
    		if(x[i]!=s[i]){
	    		sum1++;
	    	}
    	}
	}
	cout<<min(sum,sum1);
	return 0;
}