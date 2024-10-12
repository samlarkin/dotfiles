/* DWM config.h
 * Sam Larkin
 * Last updated 2024-10-12
 * */

/* appearance */
static const unsigned int borderpx  = 3 ;        /* border pixel of windows */
static const unsigned int snap      = 32;       /* snap pixel */
static const int showbar            = 1;        /* 0 means no bar */
static const int topbar             = 1;        /* 0 means bottom bar */
static const char *fonts[]          = { "hack:size=10" };
static const char dmenufont[]       = "hack:size=10";
static const char col_gray1[]       = "#222222";
static const char col_gray2[]       = "#444444";
static const char col_gray3[]       = "#bbbbbb";
static const char col_gray4[]       = "#eeeeee";
static const char col_cyan[]        = "#556677";
static const char col_darkred[]     = "#8B0000";
static const char *colors[][3]      = {
	/*               fg         bg         border   */
	[SchemeNorm] = { col_gray3, col_gray1, col_gray2 },
	[SchemeSel]  = { col_gray4, col_cyan,  col_darkred  },
};

/* tagging */
static const char *tags[] = { "1", "2", "3", "4", "5", "6", "7", "8", "9" };

static const Rule rules[] = {
	/* xprop(1):
	 *	WM_CLASS(STRING) = instance, class
	 *	WM_NAME(STRING) = title
	 */
	/* class      instance    title       tags mask     isfloating   monitor */
	{ "Firefox",  NULL,       NULL,       0,            0,           -1 },
};

/* layout(s) */
static const float mfact     = 0.67; /* factor of master area size [0.05..0.95] */
static const int nmaster     = 1;    /* number of clients in master area */
static const int resizehints = 0;    /* 1 means respect size hints in tiled resizals */

static const Layout layouts[] = {
	/* symbol     arrange function */
	{ "[]=",      tile },    /* first entry is default */
	{ "><>",      NULL },    /* no layout function means floating behavior */
	{ "[M]",      monocle },
};

/* key definitions */
#define MODKEY Mod4Mask
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} },

/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

/* commands */
static char dmenumon[2] = "0"; /* component of dmenu_run, manipulated in spawn() */
static const char *dmenucmd[] = { "dmenu_run", "-m", dmenumon, "-fn", dmenufont, NULL };
static const char *term[]  = { "st", NULL };
static const char *browser[]  = { "firefox", NULL };
static const char *volume_up[]  = { "/home/sam/bin/,volume_up.sh", NULL };
static const char *volume_dn[]  = { "/home/sam/bin/,volume_down.sh", NULL };
static const char *volume_mute[]  = { "/home/sam/bin/,volume_mute.sh", NULL };
static const char *bright_up[]  = { "brightnessctl", "set", "+5", NULL };
static const char *bright_dn[]  = { "brightnessctl", "set", "5-", NULL };
static const char *lock_screen[]  = { "/home/sam/bin/,lock_screen.sh", NULL };
static const char *screenshot[]  = { "/home/sam/bin/,screenshot.sh", NULL };
static const char *monitor_left[]  = { "/home/sam/bin/,monitor_left.sh", NULL };
static const char *monitor_right[]  = { "/home/sam/bin/,monitor_right.sh", NULL };

static Key keys[] = {
	/* modifier                     key        function        argument */
	{ MODKEY,           XK_Return,  spawn,          {.v = term } },
	{ MODKEY,           XK_w,       spawn,          {.v = browser } },
	{ MODKEY,           XK_p,       spawn,          {.v = dmenucmd } },
	{ 0,                0x1008ff13, spawn,          {.v = volume_up } },
	{ 0,                0x1008ff11, spawn,          {.v = volume_dn } },
	{ 0,                0x1008ff12, spawn,          {.v = volume_mute } },
	{ 0,                0x1008ff02, spawn,          {.v = bright_up } },
	{ 0,                0x1008ff03, spawn,          {.v = bright_dn } },
	{ MODKEY,           XK_Left,    spawn,          {.v = monitor_left } },
	{ MODKEY,           XK_Right,   spawn,          {.v = monitor_right } },
	{ MODKEY,           XK_s,       spawn,          {.v = screenshot } },
	{ MODKEY|ShiftMask, XK_l,       spawn,          {.v = lock_screen } },
	{ MODKEY,           XK_b,       togglebar,      {0} },
	{ MODKEY,           XK_j,       focusstack,     {.i = +1 } },
	{ MODKEY,           XK_k,       focusstack,     {.i = -1 } },
	{ MODKEY,           XK_i,       incnmaster,     {.i = +1 } },
	{ MODKEY,           XK_d,       incnmaster,     {.i = -1 } },
	{ MODKEY,           XK_h,       setmfact,       {.f = -0.05} },
	{ MODKEY,           XK_l,       setmfact,       {.f = +0.05} },
	{ MODKEY,           XK_space,   zoom,           {0} },
	{ MODKEY,           XK_Tab,     view,           {0} },
	{ MODKEY,           XK_q,       killclient,     {0} },
	{ MODKEY,           XK_t,       setlayout,      {.v = &layouts[0]} },
	{ MODKEY,           XK_f,       setlayout,      {.v = &layouts[1]} },
	{ MODKEY,           XK_m,       setlayout,      {.v = &layouts[2]} },
/*	{ MODKEY|ShiftMask, XK_Return,  setlayout,      {0} },*/
/*	{ MODKEY|ShiftMask, XK_space,   togglefloating, {0} },*/
	{ MODKEY,           XK_0,       view,           {.ui = ~0 } },
	{ MODKEY|ShiftMask, XK_0,       tag,            {.ui = ~0 } },
	{ MODKEY,           XK_comma,   focusmon,       {.i = -1 } },
	{ MODKEY,           XK_period,  focusmon,       {.i = +1 } },
	{ MODKEY|ShiftMask, XK_comma,   tagmon,         {.i = -1 } },
	{ MODKEY|ShiftMask, XK_period,  tagmon,         {.i = +1 } },
	TAGKEYS(            XK_1,                       0)
	TAGKEYS(            XK_2,                       1)
	TAGKEYS(            XK_3,                       2)
	TAGKEYS(            XK_4,                       3)
	TAGKEYS(            XK_5,                       4)
	TAGKEYS(            XK_6,                       5)
	TAGKEYS(            XK_7,                       6)
	TAGKEYS(            XK_8,                       7)
	TAGKEYS(            XK_9,                       8)
	{ MODKEY|ShiftMask, XK_q,       quit,           {0} },
};

/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static Button buttons[] = {
	/* click                event mask      button          function        argument */
	{ ClkLtSymbol,          0,              Button1,        setlayout,      {0} },
	{ ClkLtSymbol,          0,              Button3,        setlayout,      {.v = &layouts[2]} },
	{ ClkWinTitle,          0,              Button2,        zoom,           {0} },
	{ ClkStatusText,        0,              Button2,        spawn,          {.v = term } },
	{ ClkClientWin,         MODKEY,         Button1,        movemouse,      {0} },
	{ ClkClientWin,         MODKEY,         Button2,        togglefloating, {0} },
	{ ClkClientWin,         MODKEY,         Button3,        resizemouse,    {0} },
	{ ClkTagBar,            0,              Button1,        view,           {0} },
	{ ClkTagBar,            0,              Button3,        toggleview,     {0} },
	{ ClkTagBar,            MODKEY,         Button1,        tag,            {0} },
	{ ClkTagBar,            MODKEY,         Button3,        toggletag,      {0} },
};
