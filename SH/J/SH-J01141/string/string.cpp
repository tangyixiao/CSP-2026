#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,t,c,f,sum=0;
	string a,all="";
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>t;
		cin>>a;
		for(int j=1;j<=t;j++) all=all+a;
	}
	c=all.size();
	f=c/2;
	for(int k=0;k<f;k++){
		if(all[k]!=all[c-k-1]) sum++;
	}
	cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
