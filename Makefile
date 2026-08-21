CC = gcc
CFLAGS = -Wall -Wextra -O2
LDFLAGS = -lm
BUILD_DIR = build
SRCS = $(shell find . -maxdepth 2 -name "*.c")
BINS = $(patsubst %.c, $(BUILD_DIR)/%, $(notdir $(SRCS)))

.PHONY: all clean

all: $(BUILD_DIR) $(BINS)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BUILD_DIR)/%: $(BUILD_DIR)
	@SRC=$$(find . -maxdepth 2 -name "$*.c" | head -n 1); \
	if [ -n "$$SRC" ]; then \
		$(CC) $(CFLAGS) $$SRC -o $@ $(LDFLAGS); \
	else \
		echo "Error: No se encontró el archivo $*.c"; exit 1; \
	fi

clean:
	rm -rf $(BUILD_DIR)
