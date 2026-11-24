#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish");
    int kahramanCan = 100;
    int canavarCan = 100;
    int kritikVurusSayisi = 0;
    int enYuksekHasar = 0;
    int kahramanHasar, canavarHasar;
    srand(time(0));

    for(int i = 1; i <= 8; i++)
    {
        kahramanHasar = rand() % 17 + 12;
        canavarHasar = rand() % 16 + 10;

if(kahramanHasar >= 25)
        {
            kahramanHasar += 10;
            cout << "(KRİTİK!)" << endl;
            kritikVurusSayisi++;
        }

   if(kahramanHasar > enYuksekHasar)
        {
            enYuksekHasar = kahramanHasar;
        }

        kahramanCan -= canavarHasar;
        canavarCan -= kahramanHasar;

 if(canavarCan < 0)
        {
            canavarCan = 0;
        }
        if(kahramanCan < 0)
        {
            kahramanCan = 0;
        }

        cout << i << ". tur" << endl << "KAHRAMAN VURDU: " << kahramanHasar << " " << "CANAVAR VURDU: " << canavarHasar << endl;
        cout << "KALAN CANLAR: " << " " << "Kahraman: " << kahramanCan << " " << "Canavar: " << canavarCan << endl;

    
        if(kahramanCan == 0 || canavarCan == 0)
        {
            break;
        }
    }

    cout << "SAVAŞ SONUCU" << endl;
    if(kahramanCan == 0 && canavarCan == 0)
    {
        cout << "ÖLÜMCÜL BERABERLİK!" << endl;
    }
    else if(kahramanCan > canavarCan)
    {
        cout << "Kahraman kazandı!" << endl;
    }
    else if(canavarCan > kahramanCan)
    {
        cout << "Canavar kazandı!" << endl;
    }
    else
    {
        cout << "Berabere Kalındı!" << endl;
    }

    cout << "Kritik vuruş sayısı: " << kritikVurusSayisi << endl;
    cout << "En yüksek hasar: " << enYuksekHasar << endl;
    return 0;
}
