#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
#include<utility>
#include<vector>
#include<cmath>
#include<stack>
#include<queue>
#include<map>
#include<set>
using namespace std;
int a[200005];
bool v[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int ans=0x3fffffff;
	for(int t=1;t<=m;t++){
		int mx=0,mid;
		for(int i=1;i<=n;i++){
			if(ans&a[i]>mx&&(!v[i])){
				mx=ans&a[i];
				mid=i;
			}
		}
		ans&=a[mid];
		v[mid]=1;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
