#include <iostream>

using namespace std;

void solve(int n , int a[100],int h,int *s)
{	
    for(int i=0; i<n ; i++)
    {
        *s = (a[i] > h) ? (*s + 2) : (*s + 1);
    }	
}
  

int main()
{
    int s = 0;
    int n, h;
    int a[1000];
    cin >> n >> h;
    for(int i=0; i<n; i++)
	cin >> a[i];
     solve(n , a,h,&s);

    // Print output
    cout << s << endl;
  
    return 0;
}
