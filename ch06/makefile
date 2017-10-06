# Makefile, 2012-06-23 T1110

# TODO
# ----------------------------------
NAME        = calc
VERSION     = 1.0.0
RELEASE     = 01
# ----------------------------------

BIN         = $(NAME)
OBJS        = $(patsubst %.cpp,%.cpp.o,$(wildcard $(SRC_DIR)/*.cpp))
OBJS       += $(patsubst %.cc,%.cc.o,$(wildcard $(SRC_DIR)/*.cc))
OBJS       += $(patsubst %.C,%.C.o,$(wildcard $(SRC_DIR)/*.C))

# TODO
# BEGIN ----------------------------------
# Folders
SRC_DIR     = .

# Flags
CXXFLAGS    = -Wall
CXXFLAGS   += -I$(SRC_DIR)

CPPFLAGS    = -D_DEBUG

LDFLAGS     = -L$(SRC_DIR)

LIBS        = -lpthread
# END ----------------------------------

.PHONY: all clean

all: $(BIN)

$(BIN): $(OBJS)
	$(CXX) $(CPPFLAGS) $(LDFLAGS) $^ -o $@ $(LIBS)

# source files
%.cpp.o: %.cpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $^ -o $@

%.cc.o: %.cc
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $^ -o $@

%.C.o: %.C
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $^ -o $@


clean:
	$(RM) $(BIN) $(OBJS)
