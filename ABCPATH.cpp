/*
Original Author : Prithvi
Name : Atul Kashyap
*/

#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <cassert>
#include <cstring>
#include <climits>
#include <iostream>
#include <sstream>
#include <string>
#include <numeric>
#include <utility>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <list>
#include <map>
#include <set>
using namespace std;


#define IOR(x) freopen(x,"r",stdin);
#define IOW(x) freopen(x,"w",stdout);


#define i64 long long
#define u64 unsigned long long


#define LET(x,p) __typeof(p) x
#define FORIT(it,p) for(__typeof(p.end()) it=p.begin();it!=p.end();it++)
#define REP(i,n) for(int i=0;i<n;i++)
#define FOR(i,a,b) for(int i=a;i<=b;i++)

#define ALL(p) p.begin(),p.end()
#define CLR(p) p.clear()
#define pb(p) push_back(p)
#define pii pair< int, int >
#define mset(p,v) memset(p,v,sizeof(p))
#define UB(p,v) upper_bound(ALL(p),v)
#define LB(p,v) lower_bound(ALL(p),v)

#define MAX 60
#define INF (1<<30)

typedef vector<int> vi;
typedef vector<vi> vii;

char graph[MAX][MAX];
int grid[MAX][MAX];
int visited[MAX][MAX];
int R,C,d;
int x[8] = {-1,-1,-1,0,0,1,1,1};
int y[8] = {-1,0,1,-1,1,-1,0,1};

 bool inRange(int i, int j)
{
	return (i>=0 && i<R && j>=0 && j<C);
}

int  bfs()
{
	
	pii u;
	int temp,i,j,res = 0;
	queue< pii > Q;
	REP(p,R)
	{
		REP(q,C)
		{
			if(graph[p][q] == 'A')
			{
				//res = 1;
				grid[p][q] = 1;
				res = max(res,grid[p][q]);
				Q.push(pii(p,q));
			}
		}
	}
				while(!Q.empty())
				{
					u = Q.front();
				//	cout<<"u.first "<<u.first<<"u.second "<<u.second<<endl;
					//visited[u.first][u.second] = 1;
					Q.pop();
					REP(k,8)
					{
						i = u.first + x[k];
						j = u.second + y[k];
						
						if(inRange(i,j) && !visited[i][j])
						{
						//	cout<<i<<" "<<j<<endl;
						
							temp = graph[i][j] - graph[u.first][u.second];
							if(temp==1)
							{
								visited[i][j] = 1;
								grid[i][j] = grid[u.first][u.second] + 1;
								res = max(res,grid[i][j]);
							//	cout<<"res "<<res<<endl;
								Q.push(pii(i,j));
							}
						}
					}
				}
			
	return res;
	
	
}


int main()
{
	int t=1,res;
	//scanf("%d",&t);
	//IOR("input.txt");
	
	//IOW("output.txt");
	
	while(scanf("%d %d",&R,&C) && R!=0)
	{
		mset(grid,0);
	mset(visited,0);
		//scanf("%d %d",&R,&C);
		REP(i,R)
		{
		scanf("%s",graph[i]);
		
		
	    }
		
		
		res = 0;
		
		
		
		
		
		res = bfs();
		
		
		printf("Case %d: %d\n",t,res);
		t++;
	}




	//system("pause");
	return 0;
}


