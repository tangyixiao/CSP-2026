#include<bits/stdc++.h>
using namespace std;
const int N= 2e5+10;
int a[N];long long c[N],d[N],e[2*N];char b[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,cnt=0;long long ans=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
		c[i+1]=c[i]+a[i];
		e[cnt]=c[i+1];
		cnt++;
		//cout<<c[i]<<" "<<i<<"  ";
	}for(int i=0;i<n;i++){
		d[i+1]=d[i]+a[n-1-i];
		e[cnt]=d[i+1];
		cnt++;
		//cout<<c[i]<<" "<<i-n-1<<"  ";
	}
	sort(e,e+2*n);
	int i=0,j=0; 
	for(int k=0;k<2*n;k++){
		if(b[i]!=b[n-j-1]){
			ans+=e[k]-max(c[i],d[j]);
		}if(c[i+1]==e[k]){
			i++;
		}else{
			j++;
		}
	}
	cout<<ans/2;
	return 0;
} /*

3
2 a
2 b
1 c


*/