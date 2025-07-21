# Test_Deribit Trading App
## Build process
```
cd /working/directory/build
cmake ..
make
build
./main
```

# Features
- You need to generate keys for the authentication from the testDeribit platform (And harcode it :) in the main.cpp  
- It works on `RESTAPI` and `wss` for the communication with the Deribit Platform.
- It can place order , cancel order , subscribe and a lot more and you can add too (but why).
