#include <stdio.h>

float outp( int, float, float, float );
float inp( float, float );

int main( void )
{
 /*Declaring variable*/
 int choice;
 
 /*Main menu*/
 printf( "----------Pulchowk Hospital---------\n" );
 printf( "Please select whether you where\n" );
 printf( "an in-patient or an out-patient\n" );
 printf( "-------------------------------\n" );
 printf( "1 : In-patient\n" );
 printf( "2 : Out-patient\n" );
 printf( "---> " );
 scanf( "%d", &choice );

 if(choice == 1)
 {
 int dHospital;
 float dRate, hService, hMed, medBill = 0.0;
 medBill = outp(dHospital, dRate, hService, hMed);
 printf( "\nTotal amount owed %.2f", medBill );
 return 0;
 }
 if(choice == 2)
 {
 int dHospital;
 float dRate, hService, hMed, medBill = 0.0;
 medBill = inp( hService, hMed );
 printf( "\nTotal amount owed %.2f", medBill );
 return 0;
 }
}


float outp( int a, float b, float c, float d )
{ 
 /*Declaring the Variables*/ 
 float x = 0.0;
 
 /*What will be displayed to the user and a request of*/
 /*information from user.*/
 printf( "\n----In-patient----\n" );
 
 printf( "Number of days you spent in the hospital: " );
 scanf( "%d", &a ); /*User input days in hospital*/
 printf("------------------------------------------\n");
 
 printf( "The daily rate: " );
 scanf( "%f", &b ); /*User input daily rate*/
 printf("------------------------------------------\n");
 
 printf( "Provided Services cost: " );
 scanf( "%f", &c ); /*User input servies given*/
 printf("------------------------------------------\n");
 
 printf( "Supplied medication cost: " );
 scanf( "%f", &d ); /*User input medication given*/
 printf("------------------------------------------\n");
 
 /*Adding up the total amount owed*/
 x = (a * b) + c + d;
 
 /*return value to be displayed to patient*/
 return x;
}

float inp( float a, float b )
{
 /*Declaring the Variables*/ 
 float x = 0.0;
 
 /*What will be displayed to the user and a request of*/
 /*information from user.*/
 printf( "Provided Services cost: " );
 scanf( "%f", &a ); /*User input servies given*/
 printf("------------------------------------------\n");
 
 printf( "Supplied medication cost: " );
 scanf( "%f", &b ); /*User input medication given*/
 printf("------------------------------------------\n");
 
 /*Adding up the total amount owed*/
 x = a + b;
 
 /*return value to be displayed to patient*/
 return x;
}