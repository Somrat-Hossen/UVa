#include <bits/stdc++.h>
#include <stdlib.h>
#include<iomanip>

#define maxx 1e+5
#define PI            acos(-1.0)
#define pb            push_back
#define all(x)        (x).begin(), (x).end()
#define clr(ar)        memset(ar, 0, sizeof(ar))
#define loop(i,n)      for(int i=0; i<n; i++)
#define lop(i,n)      for(int i=1; i<=n; i++)
#define maxint(a,b,c) (a>b)?(a>c)?a:c :(b>c)?b:c
#define minint(a,b,c) (a<b)?(a<c)?a:c :(b<c)?b:c
#define READ          freopen("in.txt", "r", stdin);
#define WRITE          freopen("out.txt", "w", stdout);

#define Check(r,c) ((r>=0 && r<=7) && (c>=0 && c<=7))
#define Check(a,b,c) ((a>b)?(a>c)?a:b: (b>c)?b:c)

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
typedef  set<int>             si;
typedef  map<string,int>      mst;
typedef  map<int,int>	      mii;
typedef  map<char,int>        mci;
typedef  map<int,string>	   mis;
typedef  vector<long long> 	   vi;
typedef  vector<string> 	   vs;

map<int,int>mp;
map<int,int>::iterator it;
ll n,i,x,y,z,j,len,cnt(0),sum=0,a,b,c,tmp,d,res=0,k,tc,mod=1000003,t,r,pos=-1,ans=0,m,q;
int arr[2*100005],ar[1000];
int dp[1000];
ll two[1000][1000];
int dx[4]= {0,0,1,-1};
int dy[4]= {1,-1,0,0};
string str,st;
queue<int>que;
vector<int>vec;
char ch;
stack<int>stk;
bool vis[2*100005];


int left(int le,int val)
{
   int coun=0;
    while(val<arr[le])
    {
      coun++;
       val=arr[le];
      le++;
    }

    return coun;
}

int right(int endd,int val)
{
    int coun=0;
    while(val<arr[endd])
    {
      coun++;
      val=arr[endd];
      endd--;
    }
    return coun;
}

ull result;
int main()
 {
   // freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);

	 str="";

      cin>>n;
      loop(i,n) cin>>arr[i];

      tmp=0;
      i=0;j=n-1;

  while(1)
  {
         if(tmp>=arr[i] && tmp>=arr[j]) break;
        // else if(vis[arr[i]] && vis[arr[j]]) break;

        else if(tmp<arr[i] && tmp<arr[j])
        {
          if(arr[i]==arr[j])
          {
             int left_coun=left(i,tmp);
             int right_coun=right(j,tmp);

             ///cout<<left_coun<<" "<<right_coun<<endl;

             if(left_coun>right_coun)
             {
                 str+='L';
                 tmp=arr[i];
                 i++;
             }
             else
             {
                 str+='R';
                 tmp=arr[j];
               j--;
             }
          }

          else if(arr[i] !=arr[j])
          {
               x=arr[i]-tmp;
               y=arr[j]-tmp;

               if(x<y)
               {
                  tmp=arr[i];
                  str+='L';
                  i++;
               }

               else
               {
                 tmp=arr[j];
                  str+='R';
                  j--;
               }
          }

        }

           else if(tmp<arr[i])
           {
               tmp=arr[i];
               i++;
               str+='L';
           }

           else if(tmp<arr[j])
           {
             tmp=arr[j];
             j--;
             str+='R';
           }
    }
    cout<<str.size()<<endl;
    cout<<str<<endl;


    return 0;
  }

