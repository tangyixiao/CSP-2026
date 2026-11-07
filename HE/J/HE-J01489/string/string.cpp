#include <bits/stdc++.h>
using namespace std;int l=0;int num;
int main(){int a[200010];char b[200010];char st[1000000];int sum=0;
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
	}for(int i=0;i<n;i++){
		for(int j=0;j<a[i];j++){
			st[l]=b[i];l++;
		}
	}for(int i=0;i<n;i++){
		num+=a[i];
	}for(int i=0;i<n;i++){
		if(st[i]!=st[num-i-1]){
			sum++;
		}
	}cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0; 
} 
