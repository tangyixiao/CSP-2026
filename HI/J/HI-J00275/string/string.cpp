#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,ans=0,sum=0;
	char x;
	cin>>n;
	int a[n][2]={};
	for(int i = 0;i<n;i++){
		cin>>a[i][0];
		cin>>x;
		
		a[i][1]=x-'a'+1;
		ans+=a[i][0];
	}
	char str1[ans];
	for(int i = 0;i<n;i++){
		for(int j=0;j<a[i][0];j++){
			str1[sum]=a[j][1]+'a'-1;
			sum++;
		}
	}
	cout<<0;
	

	return 0;	
} 
