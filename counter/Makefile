CXX := g++
CXXFLAGS := -O2 -Wall -std=c++98
SYSTEMC_HOME := /home/yuichiro/work/tools/systemc-2.3.1a
INCDIR := -I$(SYSTEMC_HOME)/include
LIBDIR := -L$(SYSTEMC_HOME)/lib-linux64
LIBS := -lsystemc -lm

TARGET := run.x
SRCS := main.cpp tb.cpp counter.cpp
OBJS := $(SRCS:.cpp=.o)

.SUFFIXES: .cpp .o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(INCDIR) $(LIBDIR) -o $@ $^ $(LIBS)

.cpp.o:
	$(CXX) $(CXXFLAGS) $(INCDIR) -c $<

.PHONY: clean
clean:
	@rm -f *.o *.vcd $(TARGET)

