#include <iostream>
using namespace std;
int sisi;
int menu;
void keliling_Persegi(int a)
{
    int klp = 4*a;
    cout<<klp<<endl;
}
void luas_persegi(int a)
{
    int ss = a*a;
    cout<<ss<<endl;
}
void volume_kubus(int a)
{
    int vlb = a*a*a;
    cout<<vlb<<endl;
}
 int main()
{
    cout<<"masukan menu 1.kelilingpersegi,2.luaspersegi,3.volumekubus"<<endl;
    cin>>menu;
    switch(menu)
        {
            case 1:
                cout<<"masukan sisi:"<<endl;
                cin>>sisi;
               keliling_Persegi(sisi);
                
            break;
            
            case 2:
                 cout<<"masukan sisi:"<<endl;
                cin>>sisi;
                luas_persegi(sisi);

            case 3:
                 cout<<"masukan sisi:"<<endl;
                cin>>sisi;
                volume_kubus(sisi);
                
                break;
            default:
            break;
        }
}
