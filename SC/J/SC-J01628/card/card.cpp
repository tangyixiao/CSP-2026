#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int s[500005];
int t[500005];
int main () {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n>=200005){
		for(int i=1;i<=n;i++){
			cout<<n<<" ";
		}
	}
	else {
		int n1=n;
		while(n1--){
			int i=0,l=0;
			while(i++){
				if(i>n){
					break;
				}
				for(int i=1;i<=l;i++){
					if(s[i]==a[i]){
						l=i-1;
						break;
					}
				}
				s[++l]=a[i];
			}
			for(int i=1;i<=l;i++){
				t[s[i]]++;
			}
		}
		for(int i=1;i<=m;i++){
			cout<<t[i]<<" ";
		}
	}//把分给我求你了！
	return 0;
}