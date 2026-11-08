#include<bits/stdc++.h>

using namespace std;
int q = 1;
long long a , b ,c;
int t = 0;
char m;
string s;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>m;
		for(int j=0;j<a;j++){
		   s += m;	
		}
	}
	b = s.size();
	c = b;
    for(int i=1;i<=b/2;i++){
    	if(s[i]==s[c]){
    		q = 1;
		}
		else{
			q = 0;

		}
    	c--;
	}
	if(q == 1){
	cout<<0<<endl;	
	}
    else if(q == 0){
    	c = b;
    	for(int i=0;i<b/2;i++){
    		if(s[i]!=s[c]){
    			t++;
			}
			c--;
		}
		cout<<t;
	}
    
	return 0;
} 
