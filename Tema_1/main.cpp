#include<iostream>
#include<vector>
#include "brojNacina.h"

using namespace std;

vector<vector<bool>>unosZabranjenihPolja(int red,int kolona,vector<vector<bool>>&zabranjena_polja){
    int broj;
    cout<<"Unesite 0 ako polje nije zabranjeno ili 1 je polje zabranjeno"<<endl;

    for (int i = 0; i < red; i++) {
        for (int j = 0; j < kolona; j++) {
            cin >> broj;
            if (i == 0 && j == 0) {
                zabranjena_polja[i][j] = false;
            }
            else if (i == 0 && j == kolona - 1) {
                zabranjena_polja[i][j] = false;
            }
            else {
                if (broj == 0)
                    zabranjena_polja[i][j] = false;
                if (broj == 1)
                    zabranjena_polja[i][j] = true;
                }
            }
        }
    return zabranjena_polja;
};
int main(){
    int m,n;
    cout<<"Unesite broj redova matrice: "<<endl;
    cin>>m;
    cout<<"Unesite broj kolona matrice: "<<endl;
    cin>>n;
    int brojPuteva=brojNacina_(m,n);
    cout<<"Broj nacina je: "<<brojPuteva<<endl; //korisnik sam unosi vrijednosti

    int brojPuteva2=brojNacina_(2,1);
    cout<<"Broj nacina je: "<<brojPuteva2<<endl; //slucaj kada odmah zavrsavamo
    int brojPuteva3=brojNacina_(9,10);
    cout<<"Broj nacina je: "<<brojPuteva3<<endl; //jako veliki broj

   //korisnik sam unosi vrijednosti za zabranjena polja
    vector<vector<bool>>zabranjena_polja(m);
    for(int i=0;i<m;i++)
        zabranjena_polja[i].resize(n);

    zabranjena_polja=unosZabranjenihPolja(m,n,zabranjena_polja);

    /*for(int i=0;i<zabranjena_polja.size();i++){
        for(int j=0;j<zabranjena_polja[i].size();j++)
            cout<<zabranjena_polja[i][j]<<" ";
        cout<<endl;
    }*/
    int brojPutevaUvjet=brojNacinaUvjet_(m,n,zabranjena_polja);
    cout<<"Broj razlicitih puteva uz zabranjena polja je: "<<brojPutevaUvjet<<endl;

    vector<vector<bool>>zabranjena_polja_2 ={
        {0,1,0,0},
        {1,0,0,1}
    };

    int brojPutevaUvjet2=brojNacinaUvjet_(2,4,zabranjena_polja_2);
    cout<<"Broj razlicitih puteva uz zabranjena polja je: "<<brojPutevaUvjet2<<endl;


    try{
        vector<int>indeksi={3,2,4,1,0};
        int brojac2=brojNacinaIndeksi_(m,n,indeksi);
        cout<<brojac2;
    }
    catch(int e){
        cout<<"Ne moze! Vise elemenata u nizu nego sto ima redova u matrici!"<<endl;
    }

}
