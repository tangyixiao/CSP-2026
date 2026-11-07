#include <bits/stdc++.h>
using namespace std;
const int N=5e5+10,M=3e5+10;
int n,m,a[N],posi[M],pos=0,now[M],show_time[M],tong[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	bool f1=1;
	for (int i=1;i<=n;i++){
		cin >> a[i];
		if (a[i]<a[i-1]) f1=0;
	}
	if (f1){
		for (int i=1;i<=n;i++){
			tong[a[i]]++;
		}
		int la=0;
		for (int i=1;i<=m;i++){
			if (tong[i]==0) continue;
			tong[i]+=la;
			la=tong[i];
		}
		for (int i=1;i<=m;i++){
			cout << tong[i] << " ";
		}
	}
	else{
		for (int p=1;p<=n;p++){//µÚp¾Ö
			memset(posi,-1,sizeof posi);
			memset(now,0,sizeof now);
			pos=0;
			for (int i=p;i<=n;i++){
				if (posi[a[i]]==-1){
					now[++pos]=a[i];
					posi[a[i]]=pos;
				}
				else{
					for (int k=posi[a[i]]+1;k<=pos;k++){
						posi[now[k]]=-1;
						now[k]=0;
					}
					pos=posi[a[i]];
				}
//				for (int i=1;i<=pos;i++) cout << now[i] << " ";
//				cout << pos << endl;
			}
			for (int i=1;i<=pos;i++){
				show_time[now[i]]++;
				//cout << now[i] << " ";
			}
			//cout << endl;
		}
		for (int i=1;i<=m;i++){
			cout << show_time[i] << " ";
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
