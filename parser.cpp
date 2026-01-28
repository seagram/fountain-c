// Fountain Parser
// Parses .fountain file into HTML markup
#include <string>

using namespace std;

void trim_leading_newlines(string &input) {
    // Normalize input by triming all leading newlines
    // Mutates string in place, no additonal allocations
    // TODO: account for carrige returns (\r)
    auto first_non_newline_char = find_if(input.begin(), input.end(), [](char c) { return c != '\n'; });
    input.erase(input.begin(), first_non_newline_char);
};

void find_first_blank_line_range() {
    // Determines where last line of title page is (if exists)
};

void contains_titlepage() {
    // Checks if content at top of document is a title page
};

void strip_boneyard_blocks() {
    // Remove all boneyard blocks from input (not included in output)
};
