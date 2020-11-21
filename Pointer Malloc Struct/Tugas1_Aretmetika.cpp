#include<iostream>

using namespace std;

struct Poli
{
	int bil;
};

Poli P1[10],*P2[10],P3[10];

void isiPolinom()
{
	P1[0].bil=15;
	P1[3].bil=1;
	P1[5].bil=5;
	P1[7].bil=8;
    P1[8].bil=6;
	P2[0]->bil=10;
	P2[2]->bil=2;
	P2[3]->bil=2;
	P2[4]->bil=3;
    P2[7]->bil=4;
	P2[9]->bil=3;
	P3[0].bil=5;
	P3[2].bil=1;
}

void kali()
{
	cout<<endl<<"P1*P3 = ";
	int bilP1[10];
    int bilP3[10];
    int bantu[10];
    int x;
    for (x=0; x<=10; x++)
	{
        bilP1[x]=0;
        bilP3[x]=0;}
    for (x=0; x<=2; x++)
	{
        for (int y=0; y<=10; y++)
		{
            if(x==0)
			{
                bilP1[y]=P1[y].bil*P3[x].bil;
            } 
			else if (x==2)
			{
                bilP3[(y+x)]=P1[y].bil*P3[x].bil;
            }
        }
    }
    for (x=0; x<=10; x++)
	{
        bantu[x]=bilP1[x]+bilP3[x];
    }
    for(int y=10; y>=0; y--)
	{
        if (y==0){
            if (bantu[y]>0)
			{
                cout << " + " << bantu[y];
            } 
			else if (bantu[y]<0){
                cout << bantu[y];
            }
        } 
		else if (y==10)
		{
            if (bantu[y]!=0)
			{
                cout << bantu[y] << "x^" << y;
            }
        } 
		else
		 {
            if (bantu[y]>0)
			{	
                cout << " + " << bantu[y] << "x^" << y;
            } 
			else if (bantu[y]<0)
			{
                cout << bantu[y] << "x^" << y;
            } 
        }
    }
}
	
void turunan(){
    cout<<endl<<"Turunan P2' = ";
    for (int x=10; x>0; x--)
	{
        if (P2[x]->bil==0)
		{
        } 
		else 
		{
            if (x==9)
			{
                if (P2[x]->bil!=0)
				{
                    cout << (P2[x]->bil*x) << "x^" << (x-1);
                }
            } 
			else 
			{
                if (P2[x]->bil>0)
				{
                    cout << " + " << (P2[x]->bil*x) << "x^" << (x-1);
                }
				else if (P2[x]->bil<=1)
				{
                }
            }
        }
    }
}

void tambah()
{
	cout<<"P1+P2 = ";
	int total[10];
	int x;
	for(x=0;x<10;x++)
	{
		total[x]=P1[x].bil+P2[x]->bil;}
	for(x=9;x>=0;x--)
	{
	 if(x==0)
	 {
	 	cout<<" + "<<total[x];}
	 else if(x==9)
	 {
	 	if(total[x]!=0){
	 		cout<<total[x]<<"X^"<<x;}
	 }
	 else
	 {
	 	if (total[x]>0){
	 		cout<<" + "<<total[x]<<"x^"<<x;}
		else if(total[x]<0){
		 	cout<<total[x]<<"x^"<<x;}		 
	    }	
   	  }	
	}
void kurang()
{
	cout<<endl<<"P1-P2 = ";
	int total[10];
	int x;
	for(x=0;x<10;x++)
	{
		total[x]=P1[x].bil-P2[x]->bil;}
	for(x=9;x>=0;x--)
	{
	 if(x==0)
	 {
	 	cout<<" + "<<total[x];}
	 else if(x==9){
	 	if(total[x]!=0)
		 {
	 		cout<<total[x]<<"X^"<<x;}}
	else
	{
	 	if (total[x]>0)
		 {
	 		cout<<" + "<<total[x]<<"x^"<<x;
		 }else if(total[x]<0)
		 {
		 	cout<<total[x]<<"x^"<<x;
			}
		}	
  	}	
}	

int main()
{
	cout<<"P1 = 6x^8 + 8x^7 + 5x^5 + x^3 + 15"<<endl;
	cout <<"P2 = 3x^9 + 4x^7 + 3x^4 + 2x^3 + 2x^2 + 10" <<endl;
	cout <<	"P3 = x^2 + 5 \n\n" <<endl;
	isiPolinom();
	tambah();
	kurang();
	kali();
	turunan();
	cout <<"\nCakra Bhirawa,Universitas Brawijaya - Teknik Komputer 175150307111037"<<endl;
	return 0;
}
