
#include<iostream>
using namespace std;


int numerosPerfectos(int n)
{

    int a,b,c;
    while(c<100)
    {
        cout<<c<<endl;
        c=a+b;
        a=b; b=c;
    }


}
int numerosPrimos()
{
  int n=0,c=0,c2=0,res=0,nc=0;
  cout<<"Introduce el limite de numeros: "; cin>>n;
  for(c=1;c<=n;c++)
  {
    for(c2=1;c2<=c;c2++)
    {
      res=c%c2;
      if(res==0)
      {
        nc=nc+1;
      }
    }
    if(nc==2)
    {
      cout<<" "<<c;
    }
    nc=0;
  }
}
//int main()
//{   cout<<"numeros perfectos son:"<< endl;
//    int a=0,b=1,c=1;
//    int n;
//    cout<<"ingresa n: "<<endl;
//    cin>>n;
//    int numerosPerfectos(n);

//}

int main(){
   int a=0,i,n;
         cout<<"Ingrese numero"<<endl;
         cin>>n;
         for(i=1;i<(n+1);i++){
         if(n%i==0){
             a++;
            }
         }
         if(a!=2){
              cout<<"No es Primo";
            }else{
                cout<<"Si es Primo";
         }
    return 0;
}
