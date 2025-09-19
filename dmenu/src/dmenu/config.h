/* dmenu config.h
 * Sam Larkin
 * https://github.com/samlarkin
 * Last updated 2025-09-19
 * */

/* -b  option; if 0, dmenu appears at bottom */
static int topbar = 1; 

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "Hack Nerd Font Mono:size=10"
};

/* -p  option; prompt to the left of input field */
static const char *prompt = "Search: ";

static const char col_gruvbox_dark0[]          = "#282828";
static const char col_gruvbox_light1[]         = "#ebdbb2";
static const char col_gruvbox_dark2[]          = "#504945";
static const char col_gruvbox_dark4[]          = "#7c6f64";
static const char col_gruvbox_neutral_orange[] = "#d65d0e";
static const char *colors[SchemeLast][2] = {
    /* fg, bg */
    [SchemeNorm] = { col_gruvbox_light1, col_gruvbox_dark0 },
    [SchemeSel] =  { col_gruvbox_dark0, col_gruvbox_dark2 },
    [SchemeOut] =  { col_gruvbox_dark0, col_gruvbox_dark2 },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 5;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
