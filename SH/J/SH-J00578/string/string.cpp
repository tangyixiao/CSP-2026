#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int n,o,p,a[200007];
char get(int t){
	int la;
	for(int i=1;i<=n;i++){
		if(la<=t && a[i]>t){
			return c2[i-1];
		}
		la=a[i];
	}
}
int main(){
	//freopen("string.in","r",stdin);
	//freopen("sa#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int n,o,p;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>o>>s1;
		for(int j=0;j<o;j++){
			c1+=s1;
		}
		
	}
	//cout<<c1<<endl;
	for(int i=0;i<c1.length();i++){
		if(c1[i]!=c1[c1.length()-i-1]){
			
			p++;
		}
	}
	cout<<p/2;
}tring.out","w",stdout);
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cin>>o>>s1;
		c2+=s1;
		a[i]=o+a[i-1];
		
	}
	//cout<<c1<<endl;
	for(int i=0;i<c1.length();i++){
		if(get(i)!=get(a[n]-i-1)){
			
			p++;
		}
	}
	cout<<p/2;
}
