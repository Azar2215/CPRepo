#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

void solve(int a , int b)
{
	int a_tmp = a;
	int b_tmp = b;
	int yrs = 0;
	do{
	    yrs++;
            a_tmp = 3*a_tmp;
            b_tmp = 2*b_tmp;
	}while(a_tmp <= b_tmp);

cout << yrs <<endl;
	
	
}
  

int main()
{
    
    int a,b;


    cin >> a >> b;

    solve(a ,b);


  
    return 0;
}
