#include "option.hh"
#include <stdio.h>

bool opt_check, opt_dump_action, opt_dump_assoc, opt_dump_automaton, opt_dump_module, opt_dump_tree, opt_substring_grammar;

long debug_level;
FILE* debug_file;
const char* opt_output_filename = "-";
vector<string> opt_include_paths;
