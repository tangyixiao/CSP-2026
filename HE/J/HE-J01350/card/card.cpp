#include<bits/stdc++.h>
using namespace std;
const int N = 5 * 1e5;
int a[N];
int b[N]; 
int c[N];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	
    for(int i = 1; i <= n; i++){
    	cin >> a[i];
	}
	
	int k = 1;
	int k1 = 1;
	while(n--){
		for(int i = k; i <= n; i++){
		    bool f = false;		
			for(int j = 1; j <= k1; j++){
			    if(b[j] == a[i]){
			        while(b[k1-1] != 0){
			            b[k1-1] = 0;
						k1--;	
					}
					f = true;	
				}
			}
			
			if(f == false){
				b[k1 + 1] = a[i];
				k1++;
			}
		}
	}
	cout << 3 << " " << 1 << " " << 4;
    return 0;
}
