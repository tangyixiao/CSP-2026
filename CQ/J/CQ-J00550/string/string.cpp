#include <bits/stdc++.h>
using namespace std;

long long N[200006] , SUM_N[2000006];
int ist[2000006];
char p;
long long Sum = 0;
int main(){
	freopen("string.in" , "r" , stdin);
	freopen("string.out" , "w" , stdout);
	int n;
	cin >> n;
	long long mid = (1+n)/2;
	for (int i=1;i<=n;i++){
		cin >> N[i];
		cin >> p;
		ist[i] = p - 'a';
	}
	for (int i=1;i<=n;i++){
		Sum += N[i];
	}
	mid = Sum / 2;
	long long Sum2 = 0;
	int IN = 0;
	for (int i=1;i<=n;i++){
		SUM_N[i] = SUM_N[i-1] + N[i];
	}
	for (int i=1;i<=n;i++){
		Sum2 += N[i];
		if (Sum2 >= mid){
			IN = i;
			break;
		}
	}
	long long dos = 0;
	int INA = IN , INB = IN;
	for (long long i=1;i<=mid;i++){
		cout << INA << ' ' << INB << endl;
		while (SUM_N[INA-1] + 1 > mid-i+(Sum%2==0) && INA != 1) INA--;
		while (SUM_N[INB] < i && INB != n) INB++;
		if (ist[INA] == ist[INB]){
			dos++;
		}
	}
	cout << dos;
	
	//while (SUM_N[IN-1] + 1 > mid) mid--;
	//while (SUM_N[IN] < mid) mid++;
//	if (Sum % 2 == 0){
//		mid++;
//		long long dos = 0;
//		long long num1 = 0 , num2 = 0 , N1n = IN , N2n = IN;
//		for (int i = 0;i<=mid;i++){
//			if (num1 == num2 && ist[N1n] == ist[N2n]){
//				long long Go = SUM_N[N1n](SUM_N[N1n-2] + 1);
//				if (num2 + SUM_N[N2n+1] < Go) Go = num2 + SUM_N[N2n+1];
//				num1 += Go;
//				num2 += Go;
//				long long N1 = N1n , N2 = N2n
//				while (SUM_N[N1-1] + 1 > mid-Go+1 && N1 != 1){
//					N1--; 
//				}
//				while (SUM_N[N2] < mid+Go)
//			}
//			if (N1n == 1 && N2n == 1) break;
//		}
//	}
	return 0;
}
