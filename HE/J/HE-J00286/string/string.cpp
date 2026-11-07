#include<bits/stdc++.h>
using namespace std;
int n,t1,t=-1,sum=0;
char a[200000005],t2;
int main(){
	freopen("string.in","r",stdin);
	freopen("stringt.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t1>>t2;
		while(t1--){
			t++;
			a[t]=t2;
		}
	}
	for(int i=0;i<t/2;i++){
		if(a[i]!=a[t-i-1]) sum++;
	}cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

