#include <iostream>
#include <algorithm>



using namespace std;

void solve(int n, int tab[100])
{
    sort(tab,tab + n);
    for(int i = 0; i< n; i++)
	    cout << tab[i] << " " <<endl;
	
	
}
  

int main()
{
    int n;
    int tab[100];

    cin >> n ;
    for(int i = 0; i< n; i++)
	    cin >> tab[i] ;

  solve(n, tab);
    return 0;
}
