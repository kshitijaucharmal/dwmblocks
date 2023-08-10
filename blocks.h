//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"🕒 ", "uptime | cut -d' ' -f 4,5 | tr -d ','", 30, 0},
    {"📜 ", "ls ~/.scripts | wc -l",   60, 0},
	{"🖥️","free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
    {"🔋 ", "acpi | awk '{print $4}' | sed 's/,//g'", 5, 0},
	{"📆 ", "date '+%b %d (%a) %I:%M%p'",					5,		0},
    {"🔈 ", "pactl get-sink-volume 0 | cut -d' ' -f 6 | head -1q",    5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
