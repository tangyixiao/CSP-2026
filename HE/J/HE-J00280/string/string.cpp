#include<bits/stdc++.h> 
using namespace std;
int main(){

	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string c,s="";
	long long n,m,cnt=0,a=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>m>>c;
		a+=m; 
		for(int i=1;i<=m;i++){
			s+=c;
		}
	}
	for(int i=0;i<=a;i++){
		if(a%2==0){
			if(s[i]!=s[a-1-i])cnt+=1;
		}else{
			if(s[i]!=s[a-2-i])cnt+=1;
		}
		
	}
	cout<<cnt/2;
		

	return 0;
}
