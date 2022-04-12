#include <iostream>

using namespace std;

void multiplicacion(int,int,int,int);
int main()
{
    int f1,f2,c1,c2;
    cout<<"\tDigite la  dimension de la  matriz 1: "<<endl;
    cout<<"nro de filas "<<endl;
    cin>>f1;
    cout<<"nro de columnas "<<endl;
    cin>>c1;
    cout<<"========================================"<<endl;
    cout<<"\tDigite la  dimension de la  matriz 2: "<<endl;
    cout<<"nro de filas "<<endl;
    cin>>f2;
    cout<<"nro de columnas "<<endl;
    cin>>c2;
    multiplicacion(f1,f2,c1,c2);
    return 0;
}
void multiplicacion(int a1,int a2,int b1,int b2){
    int m1[a1][b1];
    int m2[a2][b2];
    int matriz_resultado[a1][b2];
 //!multiplicacion de matrices
    if(b1==a2){
        for(int i=0;i<a1;i++){
            for(int j=0;j<b1;j++){
                cout<<"pos ["<<i+1<<"]["<<j+1<<"]";
                cin>>m1[i][j];
            }
        }
        cout<<"----------------------------------"<<endl;
        for(int i=0;i<a2;i++){
            for(int j=0;j<b2;j++){
                cout<<"pos ["<<i+1<<"]["<<j+1<<"]";
                cin>>m2[i][j];
            }
        }
        cout<<"========================================="<<endl;
        cout<<"Resultado"<<endl;
        for(int i=0;i<a1;i++){
            for(int j=0;j<b2;j++){
                matriz_resultado[i][j]=0;
                for(int k=0;k<b1;k++){
                    matriz_resultado[i][j]+=m1[i][k]*m2[k][j];
                }
            }
        }
        for(int i=0;i<a1;i++){
            for(int j=0;j<b2;j++){
                cout<<" \t| "<<matriz_resultado[i][j]<<" | ";
            }
            cout<<endl;
        }
    }else{
        cout<<"las matrices no se  pueden multiplicar ";
    }
}
