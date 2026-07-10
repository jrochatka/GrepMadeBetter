# Kompilator
CXX = g++

# Flagi kompilacji
CXXFLAGS = -std=c++17 -Wall -Wextra -Iinclude

# Pliki źródłowe
SRC = src/main.cpp src/ArgumentParser.cpp

# Nazwa programu
TARGET = gmb

# Domyślny cel
all: $(TARGET)

# Kompilacja programu
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

# Uruchomienie programu
run: $(TARGET)
	./$(TARGET)

# Kompilacja testów
test:
	$(CXX) $(CXXFLAGS) tests/test_argument_parser.cpp src/ArgumentParser.cpp -o test
	./test

# Usuwanie plików wynikowych
clean:
	rm -f $(TARGET) test