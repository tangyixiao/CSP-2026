#include<bits/stdc++.h>
#define int long long
const int N=5e5+5;
const int M=3e5+5;
 
using namespace std;
int n,m;
int a[N],ans[M];

signed main(){
    freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}	
	//A:考虑只增不减
	for(int i=1;i<=n;i++){
		string s;
		s=a[i]+'0';
		for(int j=i+1;j<=n;j++){
			if(a[j]+'0'!=a[j-1]+'0'){
				s+=a[j]+'0';
			}
		}
		for(int i=1;i<=m;i++){
			for(int j=0;j<s.size();j++){
				if(i+'0'==s[j]){
					ans[i]++;
					continue;
				}
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
//若只增不减：
//原数组：1 1 2 3 3
//1：1 2 3
//2：1 2 3
//3：2 3
//4：3
//5：3
//2 3 5

/*
3 2
1 1 2
1:1 2
2:1 2
3:2
2 3
*/
