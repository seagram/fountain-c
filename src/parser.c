// fountain parser
// parses .fountain file into HTML markup

#include <string.h>

void trim_leading_newlines(char input[]) {
    // Normalize input by triming all leading newlines
    // Mutates string in place, no additonal allocations
    // TODO: account for carrige returns (\r)
    // auto first_non_newline_char = find_if(input.begin(), input.end(), [](char c) { return c != '\n'; });
    // input.erase(input.begin(), first_non_newline_char);
};

void find_first_blank_line_range(char input[]) {
    // Determines where last line of title page is (if exists)
    // Defined as first instance of two consecutive newlines (\n\n)
    // TODO: return either location of last char before double newline
    // auto first_double_newline = find(input.begin(), input.end(), "\n\n");
};

int contains_titlepage(char input[]) {
    // Checks if content at top of document is a title page
    // Find first line, check if contains colon (:)
    // TODO: edge case where other element contains colon
};

void strip_boneyard_blocks(char input[]) {
    // Remove all boneyard blocks from input (not included in output)
};
