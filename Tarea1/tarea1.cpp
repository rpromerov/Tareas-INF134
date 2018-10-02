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

int enteroGuy(){	
	cout<<"Welcome to enteroGuy \n";
	int n,m;
	cin>> n >> m;
	int arrN[n], arrM[m];
	
	while(cin){
		cin>>arrN;
	}
	while (cin){
		cin>>arrM;
	}
	cout<<arrM[-1]<<"\n";
	cout<< sizeof(arrM)/sizeof(arrM[0]);
	cout<<"pido x";
	int x;
	cin>>x;
	for (int i = 0;i<=n; i++){
		cout<< "entre al for";
		if (i==n){
			cout<<"No existe";
			
		}
		for (int j = m;j>=0;j--){
			if (arrN[i]+arrM[j] == x){
				cout<<arrN[i]<<" "<< arrM[j]<<"\n";
				return 0;
			}
		}
	}
	return 0;
}

int main(){
  enteroGuy();
  cout<<"sali de enteroGuy";
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