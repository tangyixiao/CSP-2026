# include <bits/stdc++.h>
using namespace std;
int n,m,a[500005],s[300005],k[500005],kk,ks[300005];
int main(){
	freopen("card.in","r",stdin);// 
	freopen("card.out","w",stdout);// 
	cin >> n >> m;
	for (int i=1;i<=n;i++){
		cin >> a[i];
	}
	for (int i=1;i<=n;i++){
		memset(ks,0,sizeof(ks));
		memset(k,0,sizeof(k));
		kk=0;
		for (int j=i;j<=n;j++){
			if (ks[a[j]]>0){
				for (int ik=ks[a[j]]+1;ik<=kk;ik++){
					ks[k[ik]]=0;
				}
				kk=ks[a[j]];
			}
			else{
				k[++kk]=a[j];
				ks[a[j]]=kk;
			}
			// cout << kk << ' ' << ks[a[j]] << ' ' << a[j] << endl;
		}
		for (int i=1;i<=kk;i++){
			s[k[i]]++;
			// cout << k[i] << ' ';
		}
		// cout << endl << endl;
	}
	for (int i=1;i<=m;i++){
		cout << s[i] << ' ';
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
/*
4 3
1 2 1 3

10 3
3 1 2 1 3 2 3 1 2 1
*/
