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

int g[100010][3];
int M = 10000000;
int main()
{
	int n,i,j,k=1,x,y,z,p,q,r;
	while(scanf("%d",&n)==1 && n)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<3;j++)
			scanf("%d",&g[i][j]);
		}
		g[0][0]=10000000;
		g[0][2]+=g[0][1];
		for(i=1;i<n;i++)
		{
			for(j=0;j<3;j++)
			{
				if(j==2) x=M;
				else x = g[i-1][j+1];
				y=g[i-1][j];
				if(j==0) z=M;
				else z = g[i-1][j-1];
				if(j==0) p=M;
				else p=g[i][j-1];
				g[i][j] += min(min(x,y),min(z,p));
			//	printf("g[%d][%d] %d\n",i,j,g[i][j]);
				
			}
		}
		printf("%d. %d\n",k++,g[n-1][1]);
	}
	
	
	
	//getch();
	return 0;
}


