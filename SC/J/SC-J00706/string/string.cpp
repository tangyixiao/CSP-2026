#include <bits/stdc++.h>
#include <cstring>
using namespace std;

const int MAXN = 200005;
long long num[MAXN];
string size[MAXN];

int main(){
	freopen("string.in","w",stdin);
	freopen("string.out","r",stdout);
	int long long n = 0;
	cin >> n;
	for(int i = 0;i < n;i ++){ 
		cin >> num[i];
		cin >> size[i];
	}
	int long long sum = 0;
	long long f = 0;
	long long w = n-1;
	long long cha = 0;
	while(f <= n){
		long long a = num[f] - num[w];
		cha = a;
		if(cha >= 0){
			if(size[f] != size[w]){
				sum += num[w];
			}
			w --;
			num[f] = cha;
		}else{
			if(size[f] != size[w]){
				sum += num[f];
			}
			f ++;
			num[w] = 0 - cha;
		}
		if(f == w){
			break;
		}
	}
	cout << sum;
}