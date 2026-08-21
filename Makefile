CC = gcc
CFLAGS = -Wall -Wextra -O2
LDFLAGS = -lm
BUILD_DIR = build
SRCS = $(wildcard *.c)
BINS = $(patsubst %.c, $(BUILD_DIR)/%, $(SRCS))

.PHONY: all clean
all: $(BUILD_DIR) $(BINS)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BUILD_DIR)/%: %.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -rf $(BUILD_DIR)
