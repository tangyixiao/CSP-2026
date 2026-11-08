#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[100000];
int st[100000];
int mp[100000];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int len=0;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			bool f=false;
			int p;
			for(int k=1;k<=len;k++){
				if(st[k]==a[j]){
					f=true;
					p=k;
					break;
				}
			}
			if(f==true){
				int t=len;
				for(int k=p;k<=t;k++){
					st[k]=0;
					len--;
				}
				len++;
				st[len]=a[j];
			}
			else {
				len++;
				st[len]=a[j];
			}
		}
		for(int j=1;j<=len;j++){
			cout<<st[j];
			mp[st[j]]++;
		}
		cout<<endl;
	}
	for(int i=1;i<=m;i++) cout<<mp[i]<<' ';
    return 0;
}

