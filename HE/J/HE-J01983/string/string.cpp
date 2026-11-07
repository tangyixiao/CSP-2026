#include<bits/stdc++.h>
using namespace std;
string s;
long long a[200000];
int n;
int ans[20];
int x[20];
void cz(){
	for(int i=0;i<20;i++){
		x[i]=0;
	}
}
void cs(int a){
	int i=0;
	while(a>0){
		x[i]=a%10;
		i++;
		a/=10;
	}
}
int fna(int a){
	for(int i=19;i>=0;i--){
		if(ans[i]!=a){
			return i;
		}
	}
}
int gjj(int a){
	cs(a);
	int jw=0;
	int y[20];
	for(int i=0;i<20;i++){
		y[i]=ans[i];
		
	}
	for(int i=0;i<20;i++){
		int h=y[i]+x[i]+jw;
		jw=h/10;
		ans[i]=h;
	}
	cz();
	return fna(0);
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr),cout.tie(nullptr);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		char c;
		cin>>a[i]>>c;
		s+=c;
	}
	int m=n-1;
	int f=0;
	for(int i=0;i<n;i++,m--){
		if((m<=i)){
			break;
		}
		if(s[i]!=s[m]){
			f=gjj(max(a[i],a[m]));
		}
	}
	for(int i=f;i>=0;i--){
		cout<<ans[i];
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
