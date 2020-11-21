#include <iostream>
using namespace std;

struct bilangan 
{
float riil[2];
float imj[2];
};

void tambah(bilangan &bilangan)
{
float r,i;
cout<<"\nHasil Penjumlahan = "<<((bilangan.riil[0]+bilangan.riil[1]))<<" + "<<((bilangan.imj[0]+bilangan.imj[1]))<<"i";
}

void bagi(bilangan &bilangan)
{
float r,i;
cout<<"\nHasil Pembagian   = "<<((((bilangan.riil[0]*bilangan.riil[1])+(bilangan.imj[0]*bilangan.imj[1]))/((bilangan.riil[0]*bilangan.riil[0])+(bilangan.imj[0]*bilangan.imj[0]))))<<" + "<<((((bilangan.imj[0]*bilangan.riil[1])-(bilangan.riil[0]*bilangan.imj[1]))/((bilangan.riil[1]*bilangan.riil[1])+(bilangan.imj[1]*bilangan.imj[1]))))<<"i";
}

void kali(bilangan &bilangan)
{
float r,i;
cout<<"\nHasil Perkalian   = "<<((bilangan.riil[0]*bilangan.riil[1])-(bilangan.imj[0]*bilangan.imj[1]))<<" + "<<((bilangan.riil[0]*bilangan.imj[1])+(bilangan.imj[0]*bilangan.riil[1]))<<"i";
}

void kurang(bilangan &bilangan)
{
float r,i;
cout<<"\nHasil Pengurangan = "<<((bilangan.riil[0]-bilangan.riil[1]))<<" + "<<((bilangan.imj[0]-bilangan.imj[1]))<<"i";
}

int main(){
	bilangan bilangan;
	for(int x=1;x<=2;x++)
	{
	cout<<"Masukkan Bilangan ke "<<x<<endl;
	cout<<"Bilangan Riil     = ";
	cin>>bilangan.riil[x];
	cout<<"Bilangan Imajiner = ";
	cin>>bilangan.imj[x];
	}
	for(int x=1;x<=2;x++) 
	{
	cout<<"\nBilangan ke "<<x<<" = "<<bilangan.riil[x]<<" + "<<bilangan.imj[x]<<"i";
	}
	tambah(bilangan);
	kurang(bilangan);
	kali(bilangan);
	bagi(bilangan);
	cout <<"\nCakra Bhirawa,Universitas Brawijaya - Teknik Komputer 175150307111037"<<endl;
	return 0;
}

