#include<bits/stdc++.h>
using namespace std;
struct aabbc{
	long long shu;
	char s;
}k[300000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin >> a;
		cin >> c;
		k[i].shu=a;
		k[i].s=c;
	}

//	for(int i=1;i<=n;i++){
//		if(){
//			k[i].
//		}
//	}
	long long sum=0;
	int i=1;
	int j=n;
	while(n>0){
		if(k[i].shu==0){
			i++;
		}
		if(k[j].shu==0){
			j--;
		}
		if(i>=j){
			cout << sum;
			return 0;
		}
		if(k[j].shu!=0 && k[i].shu!=0){
			if(k[i].s==k[j].s){
				if(k[i].shu<k[j].shu){
					k[j].shu-=k[i].shu;
					k[i].shu=0;
					
					
				}
				else{
					k[i].shu-=k[j].shu;
					k[j].shu=0;
					
				}
				
			}
			else{
				if(k[i].shu<k[j].shu){
					sum+=k[i].shu;
					k[j].shu-=k[i].shu;
					k[i].shu=0;
					
					
				}
				else{
					sum+=k[j].shu;
					k[i].shu-=k[j].shu;
					k[j].shu=0;
					
				}
				
			}
			
		}
//		cout << k[i].shu << " " << k[i].s<<" "
//					<<   k[j].shu << " " << k[j].s << endl;	
	}
	return 0;
}
