#include "brojNacina.h"
#include<iostream>
#include<vector>
using namespace std;

int brojNacinaUvjet(vector<vector<int>>&matrica,vector<vector<bool>>&zabranjena_polja,int i,int j){
    int red=matrica.size()-1;
    int kolona=matrica[0].size();

    if(i==0 && j==kolona-1)
        return 1;
    if(matrica[i][j]!=-1)
        return matrica[i][j];

    matrica[i][j]=0;

    if(j<kolona-1){
        if(!zabranjena_polja[i][j+1])
            matrica[i][j]+=brojNacinaUvjet(matrica,zabranjena_polja,i,j+1);
    }

    if(i>0 && j<kolona-1){
        if(!zabranjena_polja[i-1][j+1])
            matrica[i][j]+=brojNacinaUvjet(matrica,zabranjena_polja,i-1,j+1);
    }

    if(i<red && j<kolona-1){
        if(!zabranjena_polja[i+1][j+1])
            matrica[i][j]+=brojNacinaUvjet(matrica,zabranjena_polja,i+1,j+1);
    }


    return matrica[i][j];
}

int brojNacinaUvjet_(int red,int kolona,vector<vector<bool>>&zabranjena_polja){
    vector<vector<int>>matrica(red);
    int brojac=0;
    for(int i=0;i<red;i++)
        matrica[i].resize(kolona);


    for(int i=0;i<red;i++){
        for(int j=0;j<kolona;j++){
            matrica[i][j]=-1;
        }
    }

    brojac=brojNacinaUvjet(matrica,zabranjena_polja,0,0);
    return brojac;

}

