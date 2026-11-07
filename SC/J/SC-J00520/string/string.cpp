#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int n;
int a[N];
char c[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int i=1,j=n;
	int ans,ansi;
	if(a[i]>a[j]){
		ans=a[i];
		ansi=i;//ans里现在储存的下标 
	}else{
		ans=a[j];
		ansi=j;
	}
	int sum=0;
	while(j>i){//?
		if(c[i]!=c[j]){ 
			if(ansi==i){
				if(ans>a[j]){
				//	cout<<i<<" "<<j<<endl;
				//	cout<<1<<endl;
					sum+=a[j];
					ans=ans-a[j];
					j--;//j的字母被消耗 
				}else{
				//	cout<<i<<" "<<j<<endl;
				//	cout<<2<<endl;
					sum+=ans;
					ans=a[j]-ans;
					if(ans==0){
						j--;
						ans=a[j];
					}
					ansi=j; 
					i++; 
				}
			}else if(ansi==j){
				if(ans>a[i]){
				//	cout<<i<<" "<<j<<endl;
				//	cout<<3<<endl;
					sum+=a[i];
					ans=ans-a[i];
					i++; 
				}else{
				//	cout<<i<<" "<<j<<endl;
				//	cout<<4<<endl;
					sum+=ans;
					ans=a[i]-ans;
					if(ans==0){
						i++;
						ans=a[i];
					} 
					ansi=i; 
					j--; 
				}
			}	
		}else if(c[i]==c[j]){
			if(a[i]>a[j]){
				//	cout<<i<<" "<<j<<endl;
				//	cout<<5<<endl;
				//	cout<<c[i]<<" "<<c[j];
				ans=a[i]-a[j];
				ansi=i;
				j--; 
			}else{
				//	cout<<i<<" "<<j<<endl;
				//	cout<<6<<endl;
				ans=a[j]-a[i];
				if(ans==0){
					j--;
					ans=a[i];
				}
				ansi=j;
				i++;
			}
		}
	}
	cout<<sum;
	
	return 0; 
} 
//    ?????????
/*



11
12 a
23 d
4 g
11 f
1 m
9 v
24 r
46 a
35 j
23 h
29 i



*/