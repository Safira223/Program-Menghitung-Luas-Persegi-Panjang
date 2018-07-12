#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int panjang;
	int lebar;
	float luas;
	cout<<"Input Panjang : ";
	cin>>panjang;
	cout<<"\nInput Lebar : ";
	cin>>lebar;
	
	luas = panjang*lebar;

	cout<<"\nLuas Persegi Panjang";
	cout<<"\nPanjang= "<<panjang;
	cout<<"\nLebar = "<<lebar;
	cout<<"\nLuas = "<<luas;
	
	getch();
}
