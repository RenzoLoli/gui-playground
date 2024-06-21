GXX=g++
LINK=-Llib -lraylib
INCLUDE=-Iinclude/
FLAGS=-std=c++17 -g

SOURCES := $(shell find src -name "*.cpp")
OBJECTS := $(patsubst src/%.cpp,obj/%.o,$(SOURCES))

all: build

build: out $(OBJECTS)
	$(GXX) $(OBJECTS) $(LINK) -o out/app $(FLAGS)

obj/%.o: src/%.cpp
	mkdir -p $(dir $@)
	$(GXX) $(INCLUDE) -c -o $@ $<

includes: include
	rsync -avm --include="*.hpp" --include="*/" --exclude="*" ./src/ ./include/

include:
	mkdir include

out:
	mkdir out

obj:
	mkdir obj

clean: 
	rm -rf obj
	rm -rf out
	rm -rf include

