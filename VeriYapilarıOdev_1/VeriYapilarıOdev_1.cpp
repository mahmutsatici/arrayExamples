#include <iostream>
#include <algorithm>
using namespace std;

//Mahmut Satici 211307070

//4-)Fonksiyon kullanarak Vize ve Final notu girilen öğrencinin ortalamasını hesaplayan program(metot kısmı)
void ortHesapla(int final, int vize) {
    if (final<=100&&final>=0&&vize <= 100 && vize >= 0)
    {
        double ortalama = (final * 0.6) + (vize * 0.4);
        cout << "ortalamaniz= ";
        cout << ortalama;
    }
    else
    {
        cout << "Lutfen girdiginiz not degerleri 0 ile 100 arasinda olsun";
        
    }
    
}int main()
{
    //1-)Sıralı verilen iki diziyi birleştiren program

    int dizi_1[4] = {1,3,4,5};
    int dizi_2[4] = {2,4,6,8};
    int dizi_3[8];

    for (int i = 0; i < 4; i++)
    {
        dizi_3[i] = dizi_1[i];
    }
    for (int i = 0; i < 4; i++)
    {
        dizi_3[i+4] = dizi_2[i];
    }
    sort(dizi_3, dizi_3 + 8);
    cout << "1. dizi: ";
    for (int i = 0; i < 4; i++)
    {
        cout << dizi_1[i];
        if (i != 3)
        {
            cout << ",";
        }
    }
    cout << "" << endl;
    cout << "2. dizi: ";
    for (int i = 0; i < 4; i++)
    {
        cout << dizi_2[i];
        if (i != 3)
        {
            cout << ",";
        }
    }
    cout << "" << endl;
    cout << "Birlestirilmis dizi: ";
    for (int i = 0; i < 8; i++)
    {
        cout << dizi_3[i];
        if (i!=7)
        {
            cout << ",";
        }
        
    }
    cout << ""<< endl;


    //2-)Sıralanmış bir diziden yinelenmiş olan sayıları kaldıran program 
    
    cout << "------------------------------------------------------" << endl;
    int dizi_4[10] = {0,0,1,1,1,2,2,3,3,4};
    int diziBoyutu = sizeof(dizi_4) / sizeof(int);
    int dizi_5[5];
    int sayac = 0;
    for (int i = 0;  i < diziBoyutu; i++)
    {
        if (dizi_4[i]!=dizi_4[i+1])
        {            
            dizi_5[sayac] = dizi_4[i];
            sayac++;
        }
    }
    cout << "Siralanmis dizi: ";
    for (int i = 0; i < diziBoyutu; i++)
    {
        cout << dizi_4[i];
        if (i != diziBoyutu-1)
        {
            cout << ",";
        }

    }
    cout << "" << endl;
    cout << "Yinelenmis olan sayilari kaldirilmis dizi: ";
    for (int i = 0; i < sizeof(dizi_5) / sizeof(int); i++)
    {
        cout << dizi_5[i];
        if (i != (sizeof(dizi_5) / sizeof(int))-1)
        {
            cout << ",";
        }

    }
    cout << "" << endl;

    //3-)Klavyeden -1 giriline kadar, girilen sayıların ortalamalarını gösteren program
    cout << "------------------------------------------------------" << endl;
    cout << "Ortalamasini hesaplamak istediginiz sayilari girip entera basiniz."<<endl;
    cout << "Durmak istediginizde -1 sayisini giriniz "<<endl;
    double alinanSayi = 0;
    double toplam = 0;
    sayac = 0;
    while (alinanSayi!=-1)
    {
        cin >> alinanSayi;
        if (alinanSayi!=-1)
        {
            
            toplam = toplam + alinanSayi;
            sayac++;
        }
        
    }
    double ort = toplam / sayac;
    cout << "Girdiginiz sayilarin ortalamasi = ";
    cout << ort<<endl;


    //4-)Fonksiyon kullanarak Vize ve Final notu girilen öğrencinin ortalamasını hesaplayan program(main kullanımı)
    
    cout << "------------------------------------------------------" << endl;
    cout << "Final notunuzu giriniz: " ;
    int finall;
    cin >>  finall;
    cout << "Vize notunuzu giriniz: ";
    int vizee;
    cin >> vizee;
    
    
    ortHesapla(finall, vizee);
}


