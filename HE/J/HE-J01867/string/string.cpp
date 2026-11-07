#include <bits/stdc++.h>
using namespace std;
int n,c=0,cnt;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s,s1,s2;
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		char r;
		cin>>x>>r;
		for(int j=c+1;j<=c+x;j++){
			s[j]=r;
		}
		c=c+x;
	}
	if(c%2!=0){
		for(int i=1;i<=c/2;i++){
		    s1[i]=s[i];
	    }
	    for(int i=c/2+2;i<=c;i++){
			s2[i]=s[i];
	    }
	    for(int i=1;i<=s1.size();i++){
	    	if(s1[i]!=s2[i]){
	    		cnt++;
			}
		}
    }else{
    	for(int i=1;i<=c/2;i++){
		    s1[i]=s[i];
	    }
	    for(int i=c/2+1;i<=c;i++){
			s2[i]=s[i];
	    }
	    for(int i=1;i<=s1.size();i++){
	    	if(s1[i]!=s2[i]){
	    		cnt++;
			}
		}
	}
	
	cout<<cnt;
	return 0;
}
