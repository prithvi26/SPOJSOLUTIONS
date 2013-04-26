/*
Original Author : Prithvi
Name : Atul Kashyap
*/

#include<iostream>
//#include<conio.h>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
#include<map>
#include<stack>
#include<cctype>
#include<cmath>
#include<cstring>
#include<queue>
#include<cstdio>
#include<sstream>
#define pb push_back
#define pi 3.141592653589793238462643383
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;

int a[100000],b[100000];

int main()
{
	int t,n1,n2,i,j,k,temp;
	int res ;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n1);
		for(i=0;i<n1;i++) scanf("%d",&a[i]);
		sort(a,a+n1);
		scanf("%d",&n2);
		for(j=0;j<n2;j++) scanf("%d",&b[j]);
		
		sort(b,b+n2);
		res = 1000000000;
		b[n2]=1000000000;
		for(i=0;i<n1;i++)
		{
			j=lower_bound(b,b+n2,a[i])-b;
			temp=abs(b[j]-a[i]);
			res=min(res,temp);
			if(j-1>=0)
			{
				temp=abs(b[j-1]-a[i]);
				res=min(res,temp);
			}
			
		}
		printf("%d\n",res);
	}
	
	//getch();
	return 0;
}


