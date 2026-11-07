#include<bits/stdc++.h> 
using namespace std;
int n,c=0,m=0;
char q[100086];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int a[n];
	char b[n];
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		for(int j=1;j<=a[i];j++){
			q[c]=b[i];
			c++;
		}
	}
	for(int i=1;i<=c/2;i++){
		if(i<c-i+1){
			if(q[i]==q[c-i+1]){
				m++;
				m--;
			}else{
				m++;
			}
		}
		
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(b[i]==b[i+j]){
				m-=1;
				break;
			}
		}
	}
	cout<<m;
	
	return 0;
	fclose(stdin);
	fclose(stdout);
}
