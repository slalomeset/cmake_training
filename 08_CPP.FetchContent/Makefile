all: generate build run

run:
	./build/app/Executable

generate:
	/usr/local/bin/cmake -S . -B build

clear:
	rm -rf build && mkdir build

compile:
	/usr/local/bin/cmake --build build --target=Executable

my_lib:
	/usr/local/bin/cmake --build build --target=my_lib

clean:
	/usr/local/bin/cmake --build build --target=clean

remove_submodule:
	rm -rf external/json

# to generate image of dependency on libraries
dependency:
	cd build && cmake .. --graphviz=graph.dot && dot -Tpng graph.dot -o graphImage.png
