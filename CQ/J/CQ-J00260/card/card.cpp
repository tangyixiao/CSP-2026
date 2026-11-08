#include <iostream>
using namespace std;
const int N = 5e5, M = 3e5;
int n, m, a[N], b[M], ans[M], c[M];
bool d[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int cntb = 0;
	cin >> n >> m;
	for (int i = 1 ; i <= n ; i++)
		cin >> a[i];
	for (int i = 1 ; i <= n ; i++){
		for (int j = 1 ; j <= n ; j++){
		    if (d[a[j]] != 1){
		        if (c[a[j]] > 1){
			        for (int k = cntb ; k >= 1 ; k--){
				        if (b[k] == a[j]){
					        cntb = k - 1;
					        b[k] = 0;
				            c[b[k]] = 0;
				            d[b[k]] = 1;
					        break; 
				        }
				        b[k] = 0;
				        c[b[k]] = 0;
				        d[b[k]] = 1;
			        }
		        }
		        b[++cntb] = a[j];
		        c[a[j]]++;
	        }
	    }
	    for (int j = 1 ; j <= m ; j++){
	    	if (c[j] == 1) ans[j]++;
		}
	}
	for (int i = 1 ; i <= m ; i++){
		cout << ans[i] << ' ';
	}
	return 0;
}
