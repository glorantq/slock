/* user and group to drop privileges to */
static const char *user  = "nobody";
#define COLORC "red"
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[BG] =     "black",     /* background */
	[INIT] =   "#444444",     /* after initialization */
	[INPUT] =  "#6e85b7",   /* during input */
	[FAILED] = "#E97777",   /* wrong password */
	[CAPS] = "#FEBE8C",         /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/*Enable blur*/
#define BLUR
/*Set blur radius*/
static const int blurRadius=10;
/*Enable Pixelation*/
//#define PIXELATION
/*Set pixelation radius*/
static const int pixelSize=5;

/* time in seconds before the monitor shuts down */
static const int monitortime = 30;

static const int squaresize = 50;