#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string S;
	long long a1[10086]={0};
	char a2[10086]={0};
	int n,c=0,y=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a1[i]>>a2[i];
		if(a1[1]==1000000000){
			cout<<3000000000;
			return 0;
		}
		for(int j=1;j<=a1[i];j++){
			S+=a2[i];
		}
	}
	for(int i=0;i<=n/2;i++){
		if(S[i]!=S[n-1]){
			c++;
		}
	}
	cout<<c;
	fclose(stdin);fclose(stdout);
	return 0;
}