//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {"⌨", "sb-kbselect", 0, 30}, */
	{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
	{"",	"sb-kbselect",	300,	7},
	{"",	"sb-pacpackages",	0,	8},
	{"",	"sb-memory",	10,	14},
	{"",	"sb-cpu",		1,	18},
	{"",	"sb-temp",		10,	18},
	/* {"",	"sb-cpubars",	1,	19}, */
	{"",	"sb-moonphase",	18000,	17},
	{"",	"sb-forecast",	18000,	5},
	/* {"",	"sb-mailbox",	180,	12}, */
	{"",	"sb-nettraf",	1,	16},
	{"",	"sb-volume",	0,	10},
	{"",	"sb-battery",	5,	3},
	{"",	"sb-clock",	60,	1},
	{"",	"sb-internet",	5,	4},
	{"",	"sb-help-icon",	0,	15},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
