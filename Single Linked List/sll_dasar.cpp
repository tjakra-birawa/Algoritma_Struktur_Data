#include <iostream>
using namespace std;

struct Mahasiswa
{
string nama;
string nim;
double ipk;
Mahasiswa *next;
};

Mahasiswa *head,*tail;

struct SLL
{
void AddLast(string nim, string nama, double ipk)
{
Mahasiswa *baruM = new Mahasiswa;
baruM->nim = nim;
baruM->nama = nama;
baruM->ipk = ipk;
if (head == NULL)
{ head = baruM; }
else
{ tail->next = baruM; }
tail=baruM;
}

void AddFirst(string nim, string nama, double ipk)
{
Mahasiswa *baru = new Mahasiswa;
baru->nim = nim;
baru->nama= nama;
baru->ipk = ipk;
if (head == NULL)
{ tail= baru; }
else
{ baru->next = head; }
head=baru;
}

void display()
{
Mahasiswa *bantu = head;
while (bantu!= NULL)
{
cout<<"( "<<bantu->nim<<  " ) "<<bantu->nama<<" Memiliki IPK "<<bantu->ipk<<endl;
bantu=bantu->next;
}
}
};

int main(){
SLL *x = new SLL;
head= NULL;
tail= NULL;

x->AddLast("175150307111037", "Cakra Bhirawa", 3.57); 
x->AddLast("165100207000025", "Kintan", 3.68); 
x->AddFirst("150312000785002", "Maximillian Ismartaya", 4); 
x->AddFirst("175150307001058", "Setio Widodo", 2);
x->display();

cout << "\nCakra Bhirawa,Universitas Brawijaya - Teknik Komputer 175150307111037" << endl;
return 0;
}
