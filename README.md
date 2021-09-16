# How to compile this project

1) Clone this repository.
2) Install g++ or MinGW64.
3) Enter in the obj folder and open a terminal.
4) To debug: g++ -c ../src/*.cpp -g -Wall -m64 -I ../include 
4.1) then: g++ *.o -o ../bin/debug/vn -lSDL2main -lSDL2 -lSDL2_image

5) To release: g++ -c ../src/*.cpp -O3 -Wall -m64 -I ../include
5.1) then: g++ *.o -o ../bin/release/vn-s -lSDL2main -lSDL2 -lSDL2_image
Compile(debug): g++ -c ../src/*.cpp -g -Wall -m64 -I ../include 
6) You may find the binaries inside bin/debug or bin/release
