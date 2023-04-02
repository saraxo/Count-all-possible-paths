#ifndef BROJNACINA_H
#define BROJNACINA_H
#include<iostream>
#include<vector>
using namespace std;

//funkcije vezane za dio pod a)
int brojNacina(vector<vector<int>>&matrica,int i,int j);
int brojNacina_(int red,int kolona);

//funkcije vezane za dio pod b)
int brojNacinaUvjet(vector<vector<int>>&matrica,vector<vector<bool>>&zabranjena_polja,int i,int j);
int brojNacinaUvjet_(int red,int kolona,vector<vector<bool>>&zabranjena_polja);

//funkcije vezane za dio pod c)
int brojNacinaIndeksi(vector<vector<int>>&matrica, vector<int>&indeksi, int i, int j);
int brojNacinaIndeksi_(int red,int kolona,vector<int>&indeksi);

#endif // BROJNACINA_H
