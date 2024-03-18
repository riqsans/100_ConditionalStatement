#include <iostream>
using namespace std;

int main(){
    char pilihan;

 do{
    cout << "Berangkat ambil takjil" << endl;
    cout << "Antri Takjil" << endl;
    cout << "Apakah Takjil masih ada?" << endl;
    cout << "Apakah mau antri lagi?" << endl;
    cin >> pilihan;
 }while(pilihan == 'y' || pilihan == 'Y');
}