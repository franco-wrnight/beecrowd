CC        := gcc
CXX       := g++

CFLAGS    := -std=c17 -Wall -Wextra -Wpedantic -O2
CXXFLAGS  := -std=c++20 -Wall -Wextra -Wpedantic -O2

CPPFLAGS  :=
LDFLAGS   :=
LDLIBS    := -lm

BUILD_DIR := build

SRCS_C   := $(wildcard *.c */*.c)
SRCS_CPP := $(wildcard *.cpp */*.cpp)

BINS_C   := $(patsubst %.c,$(BUILD_DIR)/%,$(SRCS_C))
BINS_CPP := $(patsubst %.cpp,$(BUILD_DIR)/%,$(SRCS_CPP))
BINS     := $(BINS_C) $(BINS_CPP)

.PHONY: all clean run help

.DEFAULT_GOAL := all

all: $(BINS)

$(BINS_C): $(BUILD_DIR)/%: %.c
	@mkdir -p $(@D)
	@printf "CC   %s -> %s\n" "$<" "$@"
	@$(CC) $(CPPFLAGS) $(CFLAGS) "$<" $(LDFLAGS) $(LDLIBS) -o "$@"

$(BINS_CPP): $(BUILD_DIR)/%: %.cpp
	@mkdir -p $(@D)
	@printf "CXX  %s -> %s\n" "$<" "$@"
	@$(CXX) $(CPPFLAGS) $(CXXFLAGS) "$<" $(LDFLAGS) $(LDLIBS) -o "$@"

run:
	@if [ -z "$(P)" ]; then \
		printf "Uso: make run P=categoria/problema\n"; \
		printf "Ejemplo: make run P=1-beginner/1047\n"; \
		exit 1; \
	fi
	@TARGET=$$(echo "$(P)" | sed -E 's/\.(c|cpp)$$//'); \
	$(MAKE) --no-print-directory $(BUILD_DIR)/$$TARGET && ./$(BUILD_DIR)/$$TARGET

clean:
	@rm -rf "$(BUILD_DIR)"

help:
	@printf "make                         Compilar todos los problemas (.c y .cpp)\n"
	@printf "make run P=categoria/id      Compilar y ejecutar un problema\n"
	@printf "make clean                   Eliminar archivos compilados\n"
	@printf "make help                    Mostrar esta ayuda\n"
