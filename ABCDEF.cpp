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
	int n,x,y,i,j,k;
	long long res = 0;
	vector<int> s1,s2;
	int arr[110];
int main()
{

	scanf("%d",&n);

	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				s1.pb(arr[i]*arr[j] + arr[k]);
				if(arr[k]==0)continue;
				s2.pb((arr[i]+arr[j])*arr[k]);
			}
		}
	}
	sort(all(s1));
	sort(all(s2));
	//for(vector<int>::iterator it=s2.begin();it!=s2.end();it++)
	//cout<<*it<<endl;

	for(i=0;i<s1.size();i++)
	{
		x = lower_bound(s2.begin(),s2.end(),s1[i]) - s2.begin();
		y = upper_bound(s2.begin(),s2.end(),s1[i]) - s2.begin();
		//cout<<x<<" "<<y<<endl;
		res+=(y-x);
		//printf("%d\n",res);
	}
	printf("%lld\n",res);
	//getch();
	return 0;
}


