#include <iostream>

using namespace std;

int main(int argc, char** argv) {
   printf("    **** CALCULATOR ****\n");
    float numb1,numb2;
    char operation ;
     
    cin>>numb1>>operation>>numb2;
    switch(operation) 
    {
    	case '-':cout<<numb1<<operation<<numb2<<"="	<<numb1 - numb2 ; break;
    	case '+':cout<<numb1<<operation<<numb2<<"="	<<numb1 + numb2 ; break;
	   	case '/':cout<<numb1<<operation<<numb2<<"="	<<numb1 / numb2 ; break;
		case '*':cout<<numb1<<operation<<numb2<<"="	<<numb1 * numb2 ; break;
	 case '%':
	     bool is_num1_int,is_num2_int;
	     is_num1_int=((int)numb1==numb1);
	     is_num1_int=((int)numb1==numb1);
	  	 if(is_num1_int&&is_num2_int)
	  	   cout<<numb1<<operation<<numb2<<"="<< (int)numb1 % (int)numb2 ; 
	     else cout<<"Not valid"; 
		break; 
	 default : cout<<"Not valid operation!" <<endl; 	  
   }
   system("pause>0");
}