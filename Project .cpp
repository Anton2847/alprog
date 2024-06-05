#include <iostream>
using namespace std;

int main (){
    int tb, bb, bb_ideal;
    char pilihan, ulang;

    do{
    cout<<"============================"<<endl;
    cout<<"Kalkulator Berat Badan Ideal"<<endl;
    cout<<"1.laki-laki"<<endl;
    cout<<"2.Perempuan"<<endl;
    cout<<"==========================="<<endl;
    cout<<"Masukan Jenis Kelamin Anda = ";
    cin>>pilihan;

    switch(pilihan){
        case '1':
             cout<<"Masukan Tinggi Badan (cm) : ";
             cin>>tb;
             cout<<"Masukan Berat Badan (kg) : ";
             cin>>bb;
             bb_ideal=(tb-100)-((tb - 100) * 0.1);
             cout<<"\nBerat Badan Idealmu (kg) : "<<bb_ideal;
             break;
        case '2':
             cout<<"Masukan Tinggi Badan (cm) : ";
             cin>>tb;
             cout<<"Masukan Berat Badan (kg) : ";
             cin>>bb;
             bb_ideal=(tb-100)-((tb - 100) * 0.15);
             cout<<"\nBerat Badan Idealmu (kg) : "<<bb_ideal<<endl;
             break;
        default :
            cout<<"Pilihan anda tidak ada dalam sistem"<<endl;
        }
        cout<<"\n\nkembali ke menu utama? (y/n) : ";
        cin>>ulang;
    
    }
    while(ulang=='y'||ulang=='Y');
    
}