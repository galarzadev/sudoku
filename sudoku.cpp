
                                              //////////////////////   
                                              ////////SODOKU////////   
                                              //////////////////////  
/*                                              
               MODULOS
void generar ();
Crea la matriz 3x3(3x3)  rellena de ceros.
void print();
Muestra la matriz 3x3(3x3) actual en la pantalla.
void aleat();
Genera los números iniciales en la matriz 9x9.
void asignar();
Pasa los valores de 9x9 a 3x3(3x3)
void ccaja ();
Comprueba que no haya números repetidos en las cajas 3x3 y los borra.
void cfico();
Comprueba que no haya números repetidos en las filas y columnas 3x3 y los borra.                                       
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

void generar();
void print();
void fijo();
void asignar();
void contraasignar();
void ccaja();
void cfico();
void block();
void jugar();

////////////
     struct mat9{
     int mat3[3][3];
     };
     mat9 mat[3][3];//creo una matriz de 3X3, de matrices de 3x3 como el sodoku
     mat9 blo[3][3];
     int i=0,j=0,i2=0,j2=0;//para desplazarme en mat
     int matt[9][9];//matriz de 9x9 para comparar filas y columnas
     int win=0;
     int f=0, c=0, n=0, ss;
     int selec=1;

 //////////////////
int main()
{
    int n;
    
    srand(time(NULL));
    generar ();//inicializo mat con ceros
    fijo();//los tres ejercicios pro defecto.
    asignar(); //paso los valores de matt  a mat
    contraasignar();
    block();
    print();//imprimo la mat 3x3, 3x3
    while(win==0)
    {
    jugar();
    cfico();
    asignar();
    ccaja ();
    contraasignar();
     print();
    }
    cout<<"GANASTE!!!"<<endl<<endl;
    system ("pause");
    
}    
///////////////////
void generar()
{
   
     while (i<3)//c
     {
            while (j<3)//con lo 2 anteriores, cambio de caja, con los siguientes, 
            {          //de munero en cada caja (funciona)
                       while (i2<3)
                           {
                                     while (j2<3)
                                               {
                                                mat[i][j].mat3[i2][j2]=0;
                                                j2++;
                                                }
                                                j2=0;
                           i2++;
                           }  
                           i2=0;
            j++;
            }
            j=0;
     i++;
     }    
     i=0;
     //finc
}     
///////////////////
void print ()
{
    system ("cls");//borro consola
    cout<<"     SUDOKU-FACIL"<<endl<<endl;
     while (i<3)//c
     {
            while (i2<3)
            {
                       while (j<3)
                           {
                                     while (j2<3)//alterno entre cada caja y munero
                                               {
                                               if(mat[i][j].mat3[i2][j2]!=0)//si no son ceros, imprimo
                                                cout<<mat[i][j].mat3[i2][j2];
                                                else 
                                                cout<<char(176);//los ceros se imprimen como cuadritos, q son los "vacios"
                                                j2++;
                                                cout<<" ";//un espacio entre numeros
                                                }
                                                j2=0;
                                                cout<<"  ";//2 espacios entre cajas
                           j++;
                           }  
                           j=0;
                           cout<<endl;//1 intro entre numeros
            i2++;
            }
            i2=0;
            cout<<endl<<endl;//2 intros entre cajas
     i++;
     }    
      i=0;
     //finc
}     

/////////////////////
void fijo()
{
     selec=(rand()%5)+1;
if (selec==1)
{
 matt[0][1]=3;  
 matt[2][1]=8;  
 matt[1][2]=5;  
 matt[2][2]=6;  
 matt[3][0]=9;  
 matt[3][1]=4;  
 matt[4][0]=5;   
 matt[5][1]=6;  
 matt[4][2]=2;  
 matt[5][2]=8;  
 matt[6][0]=8;  
 matt[6][1]=7;  
 matt[7][2]=1;  
 matt[0][3]=7;  
 matt[2][4]=2;  
 matt[2][5]=5;  
 matt[4][3]=6;  
 matt[4][5]=9;  
 matt[6][3]=1;  
 matt[6][4]=5;  
 matt[8][5]=8;  
 matt[1][6]=2;  
 matt[2][7]=4;  
 matt[2][8]=9;  
 matt[3][6]=3;  
 matt[4][6]=4;  
 matt[3][7]=6;  
 matt[5][7]=5;  
 matt[4][8]=7;  
 matt[5][8]=1;  
 matt[6][6]=6;           
 matt[7][6]=8;  
 matt[6][7]=9;  
 matt[8][7]=2;
}
if(selec==2) 
{ 
 matt[1][0]=2;  
 matt[0][1]=5;  
 matt[1][1]=6;  
 matt[0][2]=1;  
 matt[3][0]=5;  
 matt[4][0]=6;  
 matt[4][1]=8;  
 matt[5][2]=9;  
 matt[6][0]=8;  
 matt[7][0]=4;  
 matt[7][1]=1;  
 matt[8][0]=7;  
 matt[8][1]=3;  
 matt[0][3]=8;  
 matt[1][3]=3;  
 matt[4][3]=4;  
 matt[8][3]=5;  
 matt[0][4]=2;  
 matt[3][4]=4;      
 matt[8][4]=8;  
 matt[0][5]=6;  
 matt[4][5]=3;  
 matt[7][5]=2;  
 matt[8][5]=4;  
 matt[3][6]=4;      
 matt[8][6]=1;  
 matt[0][7]=4;  
 matt[1][7]=5;  
 matt[4][7]=2;  
 matt[7][7]=8;  
 matt[8][7]=9;      
 matt[0][8]=7;  
 matt[1][8]=9;  
 matt[2][8]=6;  
 matt[4][8]=1;  
 matt[5][8]=5;  
 matt[7][8]=3; 
}
 if (selec==3)
 {
 matt[0][0]=6;  
 matt[0][2]=9;  
 matt[0][5]=5;  
 matt[0][6]=8;  
 matt[1][2]=4;  
 matt[1][5]=2;      
 matt[1][6]=1;  
 matt[1][7]=5;  
 matt[2][0]=2;  
 matt[2][3]=3;  
 matt[2][6]=6;  
 matt[2][8]=4;      
 matt[3][1]=1;  
 matt[3][3]=4;  
 matt[3][7]=7;  
 matt[3][8]=2;  
 matt[4][0]=9;  
 matt[4][8]=8;      
 matt[5][0]=4;  
 matt[5][1]=7;  
 matt[5][5]=8;  
 matt[5][7]=1;  
 matt[6][0]=8;  
 matt[6][2]=7;      
 matt[6][5]=9;  
 matt[6][8]=6;  
 matt[7][2]=2;  
 matt[7][3]=8;  
 matt[7][6]=9;  
 matt[7][8]=5; 
}
if (selec==4)
 {
 matt[1][0]=5;  
 matt[3][0]=1;  
 matt[5][0]=6;  
 matt[0][1]=7;  
 matt[1][1]=3;  
 matt[8][1]=6;  
 matt[0][2]=6;  
 matt[3][2]=7;  
 matt[6][2]=5;  
 matt[7][2]=9;  
 matt[0][3]=2;  
 matt[4][3]=7;  
 matt[7][3]=3;  
 matt[8][3]=9;  
 matt[0][4]=8;  
 matt[5][4]=3;  
 matt[1][5]=7;  
 matt[6][5]=6;  
 matt[7][5]=4;  
 matt[1][6]=9;  
 matt[6][6]=4;  
 matt[7][6]=2;  
 matt[8][6]=5;  
 matt[0][7]=3;  
 matt[1][7]=8;  
 matt[2][7]=2;  
 matt[4][7]=6;  
 matt[5][7]=5;  
 matt[7][7]=1;  
 matt[8][7]=7;  
 matt[0][8]=5;  
 matt[3][8]=2;  
 matt[7][8]=6;
}
if (selec==5)
 {
 matt[2][0]=7;  
 matt[3][0]=8;  
 matt[5][0]=5;  
 matt[8][0]=3;  
 matt[0][1]=0;  
 matt[1][1]=0;  
 matt[6][1]=0;  
 matt[7][1]=0;  
 matt[8][1]=0;  
 matt[1][2]=8;  
 matt[2][2]=9;  
 matt[4][2]=4;  
 matt[8][3]=8;  
 matt[0][4]=3;  
 matt[1][4]=6;  
 matt[3][4]=5;  
 matt[7][4]=2;  
 matt[8][4]=4;  
 matt[2][5]=2;  
 matt[7][5]=6;  
 matt[1][6]=9;  
 matt[3][6]=6;  
 matt[7][6]=4;  
 matt[1][7]=2;  
 matt[4][7]=7;  
 matt[5][7]=9;  
 matt[6][7]=6;  
 matt[8][7]=5;  
 matt[0][8]=7;  
 matt[1][8]=5;  
 matt[2][8]=6;  
 matt[6][8]=2;  
 matt[7][8]=3;  
}  
}

/////////////////////
void asignar()
{

     while (i<3)//c
     {
            while (j<3)
            {
                       while (i2<3)
                           {
                                     while (j2<3)
                                               {
                                                         
                                                mat[i][j].mat3[i2][j2]=matt[i2+(i*3)][j2+(j*3)];//paso los valores de la 9x9x
                                                j2++;//                                           a la correspondiente 3x3x3x3  
                                                }
                                                j2=0;
                           i2++;
                           }  
                           i2=0;
            j++;
            }
            j=0;
     i++;
     }    
     i=0;
     //finc     
     
}     
//////////////////////
void cfico()//si funciona
{
     
     int x=0,y, m, q, s;
     while (x<9)           //
     {
           y=0;                     //ciclos para cada numero de la matriz de 9x9
     while (y<9)           //
     {
     m=matt[x][y];//voy pasando cada numero a m para q se vea mejor el cod
     if(m!=0)//si es cero, pues no hago nada
     {
        q=0;
     while(q<9)//este lo remplazo en la comparacion para hacerla con los de la misma fila y tamb columnas
     {
                      s=0;
               if(q!=y){//si no es el mismo numero..
               if(m==matt[x][q]){//comparo con los de columna
                matt[x][y]=0;  //si es igual a otro numero, lo borro(lo vuelvo cero)
               q=10;//y salgo del ciclo para este numero
               }
               else
               s=1;//para incrementar q una sola vez
               }
               
               if(q!=x){
               if(m==matt[q][y]){//comparo con los de fila
                matt[x][y]=0;  
               q=10;
           
               }
               else
               s=1;
               }//                         "
               
               if(x==q&&y==q)//si q,q corresponde a la casilla en verificacion 
               q++;
               if(s==1)//si era diferente a y o x, incremento q
               q++;
               
     }//while
     }//if m!=0
      y++;
     }//for
     x++;
     }//for
}     
//////////////////////////
void ccaja()//esta si funciono
{
     //el valor de x dara el numero de la caja   usando mat[x/3][x%3].mat3[y/3][y%3
     //el valor de y dara el numero dentro de la caja
     
     //c0    c1    c2
     //012   012   012    
     //345   345   345  
     //678   678   678  
     
     //c3    c4    c5
     //012   012   012    
     //345   345   345  
     //678   678   678  
     
     //c6    c7    c8
     //012   012   012    
     //345   345   345  
     //678   678   678  
     int x=0,y, m, q;
     while (x<9)           //
     {
           y=0;                     //ciclos para cada numero de la matriz de 9x9                           
     while (y<9)           //
     {
     m=mat[x/3][x%3].mat3[y/3][y%3];//voy pasando cada numero a m para q se vea mejor el cod
     if(m!=0)//si es cero, pues no hago nada
     {
        q=0;
     while(q<9)//este lo remplazo en la comparacion para hacerla con los de la misma fila y tamb columnas
     {
               if(y!=q){//si no es la misma casilla..
               if(m==mat[x/3][x%3].mat3[q/3][q%3]){//comparo con los de caja
               mat[x/3][x%3].mat3[y/3][y%3]=0;  //si es igual a otro numero, lo borro(lo vuelvo cero)
               q=10;//y salgo del ciclo para este numero
               }
               else
               q++;//para incrementar q
               }
               else
               q++;//si es la misma casilla
               
     }//while
     }//if m!=0
      y++;
     }//for

     x++;
     }//for

}     
//////////////////////
void contraasignar()//similar a asignar
{
      while (i<3)//c
     {
            while (j<3)
            {
                       while (i2<3)
                           {
                                     while (j2<3)                
                                               {                     //difiere aqui
                                                         
                                                matt[i2+(i*3)][j2+(j*3)]=mat[i][j].mat3[i2][j2];//paso los valores de la 9x9x
                                                j2++;//                                           a la correspondiente 3x3x3x3  
                                                }
                                                j2=0;
                           i2++;
                           }  
                           i2=0;
            j++;
            }
            j=0;
     i++;
     }    
     i=0;
     //finc     
}
//////////////////////
void block()

{
      while (i<3)//c
     {
            while (j<3)
            {
                       while (i2<3)
                           {
                                     while (j2<3)
                                               {
                                                         
                                                if (mat[i][j].mat3[i2][j2]==0)//bloqueo los numeros iniciales con un 1
                                                blo[i][j].mat3[i2][j2]=0;
                                                else
                                                blo[i][j].mat3[i2][j2]=1;
                                                j2++;//                                           a la correspondiente 3x3x3x3  
                                                }
                                                j2=0;
                           i2++;
                           }  
                           i2=0;
            j++;
            }
            j=0;
     i++;
     }    
     i=0;
     //finc     
}
///////////////////
void jugar()
{
char nu;//lo leo como letra, si no, se traba si meto una letra
       cout<<"ingrese las coordenadas (1-9) del numero a ingresar (1-9)"<<endl<<"Columna: "<<endl;
       cin>>nu;

       f=int(nu)-48;//la convierto a numero

           while(f<1||f>9)//ciclo para ingresar un numero valido
           {
print();
       cout<<"Ingrese un numero por favor";
       cout<<endl<<"Columna: ";
       cin>>nu;
       f=int(nu)-48;//me equivoque con las variables y quedaron al revés
   
            }
      // }
       
       cout<<"Fila: "<<endl<<endl;
       cin>>nu;
       c=int(nu)-48;
           while(c<1||c>9)
           {
print();
       cout<<"Ingrese un numero por favor";
       cout<<endl<<"Fila: ";
       cin>>nu;
       c=int(nu)-48;
   
            }
      // }
       cout<<"Numero: "<<endl<<endl;
       cin>>nu;

       n=int(nu)-48;

           while(n<1||n>9)
           {
print();
       cout<<"Ingrese un numero por favor";
       cout<<endl<<"Numero: ";
       cin>>nu;
       n=int(nu)-48;
   
            }
      // }
       if (blo[(c-1)/3][(f-1)/3].mat3[(c-1)%3][(f-1)%3]==0)//  si el num no esta bloqueado...
       matt[c-1][f-1]=n;
       else
       cout<<"no se pueden modificar los numeros iniciales"<<endl;//sino
       if (blo[(c-1)/3][(f-1)/3].mat3[(c-1)%3][(f-1)%3]==1)
       system("pause");
//           //           //           //           //           //
     win=1;//pongo la variable como ganó
     int x=0,y, m=1;
     while (x<9)           //
     {
           y=0;                     //ciclos para cada numero de la matriz de 9x9
     while (y<9)           //
     {
     if(matt[x][y]==0)//si hay algún vacio  pongo la variable como perdio
     {
      win=0;
      x=9;//y me salgo del ciclo
      y=9;                     
     }
     else
      y++;
     }//for
     x++;
     }//for
}     
//////////////////////                                   FIN,   GRACIAS
