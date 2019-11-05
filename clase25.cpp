#include <iostream>
#include <cstdlib>
using std::cout;
using std::cin;
using std::endl;


float m[0][0];

float relleno(int x, float m);

int main (){
    
    int a;
    
    cout << "Escriba un numero del 3 al 11" <<endl;
    cin >> a;    
    if (a<3 || a>11);
    cout << "El numero no esta en el rango " <<endl;
    
    float matriz [a+2][a];        
      
    
    return 0;
    
    float relleno (int a, float matriz);
}



float relleno (float x, float m){
    
    
    
    for (int i = 0; i<x+2; i++){
        for (int j = 0; j<x; j++){
            
            m = i+j;                
                      
            
        }
    }
        
}
