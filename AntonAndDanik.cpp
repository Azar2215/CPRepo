#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

void solve(int n , string s)
{
	int count = 0;
	sort(s.begin(),s.end());
        while(s[count] == 'A'){
	    count++;

	};
	
    // Print output
    if ((count == n/2) && (n%2==0) ){
	cout << "Friendship" << endl;
	return;
    }

    if (count >= (n/2)+1 )
    	cout << "Anton" << endl;
    else
    	cout << "Danik" << endl;	
	
}
  

int main()
{
    
    int n;
    string s;

    cin >> n >> s;

    solve(n ,s);


  
    return 0;
}
