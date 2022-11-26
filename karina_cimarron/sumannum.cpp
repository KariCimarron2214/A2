 //programa de suma de varios numeros 
 //creado por karina cimarron
 #include<iostream>//libreria de entrada y salida
 using namespace std;//se utiliza para los comando de cin, cout y de std

 int main()//cuerpo del programa 
 { 
         
         float x=0,s=0;//declaramos todas la variables x,s en ceros
         int i=0,l; //variable del contador
         cout<<"ingrese el valor de l:  ";//se muestra el mensaje al usuario .
         cin>>l; // guardamos con el cin 
	 //utilizamos para hacer repeticiones, hasta que cumpla la condicion.
         do{ 
         cout<<"ingrese el valor de x:  ";//mensaje para que el usuario ingrese un valor de x 
         cin>>x;//guardamos el valor ingresado. 
         i=i+1;//variable del contador .
         s=s+x; //variable del acumulador general
          //utilizamos para ejecutar elementos hasta que la condicion finalize
         }while(i<l); 
         cout<<"la suma de los numeros fue:  "<<s<<endl;//se muestra el resultado final al usuario 
         return 0;//finaliza la ejecucion

 }
