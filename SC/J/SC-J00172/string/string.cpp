#include<bits/stdc++.h>

using namespace std;

const int MAXN = 200005;
int a[MAXN];
char c[MAXN];
int l, r;
int n;
int num;
long long cnt;
char cl, cr;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
    cin>>n;
    for(int i=0; i<n; i++){
    	cin>>a[i]>>c[i];
	}
	l = 0; r = n-1;
	while(l<r){
		cl = c[l]; cr = c[r];
		if(a[l]<a[r]){
			num = a[l];
			a[l] = 0; a[r] -= num;
			l++;
		}
		else{
			num = a[r];
			a[l] -= num; a[r] = 0;
			r--;
		}
		if(cl!=cr) cnt+=num;
	}
	cout<<cnt<<endl;
	fclose(stdin);
	fclose(stdout); 
	return 0;
}