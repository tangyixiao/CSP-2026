#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,a[200010],cnt=0;
	string b[20010];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>b[i];
	}
	int p=1,q=n;
	for(int i=1;i<=n;i++){
		string x=b[p],y=b[q];
		while(a[p]>0&&a[q]>0){
			if(b[p]!=b[q]){
				cnt++;
			} 
			a[p]--;
			a[q]--;
		}
		if(a[p]==0){
			p++;
		}
		else q--;
	}
	cout<<cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
}