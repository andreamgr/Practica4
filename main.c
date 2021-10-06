/* 
 * File:   main.c
 * Author: andym
 *
 * Created on 6 de octubre de 2021, 12:18 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <xc.h>


char buffer1[8];
float distancia = 2;
int a,b,s;//DECLARAMOS VARIABLES DE TIPO ENTERO

 void tocar_nota1(int duracion, float tfrec){  //funcion generadora de notas, periodo de la nota y duracion de esta
     
     duracion = duracion/tfrec;
     tfrec = 255-((tfrec/2)/(.0002*128));

       for(b=0;b<duracion;b++){
           
            PORTAbits.RA0 = 1;
           TMR0 = tfrec;
           while(INTCONbits.TMR0IF==0);
           INTCONbits.TMR0IF=0;
  
        PORTAbits.RA0=0;
         TMR0 = tfrec;
         while(INTCONbits.TMR0IF==0);
         INTCONbits.TMR0IF=0;
}
 }
 void silencio1(int duracion, float tfrec){  //funcion generadora de notas, periodo de la nota y duracion de esta
     
     duracion = duracion/tfrec;
     tfrec = 255-((tfrec/2)/(.0002*128));

       for(b=0;b<duracion;b++){
            PORTAbits.RA0 = 0;
           TMR0 = tfrec;
           while(INTCONbits.TMR0IF==0);
           INTCONbits.TMR0IF=0;
  
        PORTAbits.RA0=0;
         TMR0 = tfrec;
         while(INTCONbits.TMR0IF==0);
         INTCONbits.TMR0IF=0;
}
 }

 //////////////////////PARA LA 2 CANCION 
 
 void tocar_nota2(int duracion, float tfrec){  //PARA LA 2 CANCIÓN
     
     duracion = duracion/tfrec;
     tfrec = 255-((tfrec/2)/(.0002*128));

       for(b=0;b<duracion;b++){
           
            PORTAbits.RA0 = 1;
           TMR0 = tfrec;
           while(INTCONbits.TMR0IF==0);
           INTCONbits.TMR0IF=0;
  
        PORTAbits.RA0=0;
         TMR0 = tfrec;
         while(INTCONbits.TMR0IF==0);
         INTCONbits.TMR0IF=0;
}
 }
 void silencio2(int duracion, float tfrec){  //PARA LA 2 CANCIÓN
     
     duracion = duracion/tfrec;
     tfrec = 255-((tfrec/2)/(.0002*128));

       for(b=0;b<duracion;b++){
            PORTAbits.RA0 = 0;
           TMR0 = tfrec;
           while(INTCONbits.TMR0IF==0);
           INTCONbits.TMR0IF=0;
  
        PORTAbits.RA0=0;
         TMR0 = tfrec;
         while(INTCONbits.TMR0IF==0);
         INTCONbits.TMR0IF=0;
}
 }

 ///////////////////////////////PARA LA 3 CANCIÓN

 void tocar_nota3(int duracion, float tfrec){  //PARA LA 3 CANCIÓN
     
     duracion = duracion/tfrec;
     tfrec = 255-((tfrec/2)/(.0002*128));

       for(b=0;b<duracion;b++){
           
            PORTAbits.RA0 = 1;
           TMR0 = tfrec;
           while(INTCONbits.TMR0IF==0);
           INTCONbits.TMR0IF=0;
  
        PORTAbits.RA0=0;
         TMR0 = tfrec;
         while(INTCONbits.TMR0IF==0);
         INTCONbits.TMR0IF=0;
}
 }
 void silencio3(int duracion, float tfrec){  //PARA LA 3 CANCIÓN
     
     duracion = duracion/tfrec;
     tfrec = 255-((tfrec/2)/(.0002*128));

       for(b=0;b<duracion;b++){
            PORTAbits.RA0 = 0;
           TMR0 = tfrec;
           while(INTCONbits.TMR0IF==0);
           INTCONbits.TMR0IF=0;
  
        PORTAbits.RA0=0;
         TMR0 = tfrec;
         while(INTCONbits.TMR0IF==0);
         INTCONbits.TMR0IF=0;
}
 }

 void confT0(){
     //11000010
    T0CONbits.TMR0ON = 1; //encendido
      T0CONbits.T08BIT = 1;  //modo 8 bits
      T0CONbits.T0CS = 0; //modo temporizador tcy
      T0CONbits.T0SE = 0; //leer bajadas
      T0CONbits.PSA = 0;  //con preescalador
      T0CONbits.T0PS = 0b110; 
     
      INTCONbits.TMR0IE = 1;      // Habilitamos las interrupción por desborde de TIMER0


 }
 
 
 void cancion1(){ //ALAN
      
     tocar_nota1(500,3.034);
      tocar_nota1(500,3.034);
      tocar_nota1(500,3.034);
      
       tocar_nota1(375,3.82);     
        tocar_nota1(125,2.551);
        
        tocar_nota1(500,3.034);
        
       tocar_nota1(375,3.82);
        tocar_nota1(125,2.551);
        
        tocar_nota1(1000,3.034);
      
        tocar_nota1(500,2.028);
        tocar_nota1(500,2.028);
        tocar_nota1(500,2.028);
        
        tocar_nota1(375,1.911);
        tocar_nota1(125,2.551);
        
        tocar_nota1(500,3.61);
        
         tocar_nota1(375,3.82);
        tocar_nota1(125,2.551);
        
        tocar_nota1(1000,3.034);

        tocar_nota1(500,1.517);
        tocar_nota1(375,3.034);
        tocar_nota1(125,3.034);    
        tocar_nota1(500,1.517);
 
         tocar_nota1(375,1.607);
        tocar_nota1(125,1.703);  
 
         tocar_nota1(125,1.804);
          tocar_nota1(125,1.911);
          tocar_nota1(300,1.804);
          
          silencio1(100,3.822); 
          tocar_nota1(300,2.863);
          tocar_nota1(500,2.145);

          tocar_nota1(375,2.273);
        tocar_nota1(125,2.408);  
        
        tocar_nota1(125,2.551); 
        tocar_nota1(125,2.703); 
        tocar_nota1(300,2.551); 
        
        silencio1(100,3.822); 
        tocar_nota1(300,3.822); 
        tocar_nota1(500,3.608); 
         tocar_nota1(375,3.822);
        tocar_nota1(125,2.551);
       
        tocar_nota1(500,3.034); 
        tocar_nota1(375,3.822);
        tocar_nota1(125,2.551);
        tocar_nota1(2500,3.034); 
        silencio1(1000,3.822); 
 }

 
 void cancion2(){ //ANDREA
      
       tocar_nota2(125,12.13); //mi
       tocar_nota2(125,12.13); //mi
       tocar_nota2(125,12.13); //mi
        tocar_nota2(375,13.62);     //do 
        tocar_nota2(125,12.13); //mi
        tocar_nota2(500,20.41); //sol
        
       tocar_nota2(375,13.62);//do
       
        tocar_nota2(125,20.41);//sol
        
        tocar_nota2(1000,11.45); //fa
      
        tocar_nota2(500,18.18); //la
        
        tocar_nota2(500,16.20); //si
        
        tocar_nota2(500,17.16); //la#
        
        tocar_nota2(375,18.18);//la
        
        tocar_nota2(125,20.41);//sol
        
        tocar_nota2(500,12.13);//mi
        
         tocar_nota2(375,20.41);//sol
         
        tocar_nota2(125,2.551); //la
        
        tocar_nota2(1000,3.034); //fa

        tocar_nota2(500,20.41); //sol
        
        tocar_nota2(375,12.13); //mi
        
        tocar_nota2(125,13.62);   //do  
        
        tocar_nota2(500,6.8); //re
        
        tocar_nota2(375,16.20); //si
         
        tocar_nota2(375,13.62);     //do 
       
        tocar_nota2(125,12.13); //mi

        tocar_nota2(500,20.41); //sol
        
        tocar_nota2(375,13.62);//do
       
        tocar_nota2(125,20.41);//sol
        
        tocar_nota2(1000,11.45); //fa
      
        tocar_nota2(500,18.18); //la
        
        tocar_nota2(500,16.20); //si
        
        tocar_nota2(500,17.16); //la#
        
        tocar_nota2(375,18.18);//la
        
        tocar_nota2(125,20.41);//sol
        
        tocar_nota2(500,12.13);//mi
        
         tocar_nota2(375,20.41);//sol
         
        tocar_nota2(125,2.551); //la
        
        tocar_nota2(1000,3.034); //fa

        tocar_nota2(500,20.41); //sol
        
        tocar_nota2(375,12.13); //mi
        
        tocar_nota2(125,13.62);   //do  
        
        tocar_nota2(500,6.8); //re
        tocar_nota2(375,16.20); //si
        tocar_nota2(125,20.41);//sol
        
        tocar_nota2(500,12.13);//mi
        
        tocar_nota2(375,20.41);//sol
         
        tocar_nota2(125,2.551); //la
        
        tocar_nota2(1000,3.034); //fa

        tocar_nota2(500,20.41); //sol
        
        tocar_nota2(375,12.13); //mi
        
        tocar_nota2(125,13.62);   //do  
        
        tocar_nota2(500,6.8); //re
        tocar_nota2(375,16.20); //si
        tocar_nota2(375,20.41);//sol
         
        tocar_nota2(125,2.551); //la
        
        tocar_nota2(1000,3.034); //fa

        tocar_nota2(500,20.41); //sol
        
        tocar_nota2(375,12.13); //mi
        
        tocar_nota2(125,13.62);   //do  
        
        tocar_nota2(500,6.8); //re
        tocar_nota2(375,16.20); //si
        
        silencio2(1000,3.822);
 
        
        
 }

 
 
 
  void cancion3(){ //Emman
      
      tocar_nota3(500,2.70); 
 tocar_nota3(500,2.70); 
tocar_nota3(500,2.70);
tocar_nota3(500,2.70); 
tocar_nota3(375,2.73); //sol

tocar_nota3(375,2.73);
tocar_nota3(375,2.73);
tocar_nota3(375,2.73);
tocar_nota3(500,2.70); 
tocar_nota3(375,2.73);

tocar_nota3(125,3.40);
tocar_nota3(125,3.40);
tocar_nota3(125,3.40);//re
tocar_nota3(375,3.03); //mi
tocar_nota3(375,3.03); //mi

tocar_nota3(500,2.70); 
tocar_nota3(375,2.73);
tocar_nota3(375,2.73);

tocar_nota3(375,2.73);
tocar_nota3(375,2.73);
tocar_nota3(375,2.73);

 tocar_nota3(375,3.03);
tocar_nota3(125,2.27);//la
  tocar_nota3(1000,2.86);//fa
tocar_nota3(125,3.82);//do
tocar_nota3(375,3.03);

tocar_nota3(375,3.03);
tocar_nota3(500,2.70); 
 tocar_nota3(500,2.70); 

tocar_nota3(500,2.70); 
 tocar_nota3(500,2.70); 
tocar_nota3(500,2.70);
tocar_nota3(500,2.70); 
tocar_nota3(375,2.73); //sol

tocar_nota3(375,2.73);
tocar_nota3(375,2.73);
tocar_nota3(375,2.73);
tocar_nota3(500,2.70); 
tocar_nota3(375,2.73);

tocar_nota3(125,3.40);
tocar_nota3(125,3.40);
tocar_nota3(125,3.40);//re
tocar_nota3(375,3.03); //mi
tocar_nota3(375,3.03); //mi

tocar_nota3(500,2.70); 
tocar_nota3(375,2.73);
tocar_nota3(375,2.73);

tocar_nota3(375,2.73);
tocar_nota3(375,2.73);
tocar_nota3(375,2.73);

 tocar_nota3(375,3.03);
tocar_nota3(125,2.27);//la
  tocar_nota3(1000,2.86);//fa
tocar_nota3(125,3.82);//do
tocar_nota3(375,3.03);

tocar_nota3(375,3.03);
tocar_nota3(500,2.70); 
 tocar_nota3(500,2.70); 
tocar_nota3(500,2.70); 
 tocar_nota3(500,2.70); 
tocar_nota3(500,2.70);
tocar_nota3(500,2.70); 
tocar_nota3(375,2.73); //sol

tocar_nota3(375,2.73);
tocar_nota3(375,2.73);
tocar_nota3(375,2.73);
tocar_nota3(500,2.70); 
tocar_nota3(375,2.73);

tocar_nota3(125,3.40);
tocar_nota3(125,3.40);
tocar_nota3(125,3.40);//re
tocar_nota3(375,3.03); //mi
tocar_nota3(375,3.03); //mi

tocar_nota3(500,2.70); 
tocar_nota3(375,2.73);
tocar_nota3(375,2.73);

tocar_nota3(375,2.73);
tocar_nota3(375,2.73);
tocar_nota3(375,2.73);

 tocar_nota3(375,3.03);
tocar_nota3(125,2.27);//la
  tocar_nota3(1000,2.86);//fa
tocar_nota3(125,3.82);//do
tocar_nota3(375,3.03);

tocar_nota3(375,3.03);
tocar_nota3(500,2.70); 
 tocar_nota3(500,2.70);
   silencio3(1000,3.822);     
 }
 


void main(void) {
   
    ADCON1 = 15;

    TRISA = 0b00010000; //Salida RA0 
    
   //Entrada de los botones 
    TRISBbits.RB0 = 1;
    TRISBbits.RB1 = 1;
    TRISBbits.RB2 = 1;
    
    
 
    //confT0();
    
    
    while (1) { 
        
          
     if (PORTBbits.RB0 == 1) {
          confT0();
          cancion1();
      
     }
     if (PORTBbits.RB1 == 1) {
         confT0();
          cancion2();
     }
     if (PORTBbits.RB2 == 1) {
         confT0();
          cancion3();
     }
      
     
        
        
 	} 
 
 

    
    
    
    
}

