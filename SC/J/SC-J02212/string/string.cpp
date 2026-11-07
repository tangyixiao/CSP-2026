#include<bits/stdc++.h>
using namespace std;
int n;
string a,b;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i = 1;i <= n;i++){
		char aa;
		int b;
		scanf("%d %c",&b,&aa);
		for(int j = 1;j <= b;j++){
			a += aa;
		}
	}	
	int l = a.size();
	for(int i = 0;i < l;i++){
		b[l - i - 1] = a[i];
	}
	unsigned long long cnt = 0;
	for(int i = 0;i <= l;i++){
		if(b[i] != a[i]){
			cnt++;
		}
	}
	cout<<cnt/2;
	return 0;
} 
/*
aabcaa;
aacbaa;
1 6
2 1000000000 a
3 1000000000 a
4 1000000000 a
5 1000000000 b
6 1000000000 b
7 1000000000 b
cabdsaa;
aasdbac
*/
