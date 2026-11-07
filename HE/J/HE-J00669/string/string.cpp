#include <bits/stdc++.h>
using namespace std;
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("string.in","w",stdin);
	freopen("string.out","r",stdout); 
	int n,cnt=0,ans=0,sum=0;
	cin>>n;
	int a[n+2];
	string s,key;
	char b[n+2];
	char c[n+2];
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
		for(int j=0;j<a[i];j++){
			b[j]=b[i];
		} 
	}
	for(int k=n-1;k>0;k--){
		if(b[k]=b[ans]){
			continue;
		}
		else{
			b[k]=b[ans];
			sum++;
		}
		ans++;
	}
	for(int j=n;j>=0;j--){
			c[cnt]=b[j];
			cnt++; 
		}	
	cout<<sum;
	return 0;
	fclose(stdin);
	fclose(stdout);
}
