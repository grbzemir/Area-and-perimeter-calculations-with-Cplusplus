#include<iostream>
#include<math.h>
#define pi 3.14

using namespace std;

int main()

{

  /* Dairenin alanini ve Çevresini Hesaplama*/
  // Daire Alanı= pi*r*r
  // Daire Çevresi= 2*pi*r

   double yaricap;
   double alan;
   double cevre;

   cout<<"Dairenin alani ve cevresi icin yaricapi giriniz :"<<endl;
   cin>>yaricap;

   cevre=2*pi*yaricap;
   alan=pi*yaricap*yaricap;
   
   cout<<"Dairenin alani ="<<alan<<endl;
   cout<<"Dairenin cevresi ="<<cevre<<endl;
   cout<<"***************************************";
   cout<<"Lutfen Diger islemlere devam ediniz";
   cout<<"***************************************";

   // Dik üçgen
   // kenarlar icin h,b,c
   // alan = bxc/2

   int b;
   int c;
   int h;
   int du_alan;
   int du_cevre;

    cout<<"Dik ucgenin kenarlarini giriniz 3 tane :"<<endl;
    cin>>b>>c>>h;

    du_alan=(b*c)/2;
    du_cevre=b+c+h;

    cout<<"Dik ucgenin alani ="<<du_alan<<endl;
    cout<<"Dik ucgenin cevresi ="<<du_cevre<<endl;
    cout<<"***************************************";


     /*
    Kare
    Çevre = 4a
    Alan = a2 */

    int a;
    int k_alan;
    int k_cevre;

    cout<<"Karenin kenarini giriniz :"<<endl;
    cin>>a;

    k_alan=a*a;
    cout<<"Karenin alani ="<<k_alan<<endl;

    k_cevre=4*a;
    cout<<"Karenin cevresi ="<<k_cevre<<endl;
    cout<<"***************************************";

    /* Dikdörtgen
    Dikdörtgenin Çevresi = 2(K + U)
    Dikdörtgenin Alanı = K x U 
    */

    int kk;
    int uu;
    int dik_alan;
    int dikd_cevre;

    cout<<"Dikdortgenin kenarlarini giriniz 2 kenar olacak please :"<<endl;
    cin>>kk>>uu;

    dik_alan=kk*uu;
    cout<<"Dikdortgenin alani ="<<dik_alan<<endl;

    dikd_cevre=2*(kk+uu);
    cout<<"Dikdortgenin cevresi ="<<dikd_cevre<<endl;
    cout<<"***************************************";

    /* Üçgen
    Üçgenin Çevresi = a + b + c
    Üçgenin Alanı = (a + b + c) / 2
    */

    int x;
    int y;
    int z;
    int ucgen_alan;
    int ucgen_cevre;

    cout<<"Ucgenin kenarlarini giriniz 3 tane :"<<endl;
    cin>>a>>b>>c;

    ucgen_alan=(x+y+z)/2;
    cout<<"Ucgenin alani ="<<ucgen_alan<<endl;

    ucgen_cevre=x+y+z;
    cout<<"Ucgenin cevresi ="<<ucgen_cevre<<endl;
    cout<<"***************************************";



    return 0;
}

