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
#define ll long long
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;

//2, 4, 9, 16, 25, 64, 289, 729, 1681, 2401, 3481, 4096, 5041, 7921, 10201, 15625, 17161, 
//27889, 28561, 29929, 65536, 83521, 85849, 146689,262144, 279841, 458329, 491401, 
//531441, 552049, 579121, 597529, 683929, 703921, 707281, 734449, 829921, 1190281





ll arr[37];
vector<long long> v;
int main()
{
	ll t,a,b,res,x,y;
	//printf("%lld %lld\n\n\n",arr[1234],arr[4123]);
	v.pb(2);v.pb(4);v.pb(9);v.pb(16);v.pb(25);v.pb(64);v.pb(289);v.pb(729);v.pb(1681);v.pb(2401);v.pb(3481);v.pb(4096);v.pb(5041);v.pb(7921);v.pb(10201);
	v.pb(15625);v.pb(17161);v.pb(27889);v.pb(28561);v.pb(29929);v.pb(65536);v.pb(83521);v.pb(85849);v.pb(146689);v.pb(262144);v.pb(279841);v.pb(458329);
	v.pb(491401);v.pb(531441);v.pb(552049);v.pb(579121);v.pb(597529);v.pb(683929);v.pb(703921);v.pb(707281);v.pb(734449);v.pb(829921);v.pb(1190281);
	
	sort(v.begin(),v.end());
	
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&a,&b);
	//	x = lower_bound(v.begin(),v.end(),a) - v.begin();
		
	//	y = upper_bound(v.begin(),v.end(),b) - v.begin();
	//	printf("%lld %lld\n",x,y);
		res = 0;
		for(vector<long long>::iterator it = v.begin();it!=v.end();it++)
		{
			if(*it>=a && *it<=b)
			{
				//printf("%lld\n",*it);
			res++;
		}
		}
		//res = y - x;
		printf("%lld\n",res);
	}

	
	
	//getch();
	return 0;
}


