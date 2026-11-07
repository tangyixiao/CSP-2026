#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	char s;
	vector<char> b;
	
	int n,x,tot=0,tolll=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		tolll+=x;
		//cin>>a[i-1];
		cin>>s;
		for(int j=1;j<=x;j++) b.push_back(s);

	}
	if(tolll%2==0){
		for(int i=1;i<=tolll/2;i++){
			if(b[tolll/2+i-1]!=b[tolll/2-i]) tot++;
		}
	}else{
		for(int i=1;i<=tolll/2+1;i++){
			if(b[(tolll+1)/2+i-1]!=b[(tolll+1)/2-i-1]) tot++;
		}
	}
	cout<<tot-1;

	fclose(stdin);
	fclose(stdout);
	return 0;
}
