#include<bits/stdc++.h> 
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int a[200005];
	char b[200005]; 
	int i,j;
	int max=0;
	char s[900005];
	for(i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		for(j=1;j<=a[i];j++){
			s[j+max]=b[i];
		}
		max+=a[i];
	}
	if(max==1){
		cout<<0;
		return 0;
	} 
	int z=0;
	for(i=1;i<=max/2;i++){
		if(s[i]!=s[max+1-i]){
			z++;
		}
	}
	
	cout<<z;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
