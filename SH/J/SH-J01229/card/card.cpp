#include <iostream>
#include <cstring> 
using namespace std;

int card[500005],n,beg = 0; //[begin,n)
int table[500005],en = 0; //[0,end)
int cnt[300005] = {0},m;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 0;i < n;i++)
		cin >> card[i];
	for(int i = 0;i < n;i++){
		for(int j = beg;j < n;j++){
			for(int k = 0;k < en;k++)
				if(table[k] == card[j]){
					en = k;
					break;
				}
			table[en++] = card[j];
		}
		for(int j = 0;j < en;j++)
			cnt[table[j]]++;
		beg++;
		memset(table,0,sizeof(table));
		en = 0;
	}
	for(int i = 1;i <= m;i++)
		cout << cnt[i] << " ";
	return 0;
}
