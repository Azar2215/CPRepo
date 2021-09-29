#include <iostream>
#include <string>
#include <algorithm>


using namespace std;



void solve(int n ,int tab[1000][3])
{
	
	int result = 0;
        for(int i = 0; i< n; i++)
            result+= (tab[i][0] && tab[i][1]) || (tab[i][0] && tab[i][2]) || (tab[i][2] && tab[i][1]);

cout << result << endl;
	
}
  

int main()
{
    
    int n;
    int tab[1000][3];


    cin >> n;
    for(int i = 0; i< n; i++)
        cin >> tab[i][0] >> tab[i][1] >> tab[i][2]; 
    

    solve(n ,tab);


  
    return 0;
}
