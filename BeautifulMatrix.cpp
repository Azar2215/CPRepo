#include <iostream>
#include <array>
#include <algorithm>
#include <cmath>        // abs


using namespace std;

void solve(array<array<int,5>,5> matrix)
{
    for(int i =0; i<5 ; i++)
    {
         for(int j =0; j<5 ; j++)
         {
              if(matrix[i][j] == 1){
		   cout << abs(i-2) + abs(j-2)<<endl;
}
                  
         }

    }	
	
}
  

int main()
{
    
    array<array<int,5>,5> matrix;

    for(int i =0; i<5 ; i++)
    {
         for(int j =0; j<5 ; j++)
              cin >> matrix[i][j];

    }
    	

    solve(matrix);


  
    return 0;
}
