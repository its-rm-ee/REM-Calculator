#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <windows.h>
using namespace std;

//functions:
void showscreen();

void showmenu();

void clearbuffer();

double validnum(string message);

double sum(double a, double b);

double subs(double a, double b);

double mul(double a, double b);

double diver(double a, double b);

unsigned long long fact (unsigned long long a);

double power(double base, double expo);

double remain(double a, double b);

double loga(double num, double base);

double radic(double base, double power, double root);

void handle_choice(int choice);

void handle_sum();

void handle_subs();

void handle_mul();

void handle_diver();

void handle_fact();

void handle_loga();

void handle_radic();

void handle_remain();

void handle_power();

void handle_exit();

int get_prec();


int main(){
	
    showscreen();
    
while (true){
	
	   system("cls");

    showmenu();
    
 	
int choice;
    cin >> choice;
       

if (choice >= 1 && choice <= 10){
	
	handle_choice(choice);
	
if (choice == 10)
    break; 
	
	clearbuffer();
	cout << endl;
    cout << "Press enter to return to menu...";
	cin.get();}
	

	
else{
	
	cout << "Invalid input! Enter a number 1 - 10." << endl;
	       
	        Sleep(1404);
	        clearbuffer();
	        continue; } }
	
	
	
return 0;}


//UI:
void showscreen() {
	
    system("cls");
    
    string padding = "                                 ";
    string lines[] = {
        "+--------------------------------------+",
        "| +----------------------------------+ |",
        "| |                                  | |",
        "| |        REM Calculator            | |",
        "| |           Version-1              | |",
        "| +----------------------------------+ |",
        "+--------------------------------------+",
        "|     [7]  [8]  [9]  [+]  [sqrt]       |",
        "|     [4]  [5]  [6]  [-]  [^]          |",
        "|     [1]  [2]  [3]  [*]  [!]          |",
        "|     [0]  [C]  [=]  [/]  [%]          |",
        "+--------------------------------------+",
        "|         Developed by RM              |",
        "|            IUST - EE                 |",
        "+--------------------------------------+"};
    
    for(int i = 0; i < 15; i++) {
        cout << padding << lines[i] << endl;
        Sleep(106);}
    
    Sleep(1800);
    system("cls");}



void showmenu(){
	 string space = "                      ";
	 cout << "Choose the operation: " << endl;
	 cout << endl;
	 cout << space << "1.Addition (+)" << endl;
	 cout << space << "2.Substraction (-)" << endl;
	 cout << space << "3.Multiplication (x)" << endl;
	 cout << space << "4.Division (/)" << endl;
	 cout << space << "5.Factorial (!)" << endl;
	 cout << space << "6.Power (^)" << endl;
	 cout << space << "7.Remainder (%)" << endl;
	 cout << space << "8.Logarithm (log)" << endl;
	 cout << space << "9.Radical (root)" << endl;
	 cout << space << "10.Exit " << endl;
	 cout << endl;
	 cout << space << "Enter 1-10: ";
	 cout << endl;}
	 
	 

void clearbuffer(){
	
	 cin.clear();
	 cin.ignore(1000,'\n'); }



double validnum(string message){
 
while(true){
	
	   double num;
	   cout << message;
	   
	if (cin >> num){
		
		    return num; } 

clearbuffer();

        cout << "Invalid input! Try again." << endl;
		        Sleep(1500);
				system("cls"); }}
				
				     
//operators:

double sum(double a, double b){
	 
	    return a + b; }
	    
	    

double subs(double a, double b){
	
     	return (a - b); }
     	
     	

double mul(double a, double b){
	
	    return a * b; }
	
	
	
double diver(double a, double b){
	
	if (b == 0){

	   cout << "Error! division by zero is not valid." << endl;
	   
	            return 0; }
	   
	    return (double)a/b; } 



unsigned long long fact(unsigned long long a){
	
	 if (a == 0 || a ==1) return 1;	 
	 
unsigned long long result = 1;

for (int i = 1; i <= a; i++){
	
	 result *= i; }
	 
	     return result; }



double power(double base, double expo){
	
	   if (base == 1 || expo == 0) return 1;
	   else if (base == 0) return 0;
	   else if (expo == 1) return base;
                
				return pow(base, expo);}
				
				
				
double remain(double a, double b){
	 
if(a == 0) return 0;
if(b == 0){
	 cout << "Error! Division by zero, Try again." << endl;

	         return 0; }
	 
	   return fmod(a, b); }
	   
	   

double loga(double num, double base){
	
	   double result = log(num) / log(base); 
	            
	          return result; }
	          
	          
	          
double radic(double base, double power, double root){
	
	   double result = pow(base, (power / root));
	          return result; }
	          
	          
//handle choice:

void handle_choice(int choice){
	
 switch(choice){

	
	
	 case 1:
	 	    handle_sum();
	 	
	 	      break;
	 	    
	 case 2:
	 	    handle_subs();
	 	
	 	      break;
	 	    
	 case 3:
	 	    handle_mul();
	 	
	 	      break;
	 	    
	 case 4:
	 	    handle_diver();
	 	
	 	      break;
	 	    
	 case 5:
	 	    handle_fact();
	 	
	 	      break;
	 	    
	 case 6:
	 	    handle_power();
	 	
	 	      break;
	 	    
	 case 7:
	 	    handle_remain();
	 	
	 	      break;
	 	    
	 case 8:
	 	    handle_loga();
	 	      
			  break;
	 	    
	 case 9:
	 	    handle_radic();
	          
			  break;
	 	    
	 case 10:
	 	    handle_exit();
	 	      
			  break; }  }
			  
			  
int get_prec(){
	
	int p;
	cout << "Precision: ";
	cin >> p;
	return p; }	    
	 	    
//handling operators:
void handle_sum(){
	
double a = validnum("Enter the first number: ");
double b = validnum("Enter the second number: ");

    cout << "Result: " << sum(a, b) << endl; }



void handle_subs(){
	
double a = validnum("Enter the first number: ");
double b = validnum("Enter the second number: ");

    cout << "Result: " << subs(a, b) << endl;}
    
    
    
void handle_mul(){
	
double a = validnum("Enter the first number: ");
double b = validnum("Enter the second number: ");

    cout << "Result: " << mul(a, b) << endl;}
    
    
    
void handle_diver(){
	
double a = validnum("Enter the first number: ");
double b = validnum("Enter the second number: ");
	
int prec = get_prec();
	 cout << "Result: " << fixed << setprecision(prec) << diver(a, b) << endl;
	 cout.unsetf(ios::fixed); }



void handle_fact(){	
	 		
double a = validnum("Enter the number: ");

while (true){	
	
    if (a < 0){
    	 
    	cout << "Error! Negative number. Try another number." << endl;
    	     
    	      Sleep(1404);
    	      system("cls");
    	      a = validnum("Enter the number: ");
    	      continue; }
    	      
    else if (a != (long long)a){
	   
        cout << "Error! Must be an integer. Try another number." << endl;
         
              Sleep(1404);
              system("cls");
        	  a = validnum("Enter the number: ");          
              continue; }
              
    else if (a > 21){
    	
    	cout << "Error! Maximum input for factorial is 21, Try another number." << endl;
    	  
    	      Sleep(1404);
    	      system("cls");
     	      a = validnum("Enter the number: ");   	      
    	      continue; }
	
	break; }
	   
  	    	  cout << "Result: " << fact((unsigned long long)a);
			   
			  cout << endl;}



void handle_power(){
	
double base = validnum("Enter the base: ");
double expo = validnum("Enter the exponent: ");


     if (base == 0 && expo < 0){
     	
     	 cout << "Error! Zero cannot be raised to a negative number." << endl;
     	  
                 Sleep(1404);
                 system("cls");
                 return; }
                 
     if (base < 0 && expo != (int)expo){
     	
     	 cout << "Error! Invalid input." << endl;
     	 
     	         Sleep(1404);
	             system("cls");
	             return; }
	             
               cout << "Result: " << power(base, expo) << endl; }



void handle_remain(){
	
double a = validnum("Enter the first number: ");
double b = validnum("Enter the second number: ");
	
	
	           cout << "Result: " << remain(a, b) << endl;}
	           
	    
	    
void handle_loga(){
	
double number = validnum("Enter the number: ");
double logbase = validnum("Enter the logarithm base: ");

if (number <= 0 || logbase <= 0 || logbase == 1){
	
	cout << "Error! Number / Base cannot be less than or equal to zero." << endl;
	
	        Sleep(1404);
	        system("cls");
	        return; }
	        
else{
	
int prec = get_prec();

	cout << "Result: " << fixed << setprecision(prec) << loga(number, logbase) << endl; } }
	           
	 

void handle_radic(){
	
	
double radBase = validnum("Enter the base: ");
double radPow = validnum("Enter the power of the base: ");
double root = validnum("Enter the root: ");

       if (radBase < 0 && fmod(root, 2.0) ==0.0){
	   
       	   cout << "Error! Negative bases do not have even roots." << endl;
       	           Sleep(1500);
       	           system("cls");
       	           return; }
       	           
       else if (radBase == 0 && radPow <= 0 ){
       	
       	   cout << "Error! Invalid input." << endl;
       	           Sleep(1500);
       	           system("cls");
       	           return; }
	   
	   else if (root <= 0){
	   	
	   	  cout << "Error! Invalid input for root." << endl;
	   	           Sleep(1500);
       	           system("cls");
       	           return; }
       	           
int prec = get_prec();
       	
       	cout << "Result: " << fixed << setprecision(prec) << radic(radBase, radPow, root) << endl; }
       	
       	
       	
void handle_exit(){
	
	 system("cls");
     	cout << "See you next time :) " << endl;
		    exit(0);}