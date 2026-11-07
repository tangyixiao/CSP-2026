#include<bits/stdc++.h>
using namespace std;
struct letter{
	int a;
	char c;
};
int main(){
//	freopen("string.in","r",stdin);
//	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	letter x[20010]={};
	int len=0;
	for(int i=1;i<=n;i++){
		cin>>x[i].a>>x[i].c;
		len+=x[i].a;
	}
	string s[100010]={};
	
	if(n==1){
		cout<<0;
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=x[i].a;j++){
			s[i]=x[i].c;
		}
	}
	for(int i=1;i<n;i++){
		if(x[i].a!=x[i+1].a){
			break;
		}else if(i=n-1){cout<<0;}
		else{continue;}
	}
	int cnt=0;
	
	for(int i=1;i<=len/2;i++){
		if(s[i]!=s[len+1-i]){
			cnt++;
		}
	}
	cout<<cnt;
//	fclose(stdin);
//	fclose(stdout);
	return 0;
}
