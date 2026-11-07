#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	string q[10000005];
	long long ans=0;
	cin>>n;
	while(n--){
		long long m,sum=0;
		string s;
		cin>>m>>s;
		for(int i=1;i<=m;i++){
			sum++;
			q[sum]=s;
			
		}
		ans+=m;
		
	}
	string a,b;
	for(int i=0;i<q.size();i++){
		a+=q[i];
		

	}
	for(int i=q.size();i>0;i--){
		b+=q[i];
		

	}
	long long w=0;
	for(int i=0;i<q.size();i++){
		if(a[i]!=b[i])
		w++;
		
	}
	
		

	
	if(ans%2==1)cout<<w+1;
	else cout<<w;
	

	fclose(stdin);
	fclose(stdout);
	return 0;
}
