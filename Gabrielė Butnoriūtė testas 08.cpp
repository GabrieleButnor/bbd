#include <iostream>
#include <fstream>
#include <iomanip>
#include "Singleton.h"


using namespace std;


const int Ce = 100;


int main()
{
	int A[Ce][10];
	int n, m;
	int maxid;
	int kiek;
	Singleton::Instance()->Ivedimas(A, n, m);
	Singleton::Instance()->Spausdinti(A, n,m );
	maxid = Singleton::Instance()->geriauisais(A, n, m);
	cout << endl;
	cout << " kas per sudas blet : " << maxid + 1 << "  mokinys." << endl;
	cout << endl; 
	kiek = Singleton::Instance()->Neigiami(A, n, m);
	cout << " nichuja negeroi paziniai pas :  " << kiek << "    mokiniai daunai." << endl;
	cout << endl;
	return 0;
}

