
#include <avr/io.h>

 
   
int main(void)
{ 
  DDRA = 0B11111111;		 					
  PORTA =0B00000000;
  	
  DDRB = 0B11111111;		
  PORTB =0B00000000;
 
  DDRC = 0B00111100;
  PORTC =0B11000011;
  
  DDRD = 0B11111111;
  PORTD =0B00000000;

  DDRE = 0B11110011;			 
  PORTE =0B00001100;

  DDRF = 0B00000000;					 
  PORTF =0B11110000;  
  Delay_ms(50);                 
   

 ADMUX=0x61;		
 	
  
   
  while(1)
  {      

  ADCSRA=0xD2;		

      
   while((ADCSRA & 0x10)!=0x10); 
	
   PORTB=ADCH;		 
    
 } 
}

