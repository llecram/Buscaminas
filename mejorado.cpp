#include <windows.h>
#include<stdlib.h>
#include <iostream>
using namespace std;
int matriz(int,int);
void agregaBombas(char **z,int nbombas,int a,int b){
    int i,x,y;// contador de bombas
    i = 1;
    while( i <= nbombas){
        x = rand()%a;
        y = rand()%b;
        z[x][y] = '*';
        i++;
    }
}
int navegacion(char **z,int a, int b){
    int g,u;
    bool x=true;
        while (x){
            cout<<"ingrese una posicion"<<"\n";
            cout<<"ingrese la fila";
            cin>>g;
            cout<<"ingrese la columna";
            cin>>u;
            z[g][u]='@';
            Sleep(2);
            system("CLS");
            x=false;

        }
    for (int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(z[i][j]=='*'){
                break;
            }
            else{
                cout<<" "<< z[i][j]<<" ";
            }


        }
        cout<<"\n"<<"\n";

    }
}
int matriz(int a, int b){
    char  **ary= new char *[a];
    for (int i=0;i<a;i++){
        ary[i]=new char[b];
    }
    for (int i=0; i<a;i++){
        for (int j=0; j<b;j++){
            ary[i][j]='X';
        }
    }

    /*for (int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<" "<< ary[i][j]<<" ";
        }
        cout<<"\n"<<"\n";
    }*/
    agregaBombas(ary,3,a,b);
    navegacion(ary,a,b);

    for (int i=0;i<a;i++){
        delete []ary[i];
    delete []ary;
    }
    return 0;
}
int main() {
int a,b,bomba;
bool z=true;
int N,M;
cout<<"ingrese numero de filas:"<<" ";
cin>>N;
cout<<"ingres el numero de columnas:"<<" ";
cin>>M;
cout<<"ingrese el numero de bombas:"<<" ";
cin>>bomba;
    while(z){

            matriz(N,M);

    }

  return 0;
}
