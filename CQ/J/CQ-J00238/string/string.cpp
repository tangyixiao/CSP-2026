#include<iostream>
using namespace std;
const int R=1e5*2+5;
int n,arr[R],ch[R];
long long int ans;
/*

aaaaabbbbccc


*/
int main(){

	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for (int i=1;i<=n;++i){
		scanf("%d %c",&arr[i],&ch[i]);
	}
	int l=1,r=n;
	while (l<=r){
		if (arr[l]>=arr[r]){
			if (ch[l]!=ch[r]){
				ans+=arr[r];
			}
			arr[l]-=arr[r];
			r--;
		}
		else{
			if (ch[l]!=ch[r]){
				ans+=arr[l];
			}
			arr[r]-=arr[l];
			l++;
		}
	}
	cout<<ans;
	return 0;
}

