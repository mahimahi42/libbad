# Extensions
SRC_EXT=c
OBJ_EXT=o
STATIC_LIB_EXT=a
SHARED_LIB_EXT=so

# Directories
SRC_DIR=src
INC_DIR:=$(SRC_DIR)/include
OBJ_DIR=obj
BIN_DIR=bin
DOC_DIR=doc

# Configuration
PROJECT_NAME=libbad
PROJECT_TYPE=staticlib
ifeq ($(PROJECT_TYPE),staticlib)
TARGET=$(PROJECT_NAME).$(STATIC_LIB_EXT)
else ifeq ($(PROJECT_TYPE),sharedlib)
TARGET=$(PROJECT_NAME).$(SHARED_LIB_EXT)
endif

# Compiler configuration
CC=gcc
WARNS=-Wall -Wextra -pedantic
INCS:=-I(INC_DIR)
CFLAGS:=-std=c11 -fPIC $(INC) -c
LDFLAGS:=$(WARNS)

# Files
DIR_GUARD=@mkdir -p $(@D)
SOURCES=$(wildcard $(SRC_DIR)/*.$(SRC_EXT))
OBJECTS=$(patsubst $(SRC_DIR)/%.$(SRC_EXT),$(OBJ_DIR)/%.$(OBJ_EXT),$(SOURCES))

.PHONY: all clean

all: $(BIN_DIR)/$(TARGET)

clean:
	rm -rf $(OBJ_DIR)
	rm -rf $(BIN_DIR)

$(BIN_DIR)/$(TARGET): $(OBJECTS)
	$(DIR_GUARD)
ifeq ($(PROJECT_TYPE),staticlib)
	ar rcs $@ $^
else ifeq ($(PROJECT_TYPE),sharedlib)
	$(CC) -shared $(LDFLAGS) $^ -o $@
else
	@echo "Unsupported"
endif

$(OBJECTS): $(SOURCES)
	$(DIR_GUARD)
	$(CC) $(CFLAGS) $< -o $@
