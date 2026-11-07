#include<bits/stdc++.h>
using namespace std;
long long a;
string b="";
char s;
int main(){
	freopen("string.in.txt","r",stdin);
	freopen("string.out.txt","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		cin>>s;
		while(a--){
			b+=s;
		}
	}

	long long x=0,y=b.size()-1,ans=0;
	for(int i=0;i<b.size();i++){
	
		if(x<=y){
			if(b[x]!=b[y]){
				ans++; 
			}
			x++;y--;
		}else{
			cout<<ans;
			return 0;
		}
		
	}
	return 0;
} 