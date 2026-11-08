#include <bits/stdc++.h>
using namespace std;
int n,a,ans,t;
char c;
char b[200005];//O.o
int main(){
	freopen("name.in","r",stdin);
	freopen("name.out","w",stdout);
	cin >> n;
	for(int i = 0;i<n;i++){
		cin >> a >> c;
		ans+=a;
		for(int j = 0;j<a;j++){
			b+c;
		}
	}//sb code
	for(int i = 0;i<(ans+1)/2;i++){
		if(b[i]!=b[ans-i]){
			t++;//gunmu
		}
	}
	cout << t << endl << b;
	return 0;
} 

