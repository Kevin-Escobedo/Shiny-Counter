CXX=g++
CXXFLAGS=-std=c++17 -Wpedantic -Wall -Wextra -Werror -Weffc++ -Wzero-as-null-pointer-constant
OPTIMIZE=-O2
FILES=Counter.hpp Counter.cpp main.cpp
TARGET=shiny-counter
LIBRARIES=-l sqlite3 -l sfml-graphics -l sfml-window -l sfml-system

all: $(TARGET)
$(TARGET): $(FILES)
	$(CXX) $(CXXFLAGS) $(OPTIMIZE) $(FILES) -o $(TARGET).exe $(LIBRARIES)

debug: $(FILES)
	$(CXX) $(CXXFLAGS) -g $(FILES) -o $(TARGET)-debug.exe $(LIBRARIES)

clean:
	/bin/rm -f $(TARGET).exe
	/bin/rm -f $(TARGET)-debug.exe
