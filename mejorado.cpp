#include <windows.h>
#include <iostream>
using namespace std;
int matriz(int,int);
int bombas(char **x,int a, int b){


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
            cout<<" "<< z[i][j]<<" ";

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

    navegacion(ary,a,b);
    for (int i=0;i<a;i++){
        delete []ary[i];
    delete []ary;
    }
    return 0;
}
int main() {
int a,b;
bool z=true;
int N,M;
cout<<"ingrese numero de filas:"<<" ";
cin>>N;
cout<<"ingres el numero de columnas:"<<" ";
cin>>M;
    while(z){
            matriz(N,M);
    }

  return 0;
}

