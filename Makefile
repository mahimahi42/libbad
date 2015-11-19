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
STATIC_TARGET=$(PROJECT_NAME).$(STATIC_LIB_EXT)
SHARED_TARGET=$(PROJECT_NAME).$(SHARED_LIB_EXT)

# Compiler configuration
CC=gcc
WARNS=-Wall -Wextra -pedantic
INCS:=-I$(INC_DIR)
CFLAGS:=$(WARNS) -std=c99 -fPIC $(INCS) -c
LDFLAGS:=$(WARNS)

# Files
DIR_GUARD=@mkdir -p $(@D)
SOURCES=$(wildcard $(SRC_DIR)/*.$(SRC_EXT))
OBJECTS=$(patsubst $(SRC_DIR)/%.$(SRC_EXT),$(OBJ_DIR)/%.$(OBJ_EXT),$(SOURCES))

# Targets
.PHONY: all doc clean clean_build clean_doc static shared

all: static

doc: $(SOURCES)
	doxygen

clean: clean_build clean_doc

clean_build:
	$(RM) -rf $(OBJ_DIR)
	$(RM) -rf $(BIN_DIR)

clean_doc:
	$(RM) -rf $(DOC_DIR)/* ^$(DOC_DIR)/.gitignore

static: $(BIN_DIR)/$(STATIC_TARGET)

shared: $(BIN_DIR)/$(SHARED_TARGET)

$(BIN_DIR)/$(STATIC_TARGET): $(OBJECTS)
	$(DIR_GUARD)
	ar rcs $@ $^

$(BIN_DIR)/$(SHARED_TARGET): $(OBJECTS)
	$(DIR_GUARD)
	$(CC) -shared $(LDFLAGS) $^ -o $@

$(OBJECTS): $(SOURCES)
	$(DIR_GUARD)
	$(CC) $(CFLAGS) $< -o $@
