#include <iostream>
using namespace std;

int s[500010],a[500010],c[500010];
bool b[500010];
int cnt;
void pop(int x,int n){
	bool f=0;
	for (int i=n;i>=1;i--){
		if (s[i]!=x) cnt--;
		else return;
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for (int i=1;i<=n;i++){
		cin >> a[i];
	}
	for (int i=1;i<=n;i++){
		cnt=1;
		for (int j=i;j<=n;j++){
			int x=a[j];
			if (b[x]==1){
				pop(x,cnt);
				cnt--;
			}
			else {
				b[x]=1;
			}
			s[cnt++]=x;
		}
		for (int j=1;j<=cnt;j++){
			c[s[j]]++;
			cout << s[i] << ' ';
		}
		cout << endl;
		for (int j=1;j<=m;j++){
			b[j]=0;
		}
	}
	for (int i=1;i<=m;i++){
		cout << c[i] << ' ';
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
