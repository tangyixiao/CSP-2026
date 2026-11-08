#include<bits/stdc++.h>
using namespace std;
int n;
int acnt;
int lina;
int cnt;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int ina[n]={};
	char inb[n]={};
	for(int i=0;i<n;i++){
		cin>>ina[i];
		cin>>inb[i];
	}
	for(int i=0;i<n;i++){
		lina=lina+ina[i];
	}
	char s[lina]={};
	for(int j=0;j<n;j++){
		for(int i=0;i<ina[j];i++){
			s[cnt]=inb[j];
			cnt++;
		}
	}
	if(lina%2!=0){
		for(int i=0;i<lina+1/2;i++){
			if(s[i]!=s[lina-i]){
				acnt++;
			}
		}
	}
	else{
		for(int i=0;i<lina/2;i++){
			if(s[i]!=s[lina-i]){
				acnt++;
			}
		}
	}
	cout<<acnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
