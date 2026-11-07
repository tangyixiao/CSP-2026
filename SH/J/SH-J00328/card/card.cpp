#include <iostream>
using namespace std;
long long n,a[524288];
long long m,c[524288];
bool risup=true;// shang sheng dian lie?
void planA(){// a[i]<=a[i+1]
	for(int i=1;i<=n;i++){ c[a[i]]+=1; }
	long long sum=0;
	for(int i=1;i<=m;i++){
		sum+=c[i];
		cout<<sum<<' '; 
	}	
	return ;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
//	freopen("card4.in","r",stdin);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]){ risup=false; }
	}
	if(risup){ planA(); }
	return 0;
}
// "flase"zhe yi kuar 
// card4.ans da kai shi luan ma
