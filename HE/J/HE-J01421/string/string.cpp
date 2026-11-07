#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,q[200005],zong=0,asd,asss,j=1;
	char asa[200005];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>q[j]>>asa[j];
		zong+=q[j];
		if(asa[j]==asa[j-1]){
			j--;
			q[j]+=q[j+1];
		}
		j++;
	}
	if(j==2){
		cout<<0;
		return 0;
	}
	if(zong%2==0){
		asd=zong/2;
	}
	else{
		asd=zong/2+1;
	}
	int cbd=1;
	while(asd>0){
		asd-=q[cbd];
		cbd++;
	}
	cbd-=1;
	if(asd==0){
		cout<<zong/2;
		return 0;
	}
	if(zong%2==1){
		cout<<zong/2-(q[cbd]+asd-1);
	}
	else{
		cout<<zong/2-(q[cbd]+asd);
	}
	return 0;
}
