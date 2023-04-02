#include "brojNacina.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int brojNacinaIndeksi(vector<vector<int>>&matrica, vector<int>&indeksi, int i, int j) {
    int red = matrica.size()-1;
    int kolona = matrica[0].size();

    if (i == 0 && j == kolona-1)
        return 1;
    if (matrica[i][j] != -1)
        return matrica[i][j];

    matrica[i][j] = 0;

    if (j < kolona-1)
        matrica[i][j] += brojNacinaIndeksi(matrica, indeksi, i, j+1);
    if (i > 0 && find(indeksi.begin(), indeksi.end(), i-1) != indeksi.end() && j < kolona-1)
        matrica[i][j] += brojNacinaIndeksi(matrica, indeksi, i-1, j+1);
    if (i < red && find(indeksi.begin(), indeksi.end(), i+1) != indeksi.end() && j < kolona-1)
            matrica[i][j] += brojNacinaIndeksi(matrica, indeksi, i+1, j+1);

    return matrica[i][j];
}

int brojNacinaIndeksi_(int red, int kolona, vector<int>&indeksi) {
    int brojac=0;

    if(indeksi.size()-1>red)
        throw 0;

    if(find(indeksi.begin(),indeksi.end(),0)==indeksi.end()){
        brojac=0;
    }
    else{
        vector<vector<int>>matrica(red, vector<int>(kolona, -1));
        brojac = brojNacinaIndeksi(matrica, indeksi, 0, 0);

    }
    return brojac;
}
