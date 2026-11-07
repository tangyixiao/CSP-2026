#include <bits/stdc++.h>
using namespace std;

int a[200005],b[200005][200005];

int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    
    int n,m;
    cin >> n >> m;
    
    for(int i=0;i<n;i++){
    	cin >> a[i];
	}
	
	int maxn = 0;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(b[i][j] == 0){
				b[j][i] = (a[i] & a[j]);
				maxn = max(b[j][i],maxn);
			}
		} 
	} 
	
	cout << maxn;
    
    return 0;
}
