#include <iostream>
using namespace std;

int main()
{
	int n;
	
	cout << "MASUKAN TINGGI BINTANG:  ";
	cin >> n;
	
		cout << "pola \n";
		
	
	for(int j = 1; j <= n; j++){
	    for(int i = 1; i <= j; i++)
	    cout << "*" ;
		
		cout <<endl;
	}
      for(int j = 1; j <= n; j++){
	    for(int i = 1; i <= n-j; i++)
	    cout << "*" ;
		
		cout <<endl;
	}
	cin.get();
	return 0;
}
