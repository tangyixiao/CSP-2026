#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long ls[10000005] = {0};
long long f[10000005] = {0};
long long llss[1000005] = {0};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> ls[i];
	}
	long long nnnnnn = n;
	while(n > 0){
		while(nnnnnn > 0){
			int i = 0;
			int ii = 0;
			for(int j = 0;j < n;j++){
				if(llss[j] == llss[i]){
					for(int g = j;g <= i;g++){
						 llss[g] = 0;
					}
					i = j;
				}
			}
			llss[i] = ls[ii];
			i++;
			ii++;
			nnnnnn--;
		}
		for(int i = 0;i < sizeof(llss);i++){
			f[llss[i]]++;
		}
		n--;
	}
	for(int i = 1;i <= m;i++){
		cout << f[i] << " ";
	}
	
	return 0;
}




