#include <iostream>
using namespace std;




int main() {
  // dimensions
  int a,b;
bool z=true;
  int N = 8;
  int M = 8;

  // dynamic allocation
  char **ary = new char *[N];
  for(int i = 0; i < N; ++i){
      ary[i] = new char[M];
  }
  // fill
  for(int i = 0; i < N; ++i){
    for(int j = 0; j < M; ++j){
        ary[i][j] = 'X' ;
    }
  }
  while (z){
        z=false;
    cin>>a;
    cin>>b;
    for (int i=0;i<N;++i){
        for (int j=0;j<N;++j){

            if(a==i && b==j){
                ary[i][j]='@';
                z=true;
            }
            else{
                z=false;
            }
        }
    }

  }
  // print
  for(int i = 0; i < N; ++i){
    for(int j = 0; j < M; ++j){
      cout << ary[i][j]<<" ";
    }
    cout<<"\n"<<"\n";
  }


  for(int i = 0; i < N; ++i){
    delete [] ary[i];
  delete [] ary;
  }
  return 0;
}
