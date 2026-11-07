#include<bits/stdc++.h>
using namespace std;
long long ans;
string s=" ";
int f[4005][4005];
int main() {
	freopen("strig.in", "r", stdin);
	freopen("sting.out", "w", stdout);
	int n;
	cin >> n;
	int longs=0;
	for (int i = 1; i <= n; i++) {
		int a;
		char z;
		cin >> a >> z;
		for(int j=1;j<=a;j++){
			s=s+z;	
			longs++;
		}
	}
	//cout<<s<<endl;
	for (int i=1;i<=longs;i++){
		for (int j=0;j<i;j++){
			f[j][i]=min(f[j+1][i],f[j][i-1])+1;
			if(abs(i-j)>=2){
				f[j][i]=min(f[j][i],f[j+1][i-1])+1;
			}
			if(s[i]==s[j]){
				f[j][i]=min(f[j][i],f[j+1][i-1]);
			}
		}
	}
/*	for(int i=1;i<=longs;i++){
		for(int j=1;j<=i;j++){
			cout<<f[j][i]<<" ";
		}
		cout<<endl;
	}
*/	cout<<f[1][longs];
	return 0;
}