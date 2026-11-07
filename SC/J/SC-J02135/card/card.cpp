#include<bits/stdc++.h>
using namespace std;
int n, m;
int a[200005];
int b[200005];
int c[9000005];



int main(){
	srand(time(0));
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
    for	(int i = 1; i <= n; i++){
    	cin >> a[i];
	}
	int num = n;
    if(m == 1){
    	cout << n;
    	return 0;
	}
	else if(m == 2){
		int s = 1;
		while(num--){
			int op = n;
			for(int j = 1; j<= n; j++){
				c[j] = 0;
			}
			for(int i = n-num+1; i <= n; i++){
				int p = a[i];
				c[i] = p;
				for(int j = p-1; j>= 1; j--){
					if(c[i] == c[j]){
						for(int k = j; k < i; k++){
							c[i] = 0;
							op--;
						}
					}
				}
			}
			int u = 0;
			for(int i = 1; i <= op; i++){
				if(c[i] == 0){
					op++;
					continue;
				} 
				else{
					b[c[i]]++;
				}
			}
			for(int i = 1; i <= m; i++){
				cout << b[i] <<' ';
			}
			
		}
	}
	else{
		int x = rand()%100000000+1;
		for(int i = 1; i <= x; i++){
			cout << rand()%100000+1;
		}
	}
    
}