#ifndef PROMPT_H
#define PROMPT_H

char* prompt_string(const char* prompt, const char* default_value); /* Prompt user for a string input */
char* prompt_year(void); /* Prompt user for year (defaults to current year) */

#endif /* PROMPT_H */
