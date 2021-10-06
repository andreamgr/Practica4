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

 void tocar_nota(int duracion, float tfrec){  //funcion generadora de notas, periodo de la nota y duracion de esta
     
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
 void silencio(int duracion, float tfrec){  //funcion generadora de notas, periodo de la nota y duracion de esta
     
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
 /*
 void tocar_nota2(int duracion, float tfrec){  //funcion generadora de notas, periodo de la nota y duracion de esta
     
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
 void silencio2(int duracion, float tfrec){  //funcion generadora de notas, periodo de la nota y duracion de esta
     
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
*/
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
 
 /*
 void cancion1(){
      
     tocar_nota(500,3.034);
      tocar_nota(500,3.034);
      tocar_nota(500,3.034);
      
       tocar_nota(375,3.82);     
        tocar_nota(125,2.551);
        
        tocar_nota(500,3.034);
        
       tocar_nota(375,3.82);
        tocar_nota(125,2.551);
        
        tocar_nota(1000,3.034);
      
        tocar_nota(500,2.028);
        tocar_nota(500,2.028);
        tocar_nota(500,2.028);
        
        tocar_nota(375,1.911);
        tocar_nota(125,2.551);
        
        tocar_nota(500,3.61);
        
         tocar_nota(375,3.82);
        tocar_nota(125,2.551);
        
        tocar_nota(1000,3.034);

        tocar_nota(500,1.517);
        tocar_nota(375,3.034);
        tocar_nota(125,3.034);    
        tocar_nota(500,1.517);
 
         tocar_nota(375,1.607);
        tocar_nota(125,1.703);  
 
         tocar_nota(125,1.804);
          tocar_nota(125,1.911);
          tocar_nota(300,1.804);
          
          silencio(100,3.822); 
          tocar_nota(300,2.863);
          tocar_nota(500,2.145);

          tocar_nota(375,2.273);
        tocar_nota(125,2.408);  
        
        tocar_nota(125,2.551); 
        tocar_nota(125,2.703); 
        tocar_nota(300,2.551); 
        
        silencio(100,3.822); 
        tocar_nota(300,3.822); 
        tocar_nota(500,3.608); 
         tocar_nota(375,3.822);
        tocar_nota(125,2.551);
       
        tocar_nota(500,3.034); 
        tocar_nota(375,3.822);
        tocar_nota(125,2.551);
        tocar_nota(2500,3.034); 
        silencio(1000,3.822); 
 }
*/
 void cancion(){
      
     tocar_nota(500,12.13); //MI
      tocar_nota(500,12.13); //mi
      tocar_nota(500,12.13); //mi
      
       tocar_nota(375,13.62);     //do 
       
        tocar_nota(125,12.13); //mi

        tocar_nota(500,20.41); //sol
        
       tocar_nota(375,13.62);//do
       
        tocar_nota(125,20.41);//sol
        
        tocar_nota(1000,11.45); //fa
      
        tocar_nota(500,18.18); //la
        
        tocar_nota(500,16.20); //si
        
        tocar_nota(500,17.16); //la#
        
        tocar_nota(375,18.18);//la
        
        tocar_nota(125,20.41);//sol
        
        tocar_nota(500,12.13);//mi
        
         tocar_nota(375,20.41);//sol
         
        tocar_nota(125,2.551); //la
        
        tocar_nota(1000,3.034); //fa

        tocar_nota(500,20.41); //sol
        
        tocar_nota(375,12.13); //mi
        
        tocar_nota(125,13.62);   //do  
        
        tocar_nota(500,6.8); //re
        
 
         tocar_nota(375,16.20); //si
        //tocar_nota(125,1.703);  
 
        
        silencio(1000,3.822); 
 }

 /*
  void cancion3(){
      
     tocar_nota(500,3.034);
      tocar_nota(500,3.034);
      tocar_nota(500,3.034);
      
       tocar_nota(375,3.82);     
        tocar_nota(125,2.551);
        
        tocar_nota(500,3.034);
        
       tocar_nota(375,3.82);
        tocar_nota(125,2.551);
        
        tocar_nota(1000,3.034);
      
        tocar_nota(500,2.028);
        tocar_nota(500,2.028);
        tocar_nota(500,2.028);
        
        tocar_nota(375,1.911);
        tocar_nota(125,2.551);
        
        tocar_nota(500,3.61);
        
         tocar_nota(375,3.82);
        tocar_nota(125,2.551);
        
        tocar_nota(1000,3.034);

        tocar_nota(500,1.517);
        tocar_nota(375,3.034);
        tocar_nota(125,3.034);    
        tocar_nota(500,1.517);
 
         tocar_nota(375,1.607);
        tocar_nota(125,1.703);  
 
         tocar_nota(125,1.804);
          tocar_nota(125,1.911);
          tocar_nota(300,1.804);
          
          silencio(100,3.822); 
          tocar_nota(300,2.863);
          tocar_nota(500,2.145);

          tocar_nota(375,2.273);
        tocar_nota(125,2.408);  
        
        tocar_nota(125,2.551); 
        tocar_nota(125,2.703); 
        tocar_nota(300,2.551); 
        
        silencio(100,3.822); 
        tocar_nota(300,3.822); 
        tocar_nota(500,3.608); 
         tocar_nota(375,3.822);
        tocar_nota(125,2.551);
       
        tocar_nota(500,3.034); 
        tocar_nota(375,3.822);
        tocar_nota(125,2.551);
        tocar_nota(2500,3.034); 
        silencio(1000,3.822); 
 }*/


void main(void) {
   
    ADCON1 = 15;

    TRISA = 0b00010000;
    
    //LCD_Init();
    confT0();
  while (1) { 
        
 
      cancion();
        
        
 	} 
 
 

    
    
    
    
}



