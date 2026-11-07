#include<bits/stdc++.h>
using namespace std;
struct node{
	int x;
	char y;
};
long long m[102400];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,sum=0,ans=0,o=1,l=1;
	node a[1024];
	string s;
	cin>>n;
	for(int i=1;i<=n;i++){		
		cin>>a[i].x>>a[i].y;
		m[a[i].y-'0']++;
		l++;
		for(int j=1;j<=a[i].x;j++){
			s[o++]=a[i].y;
		}
		sum+=a[i].x;
	}
	int e=0;
	for(int i=1;i<=l;i++){
		if(m[i]>0){
			e++;
		}
	}
	if(e==1){
		cout<<0;
		return 0;
	}
	for(int i=1;i<=sum/2;i++){
		if(s[i]!=s[sum-i+1]){
			ans++;			
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
