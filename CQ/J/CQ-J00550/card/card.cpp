#include <bits/stdc++.h>
using namespace std;

int N[500006] , MAX[500006] , Sum[500006];
int M[3007][3007] , NUM[3007];
int main(){
	freopen("card.in" , "r" , stdin);
	freopen("card.out" , "w" , stdout);
	long long n , m;
	cin >> n >> m;
	for (int i=1;i<=n;i++){
		cin >> N[i];
	}
//	if (m <= 3000){
//		for (int i=1;i<=n;i++){
//			MAX[N[i]] = i;
//		}
//		for (int i=1;i<=m;i++){
//			for (int j=MAX[i];j<=n;j++){
//				j = MAX[N[j]];
//			    M[i][N[j]]++;
//			}
//		}
//		for (int i=1;i<=n;i++){
//			NUM[N[i]] ++;
//		}
//		for (int i=1;i<=n;i++){
//			for (int j)
//		}
//		
//	} 
	for (int i=1;i<=n;i++){
		MAX[N[i]] = i;
	}
	for (int opens = 1;opens <=n ; opens++){
		for (int i=opens;i<=n;i++){
			if (MAX[N[i]] == 0) Sum[N[i]]++;
			if (MAX[N[i]] == 0) continue;
			i = MAX[N[i]];
			Sum[N[i]]++;
		}
	}
	for (int i=1;i<=m;i++){
		cout << Sum[i] << ' ';
	}
	return 0;
}
