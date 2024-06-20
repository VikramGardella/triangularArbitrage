CXX = g++
CXXFLAGS = `wx-config --cxxflags` -std=c++20
LDFLAGS = `wx-config --libs`
SOURCES = main.cpp token.cpp conversion.cpp
OBJECTS = $(SOURCES:.cpp=.o)
TARGET = TryArbBot

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) -o $@ $^ $(LDFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)

.PHONY: clean
