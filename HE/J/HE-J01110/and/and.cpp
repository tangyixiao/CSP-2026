#include<bits/stdc++.h>
using namespace std;
long long a[100005];
long long s[20000000005];
int main(){
	freopen("and1.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s[a[i]]++;
	}
	for(int i=1;i<=20000000005;i++){
		if(s[i]>1){
			cout<<i;
			return 0;
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
