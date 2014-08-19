CXX ?= g++

LDFLAGS ?=
LDLIBS ?= -lapt-pkg -lapt-inst -lssl -lcrypto -lcurl
CFLAGS ?=

SRC := $(wildcard src/*.cc)
OBJ := $(SRC:%.cc=%.o)

#Tells make your binary is called artifact_name_here and it should be in bin/
BIN = s3

# all is the target (you would run make all from the command line). 'all' is dependent
# on $(BIN)
all: $(BIN)

#$(BIN) is dependent on objects
$(BIN): $(OBJ)
	$(CXX) -o $@ $^ $(LDFLAGS) $(LDLIBS)

#each object file is dependent on its source file, and whenever make needs to create
# an object file, to follow this rule:
%.o: %.cc
	$(CXX) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(BIN)

install: s3
	cp s3 $(DESTDIR)/usr/lib/apt/methods/
