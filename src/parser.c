// fountain parser
// parses .fountain file into HTML markup
// syntax docs: https://fountain.io/syntax/

#include "../include/utils.h"
#include <stdbool.h>
#include <string.h>

char **split_input_into_lines(const char *input, int *count) {
    // TODO: handle if input is null
    size_t input_length = strlen(input);
    size_t token_count = 0;
    // TODO: null-terminate array
};

void trim_leading_newlines(char *input) {
    // Normalize input by triming all leading newlines
    // Note: these are the newlines before the optional title page
    char *start = input;
    while (*start == '\n' || *start == '\r') {
        start++;
    }
    if (start != input) {
        memmove(input, start, strlen(start) + 1);
    }
};

void find_first_blank_line_range(char *input) {
    // Determines where last line of title page is (if exists)
    // Defined as first instance of two consecutive newlines (\n\n)
    // TODO: return either location of last char before double newline
    char *start = input;
    int newline_count = 0;
    while (newline_count < 2) {
        if (*start == '\n') {
            newline_count++; // todo: switch to ++newline_count?
        } else {
            start++;
        }
    }
    // TODO: complete function
};

int contains_titlepage(char input[]) {
    // Checks if content at top of document is a title page
    // Find first line, check if contains colon (:)
    // TODO: edge case where other element contains colon

};

void strip_boneyard_blocks(char *input) {
    // Remove all boneyard blocks from input (not included in output)
    // Defined as all text inside /* and */
    // Ran before input is turned into lines

    int boneyard_start, boneyard_end;

    // Find opening of boneyard
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == "/" && input[i + 1] == "*") {
            boneyard_start = i;
            break;
        }
    }

    // Find closing of boneyard
    for (int i = boneyard_start + 1; input[i] != '\0';) {
        if (input[i] == "*" && input[i + 1] == "/") { // TODO: accessing memory out of bounds
            boneyard_end = i + 1;
            break;
        }
    }

    // Shift chars after boneyard to start point (deleting boneyard block)
    memmove(input + boneyard_start, input + boneyard_end, strlen(input + boneyard_end) + 1);
    // TODO: only passes once. need to handle multiple boneyard blocks
};
