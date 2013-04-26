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
#include<sstream>
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

int getint(char *s)
{
	int i, n = 0;
	for(i=0;s[i];i++)
	{
		if(!isdigit(s[i])) return -1;
		n = n*10+s[i]-'0';
	}
	return n;
}


int main()
{
	
	
	char str[100], *p;
	int t, i, a[3];
	scanf("%d", &t);
	for(gets(str); t; t--)
	{
		gets(str);
		gets(str);
		i = 0;
		p = strtok(str," +=");
		while(p)
		{
			a[i++] = getint(p);
			p = strtok(0," +=");
		}
		if(a[0]==-1) printf("%d + %d = %d\n",a[2]-a[1], a[1], a[2]);
		else if(a[1]==-1) printf("%d + %d = %d\n",a[0], a[2]-a[0], a[2]);
		else printf("%d + %d = %d\n",a[0], a[1], a[0]+a[1]);
	}
	//getch();
	return 0;
}


