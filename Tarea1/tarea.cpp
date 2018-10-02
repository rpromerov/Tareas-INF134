#include <iostream>
using namespace std;
void Lava(int M[100][100],int n,int fil,int col,int x){
  for(int i= fil-x; i<= fil+x; i++){
    for(int j=col-x; j<=col+x ;j++){
      if(0<=i and i<=99 and 0<=j and j<=99){
        if(M[i][j] == 1){
          cout << "Se salvo" << endl;
          return;
        }
      }
    }
  }
  cout << "Se murio" << endl;
}
int sumaMen(){
  int n,m,x;
  cin>>n>>m;
  int A[n],B[m];
  for (int i= 0;i<n;i++){
    cin>> A[i];
  }
  for (int i= 0;i<m;i++){
    cin>> B[i];
  }
  cin>>x;
  for (int i=0;i<n;i++){
    for (int j=0;j<m;j++){
      if (A[i]+B[j]== x){
        cout<<A[i]<<" "<<B[j]<<endl;
        return 0;
      }
    }
  }
  cout<<"no existen"<<endl;
  return 0;
}
int main(){
  sumaMen();
  int n;
  cin >> n;
  int M[100][100];
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cin >> M[i][j];
    }
  }
  
  int fil;
  int col;
  int x;
  cin >> fil >> col;
  cin >> x;
  Lava(M, n, fil,col,x);
}