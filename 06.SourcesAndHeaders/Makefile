all: exe

generate:
	/usr/local/bin/cmake -S . -B build

clear:
	rm -rf build && mkdir build

exe:
	/usr/local/bin/cmake --build build --target=all

my_lib:
	/usr/local/bin/cmake --build build --target=my_lib

clean:
	/usr/local/bin/cmake --build build --target=clean
