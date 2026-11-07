#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2,l1,l2;
	char si1,si2;
	cin >>c1 >>s1 >>c2 >>s2;
	l1=s1[0]+s1[1];
	l2=s2[0]+s2[1];
	si1=s1[2];
	si2=s2[2];
	cout <<(c1==c2) <<(c1==c2 && l1==l2);
	cout <<((c1==c2 && l1==l2) && (((si1=='A' && si2=='B') || (si1=='A' && si2=='C') || (si1=='B' && si2=='C') || (si1=='D' && si2=='F')) || (si1=='B' && si2=='A') || (si1=='C' && si2=='A') || (si1=='C' && si2=='B') || (si1=='F' && si2=='D')));
	cout <<((c1==c2 && l1==l2) && (((si1=='A' && si2=='B') || (si1=='B' && si2=='C') || (si1=='D' && si2=='F')) || (si1=='B' && si2=='A') || (si1=='C' && si2=='B') || (si1=='F' && si2=='D')));
}