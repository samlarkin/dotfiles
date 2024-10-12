/* dmenu config.h
 * Sam Larkin
 * https://github.com/samlarkin
 * Last updated 2024-10-12
 * */

/* -b  option; if 0, dmenu appears at bottom */
static int topbar = 1; 

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "hack:size=10"
};

/* -p  option; prompt to the left of input field */
static const char *prompt = "Search: ";

static const char *colors[SchemeLast][2] = {
    /*     fg         bg       */
    [SchemeNorm] = { "#bbbbbb", "#222222" },
    [SchemeSel] =  { "#eeeeee", "#556677" },
    [SchemeOut] =  { "#000000", "#00ffff" },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
