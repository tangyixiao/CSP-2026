#include<bits/stdc++.h>
using namespace std;
int main(){
//	freopen("and.in","r",stdin);
//	freopen("and.out","w",stdout);
	int n,m,a,y,l,c[101];
	int s1[101];
	cin >> n >> m;
	for(int i=0;i<=n;i++){
		cin >>a;
		c[i]=a;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if (i==j){
				continue;
			}
			else{
				y=(c[i]&c[j]);
				s1[i]=y;
			}
		}
	}
	cout << y;
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
