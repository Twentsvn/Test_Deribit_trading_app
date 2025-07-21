#include "api_client.hpp"
#include "app.hpp"
#include <iostream>

int main() {
   // DeribitAPIClient client("AS5Gz59F", "j7R9ctC3wEk2sDz0n8VV3V0iEJXgYa4hBqUtygrQn3U");

   // if (client.authenticate()) {
   //     client.get_access_token();
   //     std::cout << "[+] Successfully Authenticated" <<std::endl; 
  //  } else {
  //      std::cerr << "Authentication failed.\n";
  //  }
    
    app App;
    App.app_init();
    
    
    //client.get_orderbook("BTC_USDT",10);
    //client.get_positions("USDT");

    //client.place_order("ETH_USDT", 1000, 10000 ,1);
    //client.get_positions("ETH","spot");
    //std::string order_id;
    //std::cin >> order_id;
    //client.cancel_order(order_id);
    //client.modify_order(order_id , 5 , 5);

    return 0;
}