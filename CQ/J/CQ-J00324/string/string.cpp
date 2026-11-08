#include <bits/stdc++.h>
using namespace std;
const int maxn= 2e5+5;
long long a[maxn],n,ans,num,cut;
char c[maxn],s[maxn];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i] >> c[i];
		num+=a[i];
		for(int i=1;i<=n;i++){
			s[++cut] = c[i];
		}
	}
	for(int j=1;j<=a[j];j++){
		if(s[j]!=s[num+1-j]){
			ans++;
		}
	}
		for(int i=1;i<=n;i++){
		cin >> a[i] >> c[i];
		int x=1,y=n;
			while(x==y){
				if(a[x]!=0&&c[x]!=c[y]){
					if(a[x]>a[y]){
						ans+=a[y];
						a[y]-=a[x];
						y--;
						if(x==y) break;
					}
					if(a[x]=a[y]){
						ans+=a[y];
						x++;
						if(x==y) break;
						y--;
					}else{
						if(a[x]>a[y]){
							y--; 
						}
						if(a[x]<a[y]){
							x++;
							y--;
						}
					}
				}
		}
	}
	cout << ans << endl;
	return 0;
}
