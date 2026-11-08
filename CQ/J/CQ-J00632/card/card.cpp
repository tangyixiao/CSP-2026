#include <iostream>
#include <fstream>
using namespace std;
long a[500100],ans[500100]={0}; bool af[500100]={0};

int main(){
	ifstream in("card.in");
	ofstream out("card.out");
	long m,n; in>>n>>m;
	for(long i=1;i<=n;i++){
		in>>a[i];
	}
	af[a[n]]==1; ans[a[n]]++;
	for(long i=n-1;i>0;i--){
		bool radd[500100]={0};
		if(af[a[i]]){
			long l;
			for(l=i+1;l<=n&&a[l]!=a[i];l++){
				af[a[l]]=0;
			}
			for(;l<=n;l++) if(af[a[l]]&&!(radd[a[l]])) {
				ans[a[l]]++;
				radd[a[l]]=1;
			}
		}
		else {
			af[a[i]]=1;
			for(long l=i;l<=n;l++) if(af[a[l]]&&!(radd[a[l]])) {
				ans[a[l]]++;
				radd[a[l]]=1;
			}
		}
	}
	for(long i=1;i<m;i++) out<<ans[i]<<' ';
	out<<n;
	return 0;
}
