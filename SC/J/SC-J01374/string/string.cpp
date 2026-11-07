#include<bits/stdc++.h>
using namespace std;
long long z=0,n,ans=0,cd,x;
string s1,s2;
char c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i){
		scanf("%lld",&x);
		cin>>c;
		for(int j=1;j<=x;++j){
			s1[j+z]=c;
		}
		z+=x;
	}
	
	if(z%2==0){
		for(int i=1;i<=z/2;++i){
			s2[i]=s1[i];
			s2[z+1-i]=s1[i];
		}
		
	}else{
		int zz=z-1;
		for(int i=1;i<=zz/2;++i){
			s2[i]=s1[i];
			s2[z+1-i]=s1[i];
		}
		s2[z/2+1]=s1[zz/2+1];
	}
	
	for(int i=1;i<=z;++i){
		if(s1[i]!=s2[i])	ans++;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
//2
//2 a
//2 a

//3
//2 a
//2 b
//1 c

//6
//1000000000 a
//1000000000 a
//1000000000 a
//1000000000 b
//1000000000 b
//1000000000 b