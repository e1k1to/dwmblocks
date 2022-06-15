//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"Cpu: ",	"checkcpu",			5,			0},
	{"Mem: ", 	"checkram",			5,			0},
	{"Bat: ", 	"checkbat",			5,			0},
	{"",		"date '+%d/%m/%Y'",		15,			0},
	{"",		"date '+%R'",			5,			0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
