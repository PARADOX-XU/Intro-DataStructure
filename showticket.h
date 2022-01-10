#include <string>
using namespace std;

      bool ShowTicket::is_sold(){         
            return sold;
        }

      void ShowTicket::sell_seat(){ 
            sold = true;
            }

      string ShowTicket::print_ticket(){
            if (sold)
                return row + " "+ seat + " sold";
            else
                return row + " "+ seat + " is available";
        }
