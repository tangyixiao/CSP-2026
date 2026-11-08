#include <bits/stdc++.h>
using namespace std;
const int maxn= 2e5+5;
long long a[maxn],n,ans;
char c[maxn];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++){
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
			if(x=n/2){
				
			}
		}
	//cout <<x <<' ' <<y << ' ';
	cout << ans <<endl;
	return 0;
}
