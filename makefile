WFLAGS := -std=c++11 -Wall -Werror -c
BUILD_DIR := build
SRC_DIR := src
BIN_DIR := bin
APP_NAME := areas
MKDIR := mkdir -p

all : dirs build

dirs :
	$(MKDIR) $(BUILD_DIR)
	$(MKDIR) $(BIN_DIR)

build : $(BUILD_DIR)/circle_area.o $(BUILD_DIR)/triangle_area.o $(BUILD_DIR)/main.o
	g++ $^ -o $(BIN_DIR)/$(APP_NAME)
	
$(BUILD_DIR)/circle_area.o : $(SRC_DIR)/circle_area.cpp
	g++ $(WFLAGS) $^ -o $@
	
$(BUILD_DIR)/triangle_area.o : $(SRC_DIR)/triangle_area.cpp
	g++ $(WFLAGS) $^ -o $@
	
$(BUILD_DIR)/main.o : $(SRC_DIR)/main.cpp
	g++ $(WFLAGS) $^ -o $@
	
run : 
	$(BIN_DIR)/$(APP_NAME)

clean :
	@rm -r $(BUILD_DIR)
	
.PHONY : all build dirs clean