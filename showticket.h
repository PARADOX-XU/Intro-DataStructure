#include <string>
using namespace std;

      bool is_sold(){         
            return sold;
        }

      void sell_seat(){ 
            sold = true;
            }

      string print_ticket(){
            if (sold)
                return row + " "+ seat + " sold";
            else
                return row + " "+ seat + " is available";
        }
