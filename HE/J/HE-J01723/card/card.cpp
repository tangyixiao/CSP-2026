#include <iostream>
#include <vector>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	vector<int> a(500005);
	vector<int> b(300005,0);
	int n,m;
	cin >> n >> m;
	for (int i = 1;i <= n;i++){
		cin >> a[i]; 
	}
	int i = 1;
	int j = 1;
	int num = 1;
	for (int k = 1;k <= n;k++){
		num = k;
		for (i = k;i <= n;i++){
			for (j = i + 1;j <= n;j++){
				if (a[i] == a[j]){
					i = j;
					break;
				}
			}
			if (j != n + 1){
				i--;
				num = j;	
			}else{
				b[a[i]]++;
				num++;
			}
		}
		for (int l = num;l <= n;l++){
			b[a[l]]++;
		} 
	} 
	for (int i = 1;i <= m;i++){
		if (b[i] != 0){
			cout << b[i] << " ";
		}
	}
	return 0;
}
