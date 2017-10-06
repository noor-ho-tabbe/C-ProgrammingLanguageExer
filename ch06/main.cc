/**
 * main.cc
 *
 * EAMPLE
 *     ./calc 'rate=1.1934;150/rate;19.75/rate;217/rate'
 */
 #include <iostream>
 #include <sstream>
 #include <stdio.h>
 #include "calc.h"
 
 using namespace std;
 
 istream* input;
 
 int main(int argc, char * argv[])
 {
     printf("argc = %d \n", argc);
     switch (argc) {
         case 1:
             input = &cin;
             break;
         case 2:
             input = new istringstream(argv[1]);
             break;
         default:
             error("too many arguments");
             return 1;
     }
 
     table["pi"] = 3.1415926535897932385;  // PRE-DEFINED NAMES
     table["e"]  = 2.7182818284590452354;
 
     while (*input) {
         get_token();
         if (curr_tok == END) break;
         if (curr_tok == PRINT) continue;
         cout << "1" << endl;
         cout << expr(false) << '\n';
     }
 
     if (input != &cin) delete input;
     return no_of_errors;
 }
 