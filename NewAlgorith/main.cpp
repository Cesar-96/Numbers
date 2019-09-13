#include<iostream>
using namespace std;

//Ingresa numero y ver si es perfecto (for)
/*int main()
{

    int num ,div=0,i;
    cout<<"ingresa el num"<<endl;
    cin>>num;

    for (i=1; i< num;i++)
        {
            if(num%i == 0)
                div += i;
        }
    if (num == div)
        cout<<num <<" es perfecto"<<endl;
    else
        cout<<num <<" no es perfecto"<<endl;
    return 0;
}
*/


//Ingresa numero e indica si es perfecto (while)
/*int main()
{
    int num,
    div=0,
    s=1;
    cout<<"ingresa el numero"<<endl;
    cin>>num;
    while (s<num)
    {
        if (num%s==0)
            div += s;
        s++;
    }
    if (num == div)
        cout<<num<<" ,es perfecto"<<endl;
    else
        cout<<num<<" , no es perfecto"<<endl;
    return 0;
}
*/




//Programa que recibe un numero y dice si es primo o no (for)

/*int main()
{
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
            }else
            {
                cout<<"Si es Primo";
         }
    return 0;
}
*/

//ingresa numero e indica si es primo (while)
/*int main() {
int divisor = 1, divisores = 0, num = 0;
cout<<"Ingrese numero: ";
cin>>num;
do
{
if(num % divisor == 0){
divisores++;
}
divisor++;
}while(divisor <= num);
if(divisores == 2)
{
cout<<"El numero "<<num<<" es PRIMO.";
}else{
cout<<"El numero "<<num<<" NO es PRIMO.";
}
return 0;
}*/



//Imprime los numeros primos hasta el 100(for)
/*int main()
{
  int num=100,a=0,b=0,res=0,nc=0;

  cout<<"Introduce el limite de numeros: "<<"1";
  for(a=1;a<=num;a++)
  {
    for(b=1;b<=a;b++)
    {
      res=a%b;
      if(res==0)
      {
        nc=nc+1;
      }
    }
    if(nc==2)
    {
      cout<<" "<<a;
    }
    nc=0;
  }
}
*/











/*
int main()
    {
        int divisor , num=100 ,s=0,i=1;
        while (divisor <= num)
        {
            if (num%divisor==0)
                s++;
                cout<<s;
            divisor++;
            cout<<s;
        }
    }
*/
