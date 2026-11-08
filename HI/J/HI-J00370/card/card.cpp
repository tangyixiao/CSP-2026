#include<bits/stdc++.h>
using namespace std;
long long n,m,c,b1 = 0,e = 0;
long long a[500005],b[500005],m1[200005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	for(int i = 1;i <= n;i++){
		for(int j = i;j <= n;j++){
			if(c != 0){
				b1 = 0;
				for(int k = 1;k <= c;k++){
					if(b[k] == a[j]){
						e = 0;
						for(int d = k;d <= c;d++){
							b[d] = 0;
							e++;
						}
						c -= e;
						b[k] = a[j];
						c++;
						b1 = 1;
					}
				}
				if(b1 == 0){
					b[c + 1] = a[j];
					c++;
				}
			}
			if(c == 0){
				b[c + 1] = a[j];
				c++;
			}
		}
		for(int i1 = 1;i1 <= m;i1++){
			for(int j = 1;j <= c;j++){
				if(b[j] == i1){
					m1[i1]++;
					break;
				}
			}	
		}
		for(int i1 = 1;i1 <= c;i1++){
			b[i1] = 0;
		}
		c = 0;
	}
	for(int i = 1;i <= m;i++){
		cout << m1[i] <<" ";
	}
	return 0;
}
